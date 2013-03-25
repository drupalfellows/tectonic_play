<?php
/**
 * @file
 * qandapp_refreshments.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function qandapp_refreshments_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodejs_pages';
  $strongarm->value = 'talk/*';
  $export['nodejs_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodejs_server_host';
  $strongarm->value = 'localhost';
  $export['nodejs_server_host'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodejs_server_port';
  $strongarm->value = '8080';
  $export['nodejs_server_port'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodejs_server_scheme';
  $strongarm->value = 'http';
  $export['nodejs_server_scheme'] = $strongarm;

  return $export;
}
