jQuery(document).ready(function($) {
	
	
	// toggle blog-menu
	$(".nav-toggle").on("click", function(){	
		$(this).toggleClass("active");
		$(".navigation").slideToggle(function (){
			$(".navigation").css('overflow', 'visible');
		});
	});
	
	
	// Load Flexslider
    $(".flexslider").flexslider({
        animation: "slide",
        controlNav: false,
        prevText: "Prev",
        nextText: "Next",
        smoothHeight: true   
    });
    
	
	// Smooth scroll to the top	
    $('.tothetop').click(function(){
        $("html, body").animate({ scrollTop: 0 }, 500);
        return false;
    });
    
	
	// Add custom audio player
	$('#audio-player').mediaelementplayer({
	    alwaysShowControls: true,
	    features: ['playpause','progress','volume'],
	    audioVolume: 'horizontal',
	    audioWidth: 1000,
	    audioHeight: 100,
	    autosizeProgress:false,	    
	}); 
	
	
	// resize videos after container
	var vidSelector = ".post iframe, .post object, .post video, .widget-content iframe, .widget-content object, .widget-content iframe";	
	var resizeVideo = function(sSel) {
		$( sSel ).each(function() {
			var $video = $(this),
				$container = $video.parent(),
				iTargetWidth = $container.width();

			if ( !$video.attr("data-origwidth") ) {
				$video.attr("data-origwidth", $video.attr("width"));
				$video.attr("data-origheight", $video.attr("height"));
			}

			var ratio = iTargetWidth / $video.attr("data-origwidth");

			$video.css("width", iTargetWidth + "px");
			$video.css("height", ( $video.attr("data-origheight") * ratio ) + "px");
		});
	};

	resizeVideo(vidSelector);

	$(window).resize(function() {
		resizeVideo(vidSelector);
	});
	

});