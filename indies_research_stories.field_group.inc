<?php
/**
 * @file
 * indies_research_stories.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function indies_research_stories_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_departments|bean|stanford_research_story|research_featured_stories';
  $field_group->group_name = 'group_departments';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_research_story';
  $field_group->mode = 'research_featured_stories';
  $field_group->parent_name = 'group_story_styles';
  $field_group->data = array(
    'label' => 'Departments',
    'weight' => '16',
    'children' => array(
      0 => 'field_s_research_story_dept',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Departments',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-departments field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_departments|bean|stanford_research_story|research_featured_stories'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_institutes|bean|stanford_research_story|research_featured_stories';
  $field_group->group_name = 'group_institutes';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_research_story';
  $field_group->mode = 'research_featured_stories';
  $field_group->parent_name = 'group_story_styles';
  $field_group->data = array(
    'label' => 'Institutes',
    'weight' => '15',
    'children' => array(
      0 => 'field_s_research_story_institute',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Institutes',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-institutes field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_institutes|bean|stanford_research_story|research_featured_stories'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postcard_column1|bean|stanford_research_story|marketing_statement';
  $field_group->group_name = 'group_postcard_column1';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_research_story';
  $field_group->mode = 'marketing_statement';
  $field_group->parent_name = 'group_postcard';
  $field_group->data = array(
    'label' => 'Postcard Column 1',
    'weight' => '15',
    'children' => array(
      0 => 'field_s_image_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Column 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard-image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_postcard_column1|bean|stanford_research_story|marketing_statement'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postcard|bean|stanford_research_story|marketing_statement';
  $field_group->group_name = 'group_postcard';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_research_story';
  $field_group->mode = 'marketing_statement';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '0',
    'children' => array(
      0 => 'group_postcard_column1',
      1 => 'group_postcard_column2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard-left',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_postcard|bean|stanford_research_story|marketing_statement'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research_admin|bean|stanford_research_story|form';
  $field_group->group_name = 'group_research_admin';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_research_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administrative Settings',
    'weight' => '8',
    'children' => array(
      0 => 'revision',
      1 => 'redirect',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-research-admin field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_research_admin|bean|stanford_research_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_divider_section|bean|stanford_research_story|form';
  $field_group->group_name = 'group_s_divider_section';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_research_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add/Edit Divider Line',
    'weight' => '7',
    'children' => array(
      0 => 'field_s_research_story_divider',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_s_divider_section|bean|stanford_research_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_marketing_section|bean|stanford_research_story|form';
  $field_group->group_name = 'group_s_marketing_section';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_research_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add/Edit Marketing Statement',
    'weight' => '4',
    'children' => array(
      0 => 'field_s_reserach_story_more',
      1 => 'field_s_research_story_statement',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_s_marketing_section|bean|stanford_research_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_research_story_gen|bean|stanford_research_story|form';
  $field_group->group_name = 'group_s_research_story_gen';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_research_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add/Edit General',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_image_info',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Add/Edit General',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_s_research_story_gen|bean|stanford_research_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_stories_section|bean|stanford_research_story|form';
  $field_group->group_name = 'group_s_stories_section';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_research_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add/Edit Story',
    'weight' => '5',
    'children' => array(
      0 => 'field_s_research_story_read_more',
      1 => 'field_s_research_story_institute',
      2 => 'field_s_research_story_dept',
      3 => 'field_s_research_story_body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_s_stories_section|bean|stanford_research_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_video_section|bean|stanford_research_story|form';
  $field_group->group_name = 'group_s_video_section';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_research_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add/Edit Video Section',
    'weight' => '6',
    'children' => array(
      0 => 'field_s_research_story_author',
      1 => 'field_s_research_story_quote',
      2 => 'field_s_research_story_video',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_s_video_section|bean|stanford_research_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_story_styles|bean|stanford_research_story|research_featured_stories';
  $field_group->group_name = 'group_story_styles';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_research_story';
  $field_group->mode = 'research_featured_stories';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Story Styles',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_research_story_read_more',
      1 => 'field_s_research_story_body',
      2 => 'bean_title',
      3 => 'group_institutes',
      4 => 'group_departments',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Story Styles',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-story-styles field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_story_styles|bean|stanford_research_story|research_featured_stories'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_style|bean|stanford_research_story|pop_up_video';
  $field_group->group_name = 'group_video_style';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_research_story';
  $field_group->mode = 'pop_up_video';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video Style',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_research_story_author',
      1 => 'field_s_research_story_quote',
      2 => 'play_button',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Video Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-video-style field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_video_style|bean|stanford_research_story|pop_up_video'] = $field_group;

  return $export;
}
