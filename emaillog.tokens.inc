<?php

/**
 * @file
 * Build placeholder replacement tokens for Email Log notification messages.
 */

/**
 * Implements hook_token_info().
 */
function emaillog_token_info() {
  $info['types']['emaillog'] = array(
    'name' => t('Email log'),
    'description' => t('Tokens related to Email log.'),
    'needs-data' => 'format',
  );

  $info['tokens']['emaillog']['severity'] = array(
    'name' => t('Severity'),
    'description' => t('The ID of watchdog alert severity.'),
  );
  $info['tokens']['emaillog']['severity:name'] = array(
    'name' => t('Severity list'),
    'description' => t('The name of watchdog alert severity.'),
  );
  $info['tokens']['emaillog']['timestamp'] = array(
    'name' => t('Timestamp'),
    'description' => t('Timestamp of the watchdog alert.'),
  );
  $info['tokens']['emaillog']['type'] = array(
    'name' => t('Type'),
    'description' => t("Watchdog alert's type.."),
  );
  $info['tokens']['emaillog']['ip'] = array(
    'name' => t('IP Address'),
    'description' => t("Client's IP Address."),
  );
  $info['tokens']['emaillog']['request_uri'] = array(
    'name' => t('Request URI'),
    'description' => t('Location where the watchdog report was placed.'),
  );
  $info['tokens']['emaillog']['referer_uri'] = array(
    'name' => t('Referer URI'),
    'description' => t('Referer to the page where watchdog report was placed.'),
  );
  $info['tokens']['emaillog']['uid'] = array(
    'name' => t('User ID'),
    'description' => t("User's id who caused the watchdog entry."),
  );
  $info['tokens']['emaillog']['name'] = array(
    'name' => t('Username'),
    'description' => t("User's name who caused the watchdog entry."),
  );
  $info['tokens']['emaillog']['link'] = array(
    'name' => t('Link'),
    'description' => t('Link to the watchdog entry.'),
  );
  $info['tokens']['emaillog']['message'] = array(
    'name' => t('Message'),
    'description' => t('Logged watchdog message.'),
  );

  return $info;
}

/**
 * Implements hook_tokens().
 */
function emaillog_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();
  $sanitize = !empty($options['sanitize']);
  if ($type == 'emaillog') {
    foreach ($tokens as $name => $original) {
      if (array_key_exists($name, $data)) {
        $replacements[$original] = $data[$name];
      }
    }
  }
  return $replacements;
}
