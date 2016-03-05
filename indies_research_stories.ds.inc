<?php
/**
 * @file
 * indies_research_stories.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function indies_research_stories_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'bean|stanford_research_story|pop_up_video';
  $ds_fieldsetting->entity_type = 'bean';
  $ds_fieldsetting->bundle = 'stanford_research_story';
  $ds_fieldsetting->view_mode = 'pop_up_video';
  $ds_fieldsetting->settings = array(
    'play_button' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_s_research_story_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['bean|stanford_research_story|pop_up_video'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function indies_research_stories_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'play_button';
  $ds_field->label = 'Play Button';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'bean' => 'bean',
  );
  $ds_field->ui_limit = '*|pop_up_video';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<span class="play-button-wrapper"><a href="#vid-[bean:delta]" class="play-button">Play</a></span>
<div id="vid-[bean:delta]" class="video-embed-container">
[bean:field_s_research_story_video]
</div>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['play_button'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function indies_research_stories_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|stanford_research_story|pop_up_video';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'stanford_research_story';
  $ds_layout->view_mode = 'pop_up_video';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_s_image_info',
        1 => 'group_video_style',
        2 => 'field_s_research_story_author',
        3 => 'field_s_research_story_quote',
        4 => 'play_button',
      ),
    ),
    'fields' => array(
      'field_s_image_info' => 'ds_content',
      'group_video_style' => 'ds_content',
      'field_s_research_story_author' => 'ds_content',
      'field_s_research_story_quote' => 'ds_content',
      'play_button' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['bean|stanford_research_story|pop_up_video'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function indies_research_stories_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'pop_up_video';
  $ds_view_mode->label = 'Pop-up Video';
  $ds_view_mode->entities = array(
    'bean' => 'bean',
  );
  $export['pop_up_video'] = $ds_view_mode;

  return $export;
}
