<?php
/**
 * @file
 * humanitarianresponse_aggregator.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_aggregator_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer news feeds.
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'aggregator',
  );

  return $permissions;
}
