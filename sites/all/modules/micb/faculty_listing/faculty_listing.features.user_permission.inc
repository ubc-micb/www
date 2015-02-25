<?php
/**
 * @file
 * faculty_listing.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function faculty_listing_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create faculty content'.
  $permissions['create faculty content'] = array(
    'name' => 'create faculty content',
    'roles' => array(
      'drupal_office' => 'drupal_office',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any faculty content'.
  $permissions['delete any faculty content'] = array(
    'name' => 'delete any faculty content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_office' => 'drupal_office',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own faculty content'.
  $permissions['delete own faculty content'] = array(
    'name' => 'delete own faculty content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_office' => 'drupal_office',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any faculty content'.
  $permissions['edit any faculty content'] = array(
    'name' => 'edit any faculty content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_office' => 'drupal_office',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own faculty content'.
  $permissions['edit own faculty content'] = array(
    'name' => 'edit own faculty content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_office' => 'drupal_office',
    ),
    'module' => 'node',
  );

  return $permissions;
}
