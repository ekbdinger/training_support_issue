<?php

/**
 * Implementation of hook_strongarm().
 */
function training_support_issue_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_train_supp_issue';
  $strongarm->value = 0;
  $export['comment_anonymous_train_supp_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_train_supp_issue';
  $strongarm->value = '3';
  $export['comment_controls_train_supp_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_train_supp_issue';
  $strongarm->value = '4';
  $export['comment_default_mode_train_supp_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_train_supp_issue';
  $strongarm->value = '1';
  $export['comment_default_order_train_supp_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_train_supp_issue';
  $strongarm->value = '50';
  $export['comment_default_per_page_train_supp_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_train_supp_issue';
  $strongarm->value = '0';
  $export['comment_form_location_train_supp_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_train_supp_issue';
  $strongarm->value = '1';
  $export['comment_preview_train_supp_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_train_supp_issue';
  $strongarm->value = '1';
  $export['comment_subject_field_train_supp_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_train_supp_issue';
  $strongarm->value = '2';
  $export['comment_train_supp_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_train_supp_issue';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '2',
    'author' => '3',
    'options' => '4',
    'comment_settings' => '5',
    'menu' => '1',
    'taxonomy' => '-4',
    'path' => '7',
    'print' => '6',
  );
  $export['content_extra_weights_train_supp_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_train_supp_issue';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_train_supp_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_train_supp_issue';
  $strongarm->value = '0';
  $export['upload_train_supp_issue'] = $strongarm;

  return $export;
}
