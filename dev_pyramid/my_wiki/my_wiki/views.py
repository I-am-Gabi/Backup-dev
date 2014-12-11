from pymongo import DESCENDING 
from pyramid.view import view_config
from pyramid.httpexceptions import HTTPFound
import re

from pyramid.httpexceptions import (
    HTTPFound,
    HTTPNotFound,
    ) 

from pyramid.view import (
    view_config,
    forbidden_view_config,
    )

from pyramid.security import (
    remember,
    forget,
    authenticated_userid,
    )

from .security import USERS

wikiwords = re.compile(r"\b([A-Z]\w+[A-Z]+\w+)")

def my_view(request):
    return {'project':'my_wiki'}

@view_config(route_name='view_wiki', permission='view')
def viewwiki(request):
    return HTTPFound(location = request.route_url('view.page', pagename='FrontPage'))

@view_config(route_name='view_page', renderer='templates/view.pt', permission='view')
def viewpage(request):
    pagename = request.matchdict['pagename']
    page = request.db['my_wiki'].find( { title: pagename } )	
    if page is None:
        return HTTPNotFound('No such page')
     
    def check(match):
        word = match.group(1)
        exists = request.db['my_wiki'].find(title=word).all()
        if exists:
            view_url = request.route_url('view_page', pagename=word)
            return '<a href="%s">%s</a>' % (view_url, word)
        else:
            add_url = request.route_url('add_page', pagename=word)
            return '<a href="%s">%s</a>' % (add_url, word)

    content = publish_parts(page.data, writer_name='html')['html_body']
    content = wikiwords.sub(check, content)
    edit_url = request.route_url('edit_page', pagename=pagename)
    return dict(page=page, content=content, edit_url=edit_url, logged_in = authenticated_userid(request))

@view_config(route_name='add_page', renderer='templates/edit.pt', permission='edit')
def addpage(request):
    pagename = request.matchdict['pagename']
    if 'form.submitted' in request.params:
        body = request.params['body'] 
	page = {'title': pagename, 'body': body }
        request.db['my_wiki'].insert(page)
        return HTTPFound(location = request.route_url('view_page', pagename=pagename))
    save_url = request.route_url('add_page', pagename=pagename)
    page = Page('', '')
    return dict(page=page, save_url=save_url, logged_in = authenticated_userid(request))

@view_config(route_name='edit_page', renderer='templates/edit.pt', permission='edit')
def editpage(request):
    pagename = request.matchdict['pagename']
    page = request.db['my_wiki'].find({ title: pagename })	
    if 'form.submitted' in request.params:
        body = request.params['body']
	page = {'title': pagename, 'body': body }
        request.db['my_wiki'].insert(page)
        return HTTPFound(location = request.route_url('view_page',
                                                      pagename=pagename))
    return dict(
        page=page,
        save_url = request.route_url('edit_page', pagename=pagename, logged_in = authenticated_userid(request)),
        )

@view_config(route_name='login', renderer='templates/login.pt')
@forbidden_view_config(renderer='templates/login.pt')
def login(request):
    login_url = request.route_url('login')
    referrer = request.url
    if referrer == login_url:
        referrer = '/' # never use the login form itself as came_from
    came_from = request.params.get('came_from', referrer)
    message = ''
    login = ''
    password = ''
    if 'form.submitted' in request.params:
        login = request.params['login']
        password = request.params['password']
        if USERS.get(login) == password:
            headers = remember(request, login)
            return HTTPFound(location = came_from,
                             headers = headers)
        message = 'Failed login'

    return dict(
        message = message,
        url = request.application_url + '/login',
        came_from = came_from,
        login = login,
        password = password,
        )

@view_config(route_name='logout')
def logout(request):
    headers = forget(request)
    return HTTPFound(location = request.route_url('view_wiki'),
                     headers = headers)