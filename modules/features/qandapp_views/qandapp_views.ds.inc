<?php
/**
 * @file
 * qandapp_views.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function qandapp_views_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'conference_page';
  $ds_view_mode->label = 'Conference Page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['conference_page'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'promoted_questions';
  $ds_view_mode->label = 'Promoted Questions';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['promoted_questions'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'question_slideshow';
  $ds_view_mode->label = 'Question Slideshow';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['question_slideshow'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'regular_questions';
  $ds_view_mode->label = 'Regular Questions';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['regular_questions'] = $ds_view_mode;

  return $export;
}
