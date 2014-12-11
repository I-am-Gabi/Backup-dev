from django.conf.urls import patterns, include, url

from django.contrib import admin
admin.autodiscover()

urlpatterns = patterns('tweets.views', 
    url(r'^', include('tweets.urls')),
)
