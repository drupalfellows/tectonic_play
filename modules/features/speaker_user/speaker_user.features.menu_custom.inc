<?php
/**
 * @file
 * speaker_user.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function speaker_user_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-speaker.
  $menus['menu-speaker'] = array(
    'menu_name' => 'menu-speaker',
    'title' => 'Speaker',
    'description' => 'Menu displayed for a speaker type user',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu displayed for a speaker type user');
  t('Speaker');


  return $menus;
}
