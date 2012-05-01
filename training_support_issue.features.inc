<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function training_support_issue_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function training_support_issue_node_info() {
  $items = array(
    'train_supp_issue' => array(
      'name' => t('Training Support Issue'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function training_support_issue_views_api() {
  return array(
    'api' => '2',
  );
}
