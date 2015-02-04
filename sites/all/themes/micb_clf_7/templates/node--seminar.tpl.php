<div class="seminar-event">
	<div class="ubc">THE UNIVERSITY OF BRITISH COLUMBIA</div>
	<div class="dept">Department of Microbiology and Immunology<br />presents a seminar by:</div>
	<div class="presenter"><?php print render($content['field_presenter_name']) ?></div>
	<div class="presenter-title"><?php print render($content['field_presenter_title']) ?></div>
	<div class="presenter-title">entitled:</div>
	<div class="seminar-title"><?php print render($content['field_seminar_title']) ?></div>
	<?php if(isset($content['body'])): ?>
		<div class="body">
			<?php print render($content['body']) ?>
		</div>
	<?php endif; ?>
	<div class="date">
		<?php print render($content['field_date']) ?>
		  <br />
		  Location:
		  <br />
		  <?php print render($content['field_location1']) ?>
		  <?php print render($content['field_location_2']) ?>
	</div>
	<?php if(isset($content['field_sponsored'])): ?>
		<div class="host">Hosted by <?php print render($content['field_sponsored']) ?></div>
	<?php endif; ?>
	<img alt="" src="/sites/default/files/roles/drupal_office/ubclogo.png" />
</div>
