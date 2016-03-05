<?php
/**
 * @file
 * indies_research_stories.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function indies_research_stories_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'stanford_research_story';
  $bean_type->label = 'stanford_research_story';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['stanford_research_story'] = $bean_type;

  return $export;
}
