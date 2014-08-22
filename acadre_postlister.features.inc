<?php
/**
 * @file
 * acadre_postlister.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acadre_postlister_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function acadre_postlister_node_info() {
  $items = array(
    'os2web_acadre_postlists' => array(
      'name' => t('Postlister'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}