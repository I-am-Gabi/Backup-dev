from pyramid.config import Configurator
from pyramid.events import subscriber
from pyramid.events import NewRequest
from pyramid.events import BeforeRender
from gridfs import GridFS
from urlparse import urlparse
import pymongo
from pyramid.authentication import AuthTktAuthenticationPolicy
from pyramid.authorization import ACLAuthorizationPolicy
from my_wiki.security import groupfinder
from my_wiki.resources import Root
from my_wiki.resources import RootFactory


def main(global_config, **settings):
    """ This function returns a WSGI application.
    """
    authn_policy = AuthTktAuthenticationPolicy(
        'sosecret', callback=groupfinder, hashalg='sha512')
    authz_policy = ACLAuthorizationPolicy()
    config = Configurator(settings=settings,
                          root_factory='my_wiki.resources.RootFactory')
    config.set_authentication_policy(authn_policy)
    config.set_authorization_policy(authz_policy) 
    config = Configurator(settings=settings, root_factory=Root)
    config.add_view('my_wiki.views.my_view',
                    context='my_wiki:resources.Root',
                    renderer='my_wiki:templates/mytemplate.pt')
    config.add_static_view('static', 'my_wiki:static')
    db_url = urlparse(settings['mongo_uri'])  
    config.add_route('view_wiki', '/')
    config.add_route('view_page', '/{pagename}')
    config.add_route('add_page', '/add_page/{pagename}')
    config.add_route('edit_page', '/{pagename}/edit_page')
    config.add_route('login', '/login')
    config.add_route('logout', '/logout') 
     

    # MongoDB
    def add_mongo_db(event):
        settings = event.request.registry.settings
        url = settings['mongodb.url']
        db_name = settings['mongodb.db_name']
        db = settings['mongodb_conn'][db_name]
        event.request.db = db
    db_uri = settings['mongodb.url']
    MongoDB = pymongo.Connection
    if 'pyramid_debugtoolbar' in set(settings.values()):
        class MongoDB(pymongo.Connection):
            def __html__(self):
                return 'MongoDB: <b>{}></b>'.format(self)
    conn = MongoDB(db_uri)
    config.registry.settings['mongodb_conn'] = conn
    config.add_subscriber(add_mongo_db, NewRequest)
    config.scan('my_wiki') 


    def add_db(request):
       db = config.registry.db[db_url.path[1:]]
       if db_url.username and db_url.password:
           db.authenticate(db_url.username, db_url.password)
       return db

    def add_fs(request):
        return GridFS(request.db)

    config.add_request_method(add_db, 'db', reify=True)
    config.add_request_method(add_fs, 'fs', reify=True)

    config.scan()
    
    return config.make_wsgi_app()
