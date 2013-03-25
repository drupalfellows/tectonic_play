<?php
/**
 * @file
 * qandapp_views.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function qandapp_views_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|question_|promoted_questions';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'question_';
  $ds_fieldsetting->view_mode = 'promoted_questions';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'author_linked',
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|question_|promoted_questions'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|question_|question_slideshow';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'question_';
  $ds_fieldsetting->view_mode = 'question_slideshow';
  $ds_fieldsetting->settings = array(
    'author' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'author_linked',
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_medium',
    ),
  );
  $export['node|question_|question_slideshow'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|question_|regular_questions';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'question_';
  $ds_fieldsetting->view_mode = 'regular_questions';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'author_linked',
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|question_|regular_questions'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|talk|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'talk';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'create_question_form' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'slideshow' => array(
      'weight' => '4',
      'label' => 'inline',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'page-title',
      ),
    ),
  );
  $export['node|talk|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|talk|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'talk';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'create_question_form' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'slideshow' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|talk|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function qandapp_views_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'create_question_form';
  $ds_field->label = 'Create Question Form';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
module_load_include(\'inc\', \'node\', \'node.pages\');
$node_form = node_add(\'question_\');
drupal_add_js(drupal_get_path(\'theme\', \'qandapp\') . \'/js/toggleQuestionForm.js\');
?>
<div id="add-question-form"><?php print drupal_render($node_form); ?></div>
<button class="add-question-link">Question?</button>
<br />',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['create_question_form'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'slideshow';
  $ds_field->label = 'Slideshow';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
if (arg(0) == \'node\' && is_numeric(arg(1))) $nodeid = arg(1);
$question_slideshow = l(\'Slideshow\',\'talk/slideshow/\'.$nodeid, array(\'absolute\' => TRUE));
print $question_slideshow;
?>

',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['slideshow'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function qandapp_views_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|conference|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'conference';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_description',
        1 => 'field_date',
        2 => 'field_conference_location',
        3 => 'talks_entity_view_1',
      ),
    ),
    'fields' => array(
      'field_description' => 'ds_content',
      'field_date' => 'ds_content',
      'field_conference_location' => 'ds_content',
      'talks_entity_view_1' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|conference|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|question_|promoted_questions';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'question_';
  $ds_layout->view_mode = 'promoted_questions';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'links',
      ),
      'right' => array(
        1 => 'author',
        2 => 'post_date',
        3 => 'field_question',
      ),
    ),
    'fields' => array(
      'links' => 'left',
      'author' => 'right',
      'post_date' => 'right',
      'field_question' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|question_|promoted_questions'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|question_|question_slideshow';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'question_';
  $ds_layout->view_mode = 'question_slideshow';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'author',
        1 => 'post_date',
        2 => 'field_question',
      ),
    ),
    'fields' => array(
      'author' => 'ds_content',
      'post_date' => 'ds_content',
      'field_question' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|question_|question_slideshow'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|question_|regular_questions';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'question_';
  $ds_layout->view_mode = 'regular_questions';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'links',
      ),
      'right' => array(
        1 => 'author',
        2 => 'post_date',
        3 => 'field_question',
      ),
    ),
    'fields' => array(
      'links' => 'left',
      'author' => 'right',
      'post_date' => 'right',
      'field_question' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|question_|regular_questions'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|talk|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'talk';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_talk_description',
        2 => 'field_conference',
        3 => 'field_speaker',
        4 => 'slideshow',
        5 => 'create_question_form',
        6 => 'questions_entity_view_2',
        7 => 'questions_entity_view_1',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_talk_description' => 'ds_content',
      'field_conference' => 'ds_content',
      'field_speaker' => 'ds_content',
      'slideshow' => 'ds_content',
      'create_question_form' => 'ds_content',
      'questions_entity_view_2' => 'ds_content',
      'questions_entity_view_1' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|talk|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|talk|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'talk';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_talk_description',
        1 => 'field_conference',
        2 => 'field_speaker',
        3 => 'slideshow',
        4 => 'create_question_form',
        5 => 'questions_entity_view_2',
        6 => 'questions_entity_view_1',
      ),
    ),
    'fields' => array(
      'field_talk_description' => 'ds_content',
      'field_conference' => 'ds_content',
      'field_speaker' => 'ds_content',
      'slideshow' => 'ds_content',
      'create_question_form' => 'ds_content',
      'questions_entity_view_2' => 'ds_content',
      'questions_entity_view_1' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|talk|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_profile_picture',
      ),
      'right' => array(
        1 => 'field_name',
        2 => 'field_field',
        3 => 'field_location',
      ),
    ),
    'fields' => array(
      'field_profile_picture' => 'left',
      'field_name' => 'right',
      'field_field' => 'right',
      'field_location' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['user|user|default'] = $ds_layout;

  return $export;
}

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
