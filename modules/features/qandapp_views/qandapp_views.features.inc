<?php
/**
 * @file
 * qandapp_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function qandapp_views_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function qandapp_views_views_api() {
  return array("version" => "3.0");
}
