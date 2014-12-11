from django.conf.urls import patterns, include, url
#from django.conf.urls.defaults import *

from django.contrib import admin
admin.autodiscover()

urlpatterns = patterns('polls.views',
	(r'^$', 'index'),
	(r'^(?P<poll_id>\d+)/$', views.details, name = 'detail'), 
	(r'^(?P<poll_id>\d+)/results/$', views.details, name = 'results'),
	(r'^(?P<poll_id>\d+)/vote/$', views.details, name = 'vote'),	 
    url(r'^admin/', include(admin.site.urls)),
)
