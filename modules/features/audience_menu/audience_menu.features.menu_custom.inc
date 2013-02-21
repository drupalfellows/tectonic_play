<?php
/**
 * @file
 * audience_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function audience_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-audience.
  $menus['menu-audience'] = array(
    'menu_name' => 'menu-audience',
    'title' => 'Audience',
    'description' => 'The menu for an audience member, i.e. links to add question, links to view questions, etc.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Audience');
  t('The menu for an audience member, i.e. links to add question, links to view questions, etc.');


  return $menus;
}
