<?php
/**
 * @file
 * os2web_postlister.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_postlister_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__os2web_acadre_postlists';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '10',
        ),
        'title' => array(
          'weight' => '5',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__os2web_acadre_postlists'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__postliste_import';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '6',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'feeds' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__postliste_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_os2web_acadre_postlists';
  $strongarm->value = '0';
  $export['language_content_type_os2web_acadre_postlists'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_postliste_import';
  $strongarm->value = '0';
  $export['language_content_type_postliste_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_os2web_acadre_postlists';
  $strongarm->value = array();
  $export['menu_options_os2web_acadre_postlists'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_postliste_import';
  $strongarm->value = array();
  $export['menu_options_postliste_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_os2web_acadre_postlists';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_os2web_acadre_postlists'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_postliste_import';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_postliste_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_os2web_acadre_postlists';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_os2web_acadre_postlists'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_postliste_import';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_postliste_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_os2web_acadre_postlists';
  $strongarm->value = '0';
  $export['node_preview_os2web_acadre_postlists'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_postliste_import';
  $strongarm->value = '1';
  $export['node_preview_postliste_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_os2web_acadre_postlists';
  $strongarm->value = 0;
  $export['node_submitted_os2web_acadre_postlists'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_postliste_import';
  $strongarm->value = 0;
  $export['node_submitted_postliste_import'] = $strongarm;

  return $export;
}
