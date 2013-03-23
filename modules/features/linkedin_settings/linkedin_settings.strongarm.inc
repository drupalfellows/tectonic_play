<?php
/**
 * @file
 * linkedin_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function linkedin_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_auth_bypass_register_checks';
  $strongarm->value = 1;
  $export['linkedin_auth_bypass_register_checks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_auth_login_link_on_block';
  $strongarm->value = 1;
  $export['linkedin_auth_login_link_on_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_auth_login_link_on_page';
  $strongarm->value = 1;
  $export['linkedin_auth_login_link_on_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_consumer_key';
  $strongarm->value = 'xvw2x5fbxu9v';
  $export['linkedin_consumer_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_consumer_secret';
  $strongarm->value = 'mZLb5n623jTcmjwx';
  $export['linkedin_consumer_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_debug_mode';
  $strongarm->value = 0;
  $export['linkedin_debug_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_liboauth_path';
  $strongarm->value = 'profiles/tectonic_play/modules/oauth/lib/OAuth.php';
  $export['linkedin_liboauth_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_profile_user_page_enabled';
  $strongarm->value = '4';
  $export['linkedin_profile_user_page_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_profile_user_page_linkedin_fields';
  $strongarm->value = array(
    'first-name' => 'first-name',
    'last-name' => 'last-name',
    'location' => 'location',
    'industry' => 'industry',
    'summary' => 'summary',
    'specialties' => 'specialties',
    'honors' => 'honors',
    'interests' => 'interests',
    'picture-url' => 'picture-url',
    'public-profile-url' => 'public-profile-url',
    'id' => 0,
    'headline' => 0,
    'num-recommenders' => 0,
    'member-url-resources' => 0,
    'positions' => 0,
    'educations' => 0,
    'distance' => 0,
    'current-status' => 0,
    'current-status-timestamp' => 0,
    'num-connections' => 0,
    'num-connections-capped' => 0,
    'associations' => 0,
    'phone-numbers' => 0,
    'im-accounts' => 0,
    'twitter-accounts' => 0,
    'date-of-birth' => 0,
    'main-address' => 0,
  );
  $export['linkedin_profile_user_page_linkedin_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkedin_profile_user_page_weight';
  $strongarm->value = '2';
  $export['linkedin_profile_user_page_weight'] = $strongarm;

  return $export;
}
