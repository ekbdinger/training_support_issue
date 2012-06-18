<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function training_support_issue_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-training-support
  $menus['menu-training-support'] = array(
    'menu_name' => 'menu-training-support',
    'title' => 'Training Support',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Training Support');


  return $menus;
}
