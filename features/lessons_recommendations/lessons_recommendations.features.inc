<?php
/**
 * @file
 * lessons_recommendations.features.inc
 */

/**
 * Implements hook_views_api().
 */
function lessons_recommendations_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function lessons_recommendations_flag_default_flags() {
  $flags = array();
  // Exported flag: "Recommend lessons and curriculums".
  $flags['lessons_recommend'] = array(
    'content_type' => 'node',
    'title' => 'Recommend lessons and curriculums',
    'global' => '0',
    'types' => array(
      0 => 'lesson',
      1 => 'curriculum',
    ),
    'flag_short' => 'Recommend this',
    'flag_long' => 'If you find this useful, recommend it.',
    'flag_message' => 'Thanks for liking this. Your recommendation will help other people find useful lessons. Consider posting a comment too!',
    'unflag_short' => 'You recommend this (click to unrecommend)',
    'unflag_long' => 'If you don\'t actually like this, "unrecommend" it here',
    'unflag_message' => 'You no longer recommend this. Consider posting a comment with some feedback for the author.',
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
    'module' => 'lessons_recommendations',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}
