<?php
// Uncomment for debug
// dpm($row);

$img_url = file_uri_target($variables["row"]->field_field_carousel_image_image[0]["raw"]["uri"]);
echo('<div class="carousel-image" style="background-image: url(/sites/default/files/'.$img_url.');"></div>')

?>