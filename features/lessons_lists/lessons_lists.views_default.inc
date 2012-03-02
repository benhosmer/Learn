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
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
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
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_lesson_drupal_version' => 'field_lesson_drupal_version',
    'field_lesson_type' => 'field_lesson_type',
    'field_lesson_project_name' => 'field_lesson_project_name',
    'field_lesson_project_type' => 'field_lesson_project_type',
    'count' => 'count',
  );
  $handler->display->display_options['style_options']['default'] = 'count';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lesson_drupal_version' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lesson_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lesson_project_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lesson_project_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'count' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Flags: lessons_recommend counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'lessons_recommend';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Lesson Title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Project name */
  $handler->display->display_options['fields']['field_lesson_project_name']['id'] = 'field_lesson_project_name';
  $handler->display->display_options['fields']['field_lesson_project_name']['table'] = 'field_data_field_lesson_project_name';
  $handler->display->display_options['fields']['field_lesson_project_name']['field'] = 'field_lesson_project_name';
  $handler->display->display_options['fields']['field_lesson_project_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lesson_project_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lesson_project_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lesson_project_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lesson_project_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lesson_project_name']['field_api_classes'] = 0;
  /* Field: Content: Lesson type */
  $handler->display->display_options['fields']['field_lesson_type']['id'] = 'field_lesson_type';
  $handler->display->display_options['fields']['field_lesson_type']['table'] = 'field_data_field_lesson_type';
  $handler->display->display_options['fields']['field_lesson_type']['field'] = 'field_lesson_type';
  $handler->display->display_options['fields']['field_lesson_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lesson_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lesson_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lesson_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lesson_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lesson_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lesson_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lesson_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lesson_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lesson_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lesson_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lesson_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lesson_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lesson_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lesson_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lesson_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lesson_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lesson_type']['field_api_classes'] = 0;
  /* Field: Content: Project type */
  $handler->display->display_options['fields']['field_lesson_project_type']['id'] = 'field_lesson_project_type';
  $handler->display->display_options['fields']['field_lesson_project_type']['table'] = 'field_data_field_lesson_project_type';
  $handler->display->display_options['fields']['field_lesson_project_type']['field'] = 'field_lesson_project_type';
  $handler->display->display_options['fields']['field_lesson_project_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lesson_project_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lesson_project_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lesson_project_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lesson_project_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lesson_project_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lesson_project_type']['field_api_classes'] = 0;
  /* Field: Content: Drupal version(s) */
  $handler->display->display_options['fields']['field_lesson_drupal_version']['id'] = 'field_lesson_drupal_version';
  $handler->display->display_options['fields']['field_lesson_drupal_version']['table'] = 'field_data_field_lesson_drupal_version';
  $handler->display->display_options['fields']['field_lesson_drupal_version']['field'] = 'field_lesson_drupal_version';
  $handler->display->display_options['fields']['field_lesson_drupal_version']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lesson_drupal_version']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_lesson_drupal_version']['field_api_classes'] = 0;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Recommendations';
  $handler->display->display_options['fields']['count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['count']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['count']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['count']['format_plural'] = 0;
  $handler->display->display_options['fields']['count']['prefix'] = '+';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project name (field_lesson_project_name) */
  $handler->display->display_options['filters']['field_lesson_project_name_value']['id'] = 'field_lesson_project_name_value';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['table'] = 'field_data_field_lesson_project_name';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['field'] = 'field_lesson_project_name_value';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lesson_project_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lesson_project_name_value']['expose']['operator_id'] = 'field_lesson_project_name_value_op';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['expose']['label'] = 'Project name';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['expose']['operator'] = 'field_lesson_project_name_value_op';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['expose']['identifier'] = 'project_name';
  $handler->display->display_options['filters']['field_lesson_project_name_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_lesson_project_name_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Lesson type (field_lesson_type) */
  $handler->display->display_options['filters']['field_lesson_type_value']['id'] = 'field_lesson_type_value';
  $handler->display->display_options['filters']['field_lesson_type_value']['table'] = 'field_data_field_lesson_type';
  $handler->display->display_options['filters']['field_lesson_type_value']['field'] = 'field_lesson_type_value';
  $handler->display->display_options['filters']['field_lesson_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lesson_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lesson_type_value']['expose']['operator_id'] = 'field_lesson_type_value_op';
  $handler->display->display_options['filters']['field_lesson_type_value']['expose']['label'] = 'Lesson type';
  $handler->display->display_options['filters']['field_lesson_type_value']['expose']['operator'] = 'field_lesson_type_value_op';
  $handler->display->display_options['filters']['field_lesson_type_value']['expose']['identifier'] = 'lesson_type';
  $handler->display->display_options['filters']['field_lesson_type_value']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Project type (field_lesson_project_type) */
  $handler->display->display_options['filters']['field_lesson_project_type_value']['id'] = 'field_lesson_project_type_value';
  $handler->display->display_options['filters']['field_lesson_project_type_value']['table'] = 'field_data_field_lesson_project_type';
  $handler->display->display_options['filters']['field_lesson_project_type_value']['field'] = 'field_lesson_project_type_value';
  $handler->display->display_options['filters']['field_lesson_project_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lesson_project_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lesson_project_type_value']['expose']['operator_id'] = 'field_lesson_project_type_value_op';
  $handler->display->display_options['filters']['field_lesson_project_type_value']['expose']['label'] = 'Project type';
  $handler->display->display_options['filters']['field_lesson_project_type_value']['expose']['operator'] = 'field_lesson_project_type_value_op';
  $handler->display->display_options['filters']['field_lesson_project_type_value']['expose']['identifier'] = 'project_type';
  $handler->display->display_options['filters']['field_lesson_project_type_value']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Drupal version(s) (field_lesson_drupal_version) */
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['id'] = 'field_lesson_drupal_version_value';
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['table'] = 'field_data_field_lesson_drupal_version';
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['field'] = 'field_lesson_drupal_version_value';
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['expose']['operator_id'] = 'field_lesson_drupal_version_value_op';
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['expose']['label'] = 'Drupal version:';
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['expose']['operator'] = 'field_lesson_drupal_version_value_op';
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['expose']['identifier'] = 'drupal_version';
  $handler->display->display_options['filters']['field_lesson_drupal_version_value']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lessons';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Lessons';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['lessons_lists_lessons'] = $view;

  return $export;
}
