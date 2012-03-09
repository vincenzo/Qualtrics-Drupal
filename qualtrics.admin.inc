<?php

function qualtrics_config_settings() {

  $form['api'] = array(
    '#type' => 'fieldset',
    '#title' => t('API Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['api']['qualtrics_base_url'] = array(
    '#type' => 'textfield',
    '#title' => t('APIs base URL'),
    '#default_value' => variable_get('qualtrics_base_url', QUALTRICS_BASE_URL),
    '#description' => t('The base URL to invoke the Qualtrics REST APIs.'),
  );

  $form['api']['qualtrics_username'] = array(
    '#type' => 'textfield',
    '#title' => t('Username'),
    '#default_value' => variable_get('qualtrics_username', QUALTRICS_USERNAME),
    '#description' => t('The username for the API authentication.'),
  );

  $form['api']['qualtrics_password'] = array(
    '#type' => 'password',
    '#title' => t('Password'),
    '#default_value' => variable_get('qualtrics_password', QUALTRICS_PASSWORD),
    '#description' => t('The password for the API authentication.'),
  );

  $form['embedding'] = array(
    '#type' => 'fieldset',
    '#title' => t('Embedding options'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['embedding']['qualtrics_embed_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Base URL for embedding'),
    '#default_value' => variable_get('qualtrics_embed_url', QUALTRICS_EMBED_URL),
    '#description' => t('The base URL to be used as source for the survey embedding.'),
  );

  $form['embedding']['qualtrics_secure_embed'] = array(
    '#type' => 'checkbox',
    '#title' => t('Secure embedding'),
    '#default_value' => variable_get('qualtrics_secure_embed', FALSE),
    '#description' => t('Whether to use https:// for embedding a survey or not.'),
  );

  $form['embedding']['qualtrics_embed_username'] = array(
    '#type' => 'checkbox',
    '#title' => t('Embed username'),
    '#default_value' => variable_get('qualtrics_embed_username', FALSE),
    '#description' => t("Whether to append the Drupal username as extra parameter to the survey's URL used to embed it."),
  );

  return system_settings_form($form);
}

