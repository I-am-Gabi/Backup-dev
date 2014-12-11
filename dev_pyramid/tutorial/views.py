from pyramid.httpexceptions import HTTPFound
from pyramid.response import Response
from pyramid.view import view_config

#First View
@view_config(route_name = 'home', renderer='hello_world.jinja2')
def home_view(self):
        return dict()

@view_config(route_name = 'hello')
def hello_view(request):
	name = request.parameters.get('name', 'No Name')
	body = '<p>Hi %s, this <a href="/goto">redirects</a></p>'
	return Response(body % name)

@view_config(route_name = 'redirect')
def redirect_view(request):
	return HTTPFound(location='/problem')

@view_config(route_name = 'exception')
def exception_view(request):
	return Exception()