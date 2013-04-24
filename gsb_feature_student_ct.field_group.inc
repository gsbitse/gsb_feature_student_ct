<?php
/**
 * @file
 * gsb_feature_student_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_student_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_job_market_paper|node|student|form';
  $field_group->group_name = 'group_job_market_paper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Job Market Paper',
    'weight' => '18',
    'children' => array(
      0 => 'field_job_market_paper',      
      1 => 'field_job_market_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_job_market_paper|node|student|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_work_in_progress|node|student|form';
  $field_group->group_name = 'group_work_in_progress';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Work In Progress',
    'weight' => '19',
    'children' => array(
      0 => 'field_work_in_progress_title',      
      1 => 'field_work_in_progress_desc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_work_in_progress|node|student|form'] = $field_group;

  return $export;
}
