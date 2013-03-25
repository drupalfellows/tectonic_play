<?php
/**
 * @file
 * conference.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function conference_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu:conferences
  $menu_links['user-menu:conferences'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'conferences',
    'router_path' => 'conferences',
    'link_title' => 'Conferences',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Conferences');


  return $menu_links;
}
