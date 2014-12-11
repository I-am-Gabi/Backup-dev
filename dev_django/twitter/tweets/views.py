from django.shortcuts import render


def index(request):
	return render(request, 'index.html', {})

def add_tweet(request):
	return render(request, 'tweet/add.html', {})