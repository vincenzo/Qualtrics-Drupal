<?php
/**
 * @file
 * qualtrics_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function qualtrics_feature_node_info() {
  $items = array(
    'qualtrics_survey' => array(
      'name' => t('Qualtrics Survey'),
      'base' => 'node_content',
      'description' => t('Create a page with an embedded Qualtrics survey.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
