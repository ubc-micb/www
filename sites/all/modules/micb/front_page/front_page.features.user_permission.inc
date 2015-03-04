<?php
/**
 * @file
 * front_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function front_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create carousel_image content'.
  $permissions['create carousel_image content'] = array(
    'name' => 'create carousel_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_office' => 'drupal_office',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any carousel_image content'.
  $permissions['delete any carousel_image content'] = array(
    'name' => 'delete any carousel_image content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own carousel_image content'.
  $permissions['delete own carousel_image content'] = array(
    'name' => 'delete own carousel_image content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any carousel_image content'.
  $permissions['edit any carousel_image content'] = array(
    'name' => 'edit any carousel_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_office' => 'drupal_office',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own carousel_image content'.
  $permissions['edit own carousel_image content'] = array(
    'name' => 'edit own carousel_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_office' => 'drupal_office',
    ),
    'module' => 'node',
  );

  return $permissions;
}
