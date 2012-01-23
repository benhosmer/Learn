<?php
/**
 * @file
 * Default theme implementation to display a lesson
 * 
 * Available variables:
 * - $name, machine name of lesson
 * - $title, lesson title
 * - $author, lesson author
 * - $project, related project
 * - $project_type, e.g. core, contrib
 * - $lesson_type, e.g. code, configuration
 * - $description, overview of lesson
 * - $version, relevant Drupal version
 * - $steps, instructional steps for the lesson
 * - $permission, special permissions required for the lesson
 * 
 * - $page, flag for full page state
 * 
 * Ctools variables:
 * - $export_module, module providing this lesson
 * - $type, Normal, Default, Overridden
 * - $in_code_only, TRUE or FALSE
 * - $table, db table
 * - $export_type, integer, 1 (Normal), 2 (Default), 3 (Overridden)
 * 
 * @see template_preprocess_lesson
 */
?>
<div class="lessons">
  <div class="lesson <? print "$name $project $project_type $lesson_type"?>">
    <? if (!$page) : ?>
      <div class="lesson-title"><? print $title; ?></div>
    <? endif; ?>
    <div class="lesson-author"><? print $author; ?></div>
    <div class="lesson-version"><? print $version; ?></div>
    <div class="lesson-project"><? print $project; ?></div>
    <div class="lesson-description"><? print $description; ?></div>
    <div class="lesson-steps"><? print $steps; ?></div>
  </div>
</div>
