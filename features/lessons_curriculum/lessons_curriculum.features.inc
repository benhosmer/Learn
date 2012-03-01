<?php
/**
 * @file
 * lessons_curriculum.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lessons_curriculum_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function lessons_curriculum_node_info() {
  $items = array(
    'curriculum' => array(
      'name' => t('Curriculum'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
