<?php
/**
 * @file
 * speaker_user.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function speaker_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: access rules debug.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(),
    'module' => 'rules',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(),
    'module' => 'rules',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(),
    'module' => 'rules',
  );

  // Exported permission: dlike access list.
  $permissions['dlike access list'] = array(
    'name' => 'dlike access list',
    'roles' => array(
      0 => 'organizer user',
      1 => 'speaker user',
    ),
    'module' => 'dlike',
  );

  return $permissions;
}
