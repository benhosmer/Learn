<?php
/**
 * @file
 * lessons_completed.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function lessons_completed_flag_default_flags() {
  $flags = array();
  // Exported flag: "Mark lessons completed".
  $flags['lessons_complete'] = array(
    'content_type' => 'node',
    'title' => 'Mark lessons completed',
    'global' => '0',
    'types' => array(
      0 => 'lesson',
    ),
    'flag_short' => 'Completed',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Not completed',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'lessons_completed',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;
}