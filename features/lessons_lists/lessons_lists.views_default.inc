<?php
/**
 * @file
 * lessons_lists.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lessons_lists_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'lessons_list_curriculums';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lessons: List Curriculums';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Curriculums';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum' => 'curriculum',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'curriculums';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Curriculums';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['lessons_list_curriculums'] = $view;

  $view = new view;
  $view->name = 'lessons_lists_lessons';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lessons: List Lessons';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lessons';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lesson' => 'lesson',
  );
  /* Filter criterion: Content: Drupal version(s) (field_lesson_drupal_version) */
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['id'] = 'field_lesson_drupal_version_value';
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['table'] = 'field_data_field_lesson_drupal_version';
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['field'] = 'field_lesson_drupal_version_value';
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['expose']['operator_id'] = 'field_lesson_drupal_version_value_op';
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['expose']['label'] = 'Drupal version:';
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['expose']['operator'] = 'field_lesson_drupal_version_value_op';
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['expose']['identifier'] = 'drupal_version';
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Lesson type (field_lesson_type) */
  $handler->display->display_options['filters']['field_lesson_type_value']['id'] = 'field_lesson_type_value';
  $handler->display->display_options['filters']['field_lesson_type_value']['table'] = 'field_data_field_lesson_type';
  $handler->display->display_options['filters']['field_lesson_type_value']['field'] = 'field_lesson_type_value';
  $handler->display->display_options['filters']['field_lesson_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lesson_type_value']['expose']['operator_id'] = 'field_lesson_type_value_op';
  $handler->display->display_options['filters']['field_lesson_type_value']['expose']['label'] = 'Lesson type (field_lesson_type)';
  $handler->display->display_options['filters']['field_lesson_type_value']['expose']['operator'] = 'field_lesson_type_value_op';
  $handler->display->display_options['filters']['field_lesson_type_value']['expose']['identifier'] = 'lesson_type';
  $handler->display->display_options['filters']['field_lesson_type_value']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Project name (field_lesson_project_name) */
  $handler->display->display_options['filters']['field_lesson_project_name_value']['id'] = 'field_lesson_project_name_value';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['table'] = 'field_data_field_lesson_project_name';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['field'] = 'field_lesson_project_name_value';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lesson_project_name_value']['expose']['operator_id'] = 'field_lesson_project_name_value_op';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['expose']['label'] = 'Project name';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['expose']['operator'] = 'field_lesson_project_name_value_op';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['expose']['identifier'] = 'project_name';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_lesson_project_name_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Project type (field_lesson_project_type) */
  $handler->display->display_options['filters']['field_lesson_project_type_value']['id'] = 'field_lesson_project_type_value';
  $handler->display->display_options['filters']['field_lesson_project_type_value']['table'] = 'field_data_field_lesson_project_type';
  $handler->display->display_options['filters']['field_lesson_project_type_value']['field'] = 'field_lesson_project_type_value';
  $handler->display->display_options['filters']['field_lesson_project_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lesson_project_type_value']['expose']['operator_id'] = 'field_lesson_project_type_value_op';
  $handler->display->display_options['filters']['field_lesson_project_type_value']['expose']['label'] = 'Project type (field_lesson_project_type)';
  $handler->display->display_options['filters']['field_lesson_project_type_value']['expose']['operator'] = 'field_lesson_project_type_value_op';
  $handler->display->display_options['filters']['field_lesson_project_type_value']['expose']['identifier'] = 'project_type';
  $handler->display->display_options['filters']['field_lesson_project_type_value']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lessons';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Lessons';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['lessons_lists_lessons'] = $view;

  return $export;
}
