from django.conf.urls import patterns, url

urlpatterns = patterns('tweets.views',
	url(r'^$', 'index', name='index'),
	url(r'^add/tweet/$', 'add_tweet',
		name='tweet_add'),
	)