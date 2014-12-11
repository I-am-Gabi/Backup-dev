from django.shortcuts import render_to_response, get_object_or_404
from django.http import HttpResponseRedirect
from django.core.urlresolvers import reverse
from django.http import Http404
from polls.models import Poll, Choice
from django.core.context_processors import csrf

def index(request):
	latest_poll_list = Poll.objects.all().order_by('-pub_date')[:5]
	return render_to_response('index.html', {'latest_poll_list': latest_poll_list})

def detail(request, poll_id):
	try:
		p = get_object_or_404(Poll, pk=poll_id)
	except Poll.DoesNotExist:
		raise Http404
	return render_to_response('detail.html', {'poll': p})

def vote(request, poll_id):
	p = get_object_or_404(Poll, pk=poll_id)
	try:
		selected_choice = p.choice_set.get(pk=request.Post['choice'])
	except (KeyError, Choice.DoesNotExist):
		return render_to_response('detail.html', {
			'poll': p,
			'error_message': "You didn't select a choice",
			})
	else:
		selected_choice.vote += 1
		selected_choice.save()

		return HttpResponseRedirect(reverse('polls.views.results', args=(p.id,)))

def results(request, poll_id):
	p - get_object_or_404(Poll, pk=poll_id)
	return render_to_response('results.html', {'poll': p})