<?php
/**
 * @file
 * conference.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function conference_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function conference_node_info() {
  $items = array(
    'conference' => array(
      'name' => t('Conference'),
      'base' => 'node_content',
      'description' => t('Contains Talks. Created by ??'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
