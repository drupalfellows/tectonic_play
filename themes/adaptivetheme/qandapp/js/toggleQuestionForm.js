(function ($) {
 
	Drupal.behaviors.toggleQuestionForm = {
		attach: function (context, settings) {
			$('#add-question-form').hide();
			$('.add-question-link').once('click').click(function (event) {	
				$('#add-question-form').slideToggle('slow');
			});
		}
	};
})(jQuery);
