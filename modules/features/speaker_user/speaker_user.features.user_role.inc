<?php
/**
 * @file
 * speaker_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function speaker_user_user_default_roles() {
  $roles = array();

  // Exported role: speaker user.
  $roles['speaker user'] = array(
    'name' => 'speaker user',
    'weight' => '2',
  );

  return $roles;
}
