<?php
/**
 * @file
 * q_app_user_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function q_app_user_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-user-menu.
  $menus['menu-user-menu'] = array(
    'menu_name' => 'menu-user-menu',
    'title' => 'User Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('User Menu');


  return $menus;
}
