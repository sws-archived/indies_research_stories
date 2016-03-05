<?php
/**
 * @file
 * indies_research_stories.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function indies_research_stories_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-stanford_research_story-field_s_image_info'
  $field_instances['bean-stanford_research_story-field_s_image_info'] = array(
    'bundle' => 'stanford_research_story',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This displays an image in the block.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 1,
      ),
      'divider' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 1,
      ),
      'marketing_statement' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'marketing_statement',
        ),
        'type' => 'field_collection_view',
        'weight' => 1,
      ),
      'pop_up_video' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'research_featured_stories',
        ),
        'type' => 'field_collection_view',
        'weight' => 0,
      ),
      'research_featured_stories' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'research_featured_stories',
        ),
        'type' => 'field_collection_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_image_info',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'bean-stanford_research_story-field_s_research_story_author'
  $field_instances['bean-stanford_research_story-field_s_research_story_author'] = array(
    'bundle' => 'stanford_research_story',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Author byline for the associated story.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'divider' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'marketing_statement' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'pop_up_video' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'research_featured_stories' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_research_story_author',
    'label' => 'Author',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'bean-stanford_research_story-field_s_research_story_body'
  $field_instances['bean-stanford_research_story-field_s_research_story_body'] = array(
    'bundle' => 'stanford_research_story',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'News body content for associated story.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'divider' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'marketing_statement' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'pop_up_video' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'research_featured_stories' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_research_story_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'bean-stanford_research_story-field_s_research_story_dept'
  $field_instances['bean-stanford_research_story-field_s_research_story_dept'] = array(
    'bundle' => 'stanford_research_story',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add the departments associated with this story.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'divider' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'marketing_statement' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'pop_up_video' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'research_featured_stories' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_research_story_dept',
    'label' => 'Departments',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'bean-stanford_research_story-field_s_research_story_divider'
  $field_instances['bean-stanford_research_story-field_s_research_story_divider'] = array(
    'bundle' => 'stanford_research_story',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Placeholder for designating visual divider.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'divider' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'marketing_statement' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'pop_up_video' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'research_featured_stories' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'bean',
    'field_name' => 'field_s_research_story_divider',
    'label' => 'Divider',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'bean-stanford_research_story-field_s_research_story_featured'
  $field_instances['bean-stanford_research_story-field_s_research_story_featured'] = array(
    'bundle' => 'stanford_research_story',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check to include this on the homepage.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'divider' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'marketing_statement' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'pop_up_video' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'research_featured_stories' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'bean',
    'field_name' => 'field_s_research_story_featured',
    'label' => 'Featured',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'bean-stanford_research_story-field_s_research_story_institute'
  $field_instances['bean-stanford_research_story-field_s_research_story_institute'] = array(
    'bundle' => 'stanford_research_story',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the Institute(s) associated with this story.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'divider' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'marketing_statement' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'pop_up_video' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'research_featured_stories' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_research_story_institute',
    'label' => 'Institutes',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'bean-stanford_research_story-field_s_research_story_quote'
  $field_instances['bean-stanford_research_story-field_s_research_story_quote'] = array(
    'bundle' => 'stanford_research_story',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Quote text for associated story.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'divider' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'marketing_statement' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'pop_up_video' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'research_featured_stories' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_research_story_quote',
    'label' => 'Quote',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'bean-stanford_research_story-field_s_research_story_read_more'
  $field_instances['bean-stanford_research_story-field_s_research_story_read_more'] = array(
    'bundle' => 'stanford_research_story',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Link to news article for user to read more.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'divider' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'marketing_statement' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'pop_up_video' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'research_featured_stories' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_research_story_read_more',
    'label' => 'Read More',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => 'read_more',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 1,
      'title_maxlength' => 128,
      'title_value' => 'read more',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'bean-stanford_research_story-field_s_research_story_statement'
  $field_instances['bean-stanford_research_story-field_s_research_story_statement'] = array(
    'bundle' => 'stanford_research_story',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add INDIES About statement.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'divider' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'marketing_statement' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'pop_up_video' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'research_featured_stories' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_research_story_statement',
    'label' => 'Statement',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'bean-stanford_research_story-field_s_research_story_video'
  $field_instances['bean-stanford_research_story-field_s_research_story_video'] = array(
    'bundle' => 'stanford_research_story',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Insert HTML code for video embed.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'divider' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'marketing_statement' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'pop_up_video' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'research_featured_stories' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_research_story_video',
    'label' => 'Video Embed',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 0,
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'bean-stanford_research_story-field_s_reserach_story_more'
  $field_instances['bean-stanford_research_story-field_s_reserach_story_more'] = array(
    'bundle' => 'stanford_research_story',
    'default_value' => array(
      0 => array(
        'title' => 'more',
        'url' => 'stanford-interdisciplinary',
      ),
    ),
    'deleted' => 0,
    'description' => 'Add URL to About page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'divider' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'marketing_statement' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'pop_up_video' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'research_featured_stories' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'bean',
    'field_name' => 'field_s_reserach_story_more',
    'label' => 'More',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => 'more',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 1,
      'title_maxlength' => 128,
      'title_value' => 'more',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 19,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add INDIES About statement.');
  t('Add URL to About page.');
  t('Add the departments associated with this story.');
  t('Author');
  t('Author byline for the associated story.');
  t('Body');
  t('Check to include this on the homepage.');
  t('Departments');
  t('Divider');
  t('Featured');
  t('Image');
  t('Insert HTML code for video embed.');
  t('Institutes');
  t('Link to news article for user to read more.');
  t('More');
  t('News body content for associated story.');
  t('Placeholder for designating visual divider.');
  t('Quote');
  t('Quote text for associated story.');
  t('Read More');
  t('Select the Institute(s) associated with this story.');
  t('Statement');
  t('This displays an image in the block.');
  t('Video Embed');

  return $field_instances;
}
