<?php
/**
 * @file
 * gsb_feature_student_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_student_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_student';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_student'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_student';
  $strongarm->value = '[node:field_first_name] [node:field_middle_name] [node:field_last_name]';
  $export['auto_entitylabel_pattern_node_student'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_student';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_student'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__student';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '24',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '23',
        ),
        'workbench_access' => array(
          'weight' => '22',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__student'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_student';
  $strongarm->value = array();
  $export['menu_options_student'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_student';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_student'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_student';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_student'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_student';
  $strongarm->value = '0';
  $export['node_preview_student'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_student';
  $strongarm->value = 0;
  $export['node_submitted_student'] = $strongarm;

  return $export;
}
