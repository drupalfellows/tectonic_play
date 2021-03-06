<?php
/**
 * @file
 * question.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function question_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function question_flag_default_flags() {
  $flags = array();
  // Exported flag: "Like".
  $flags['like'] = array(
    'content_type' => 'node',
    'title' => 'Like',
    'global' => '0',
    'types' => array(
      0 => 'question_',
    ),
    'flag_short' => '[node:flag-like-count]',
    'flag_long' => 'Has [node:flag-like-count] endorsement(s) so far',
    'flag_message' => '',
    'unflag_short' => '[node:flag-like-count]',
    'unflag_long' => 'Has [node:flag-like-count] endorsement(s) now',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
        1 => '4',
      ),
      'unflag' => array(
        0 => '2',
        1 => '4',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'question',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function question_node_info() {
  $items = array(
    'question_' => array(
      'name' => t('Question'),
      'base' => 'node_content',
      'description' => t('A Question asked by a user.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
