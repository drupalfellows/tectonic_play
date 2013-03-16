<?php
/**
 * @file
 * q_app_organizer_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function q_app_organizer_user_user_default_roles() {
  $roles = array();

  // Exported role: organizer user.
  $roles['organizer user'] = array(
    'name' => 'organizer user',
    'weight' => '3',
  );

  return $roles;
}
