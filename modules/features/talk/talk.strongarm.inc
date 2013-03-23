<?php
/**
 * @file
 * talk.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function talk_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__talk';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'display_conference_password' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'questions_entity_view_1' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'questions_entity_view_1_form' => array(
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
        ),
        'questions_entity_view_2' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__talk'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_talk';
  $strongarm->value = '0';
  $export['language_content_type_talk'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_talk';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_talk'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_talk';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_talk'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_talk';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_talk'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_talk';
  $strongarm->value = '1';
  $export['node_preview_talk'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_talk';
  $strongarm->value = 0;
  $export['node_submitted_talk'] = $strongarm;

  return $export;
}
