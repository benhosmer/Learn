<?php
/**
 * @file
 * lessons_lessons.default_lessons.inc
 */

/**
 * Implements hook_default_lessons().
 */
function lessons_lessons_default_lessons() {
  $export = array();

  $lessons = new stdClass;
  $lessons->disabled = FALSE; /* Edit this to true to make a default lessons disabled initially */
  $lessons->api_version = 1;
  $lessons->name = 'lessons_create_lesson';
  $lessons->title = 'Create a lesson (Lessons module)';
  $lessons->author = '';
  $lessons->project = 'lessons';
  $lessons->project_type = 'contrib';
  $lessons->lesson_type = 'configuration';
  $lessons->description = '';
  $lessons->version = '7';
  $lessons->steps = '<ol>
  <li>Edit/add a lesson here: <a href=\'/admin/structure/lessons\'>admin/structure/lessons</a></li>
  <li>Export the lesson as a feature module by clicking the "Recreate" link here: <a href=\'admin/structure/features\'>admin/structure/features</a> </li>
  <li>Submit your lesson by opening a ticket and uploading your module here: http://drupal.org/project/issues/learn</li>
</ol>

TODO finish writing this lesson';
  $lessons->permission = '';
  $export['lessons_create_lesson'] = $lessons;

  return $export;
}
