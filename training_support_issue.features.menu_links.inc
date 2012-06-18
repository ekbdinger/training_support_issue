<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function training_support_issue_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-training-support:node/add/train-supp-issue
  $menu_links['menu-training-support:node/add/train-supp-issue'] = array(
    'menu_name' => 'menu-training-support',
    'link_path' => 'node/add/train-supp-issue',
    'router_path' => 'node/add/train-supp-issue',
    'link_title' => 'Create new support issue',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Create new support issue');


  return $menu_links;
}
