<?php
/**
 * @file
 * faculty_listing.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function faculty_listing_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_faculty:faculty-staff/faculty
  $menu_links['main-menu_faculty:faculty-staff/faculty'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faculty-staff/faculty',
    'router_path' => 'faculty-staff/faculty',
    'link_title' => 'Faculty',
    'options' => array(
      'identifier' => 'main-menu_faculty:faculty-staff/faculty',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_faculty--staff:node/572',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Faculty');


  return $menu_links;
}
