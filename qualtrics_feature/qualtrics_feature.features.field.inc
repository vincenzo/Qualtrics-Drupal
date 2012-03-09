<?php
/**
 * @file
 * qualtrics_feature.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function qualtrics_feature_field_default_fields() {
  $fields = array();

  // Exported field: 'node-qualtrics_survey-body'
  $fields['node-qualtrics_survey-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'qualtrics_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Enter a description or introductive text for the embedded survey.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-qualtrics_survey-field_survey'
  $fields['node-qualtrics_survey-field_survey'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_survey',
      'foreign keys' => array(),
      'indexes' => array(
        'sid' => array(
          0 => 'sid',
        ),
      ),
      'module' => 'qualtrics_embed',
      'settings' => array(
        'qualtrics_embed_append_username' => 'no',
        'qualtrics_embed_height' => '600',
        'qualtrics_embed_width' => '800',
      ),
      'translatable' => '0',
      'type' => 'field_qualtrics_survey',
    ),
    'field_instance' => array(
      'bundle' => 'qualtrics_survey',
      'default_value' => array(
        0 => array(
          'sid' => 'SV_dgU9prDOXuA8cQI',
        ),
      ),
      'deleted' => '0',
      'description' => 'Choose a survey to embed in this node.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'qualtrics_embed',
          'settings' => array(),
          'type' => 'field_qualtrics_iframe',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_survey',
      'label' => 'Survey',
      'required' => 1,
      'settings' => array(
        'qualtrics_embed_append_username_instance' => 'yes',
        'qualtrics_embed_height_instance' => '600',
        'qualtrics_embed_width_instance' => '800',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'qualtrics_embed',
        'settings' => array(),
        'type' => 'field_qualtrics_dropdown',
        'weight' => '2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Choose a survey to embed in this node.');
  t('Description');
  t('Enter a description or introductive text for the embedded survey.');
  t('Survey');

  return $fields;
}
