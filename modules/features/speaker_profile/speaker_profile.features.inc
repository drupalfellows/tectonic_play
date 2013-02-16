<?php
/**
 * @file
 * speaker_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function speaker_profile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function speaker_profile_node_info() {
  $items = array(
    'speaker_profile' => array(
      'name' => t('Speaker Profile'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
