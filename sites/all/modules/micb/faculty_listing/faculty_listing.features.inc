<?php
/**
 * @file
 * faculty_listing.features.inc
 */

/**
 * Implements hook_views_api().
 */
function faculty_listing_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function faculty_listing_image_default_styles() {
  $styles = array();

  // Exported image style: faculty_thumbnail.
  $styles['faculty_thumbnail'] = array(
    'name' => 'faculty_thumbnail',
    'label' => 'faculty_thumbnail',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 85,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
