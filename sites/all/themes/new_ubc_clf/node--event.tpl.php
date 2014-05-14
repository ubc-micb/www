<p style="text-align:right; margin: 0;"><?php print print_insert_link(); ?></p>
<div class="seminar-event">
<h2>THE UNIVERSITY OF BRITISH COLUMBIA</h2>
<h3>Department of Microbiology and Immunology <br/ > presents</h3>
<h2><?php print $title ?></h2>
<h3><?php print render($content['field_date']) ?></h3>
<?php if(isset($content['body'])): ?><div class="body"><?php print render($content['body']) ?></div><?php endif; ?>
<?php if(isset($content['field_location1'])): ?>
<h4>Location:<br />
<?php print render($content['field_location1']) ?>
<?php print render($content['field_location_2']) ?></h4>
<?php endif; ?>
<img alt="" src="/sites/default/files/roles/drupal_office/ubclogo.png" />
</div>
