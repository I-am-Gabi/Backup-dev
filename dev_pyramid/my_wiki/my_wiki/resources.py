from pyramid.security import (
    Allow,
    Everyone,
    )

class Root(object):
    def __init__(self, request):
        self.request = request

class RootFactory(object):
    __acl__ = [ (Allow, Everyone, 'view'),
                (Allow, 'group:editors', 'edit') ]
    def __init__(self, request):
        pass
