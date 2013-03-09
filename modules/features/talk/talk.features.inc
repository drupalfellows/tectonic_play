<?php
/**
 * @file
 * talk.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function talk_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function talk_node_info() {
  $items = array(
    'talk' => array(
      'name' => t('Talk'),
      'base' => 'node_content',
      'description' => t('The contents of a talk: summary, conference, speaker'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
