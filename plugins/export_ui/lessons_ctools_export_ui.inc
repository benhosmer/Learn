<?php
/**
 * Define this Export UI plugin.
 */
$plugin = array(
  'schema' => 'lessons_lesson',  // As defined in hook_schema(), mymodule_myobj.
  'access' => 'administer lessons',  // Define a permission users must have to access these pages.

  // Define the menu item.
  'menu' => array(
    'menu item' => 'lessons',
    'menu title' => t('Lessons'),
    'menu description' => t('Administer lessons.'),
  ),

  // Define user interface texts.
  'title singular' => t('lesson'),
  'title plural' => t('lessons'),
  'title singular proper' => t('Lesson'),
  'title plural proper' => t('Lessons'),
  // Define the names of the functions that provide the add/edit forms.
  'form' => array(
    'settings' => 'lessons_ctools_export_ui_form',
    // 'submit' and 'validate' are also valid callbacks.
  ),
  // Use this to modify the default export UI interface.
  'handler' => array(
    'class' => 'lessons_export_ui',
    'parent' => 'ctools_export_ui',
  ),
);

/**
* Define the preset add/edit form.
*/
function lessons_ctools_export_ui_form(&$form, &$form_state) {
  $lesson = $form_state['item'];

  // lesson's configuration interface.
  // Ctools includes name field automatically on its own.
  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#description' => t('Human readable lesson title.'),
    '#default_value' => $lesson->title,
    '#required' => true,
    '#maxlength' => 255,
  );
  $form['author'] = array(
    '#type' => 'textfield',
    '#title' => t('By'),
    '#description' => t('Author.'),
    '#default_value' => $lesson->author,
    '#maxlength' => 255,
  );
  // TODO Add enabled themes and install profile to this list.
  // TODO Make this an ajax callback to toggle off select list and enter text.
  $projects = module_list();
  $form['project'] = array(
    '#type' => 'select',
    '#title' => t('Project'),
    '#description' => t('Name of the module, theme or project this lesson pertains to. '
                      . '(This list is based on currently-enabled modules and themes.)'),
    '#default_value' => $lesson->project,
    '#options' => $projects,
  );
  $form['project_type'] = array(
    '#type' => 'select',
    '#title' => t('Project Type'),
    '#description' => t('Core, contrib, or custom.'),
    '#default_value' => $lesson->project_type,
    '#options' => lessons_get_project_types(),
  );
  $form['lesson_type'] = array(
    '#type' => 'select',
    '#title' => t('Lesson Type'),
    '#description' => t("Configuration: This lesson is about something that can "
                      . "be learned and done through Drupal's web interface. "
                      . "Code: This lesson involves writing code, access to the "
                      . "code base and some knowledge of HTML, CSS, JavaScript or PHP"
                      . " is required."),
    '#default_value' => $lesson->lesson_type,
    '#options' => array(
      'configuration' => t('Configuration'),
      'code' => t('Code'),
    ),
  );
  $form['version'] = array(
    '#type' => 'radios',
    '#title' => t('Drupal Version(s)'),
    '#description' => t("Which Drupal version(s) does this lesson apply to?"),
    '#options' => array(
      '6' => t('Drupal 6'),
      '7' => t('Drupal 7'),
      '8' => t('Drupal 8'),
    ),
  );
  $form['description'] = array(
    '#type' => 'textfield',
    '#title' => t('Description'),
    '#description' => t('Explain what someone will be able to do after completing this lesson.'),
    '#default_value' => $lesson->description,
    '#maxlength' => 255,
  );
   $form['steps'] = array(
     '#type' => 'textarea',
     '#title' => t('Steps'),
     '#description' => t('TODO Add links to markup help and example lesson format.'),
     '#default_value' => $lesson->steps,
   );
  $form['permission'] = array(
    '#type' => 'textfield',
    '#title' => t('Permission'),
    '#description' => t("Special permission required to access this lesson. If this is "
                      . "blank, users with 'access content' permission can access this lesson."),
    '#default_value' => $lesson->permission,
  );

}

/**
 * Callback for form validation. 
 *
 * Process input.
 * 
 * The form being validated here is responsible for two things:
 *   TODO Check for fields that aren't required by the form but are necessary for 
 *   creating a working lesson. Warn user about incomplete lessons.
 */
/*
function lessons_ctools_export_ui_edit_item_form_validate(&$form, &$form_state) {
  ctools_include('export');
  $selectors = $form_state['values']['selectors'];

  $form_state['values']['selectors'] = $processed_selectors;
  $form_state['values']['grps'] = $processed_groups;
}
// */

/**
 * Callback for form submission.
 *
 * TODO? 
 */
/*
function lessons_ctools_export_ui_edit_item_form_submit(&$form, &$form_state) {
  $lesson = $form_state['item'];
  $op = (arg(5) == 'clone') ? array('ctools save', 'clone') : array('ctools save');
  lessons_save($lesson, $op);  
}
// */

/**
 * Callback for delete lesson form.
 *
 * TODO delete files? 
 */
/*
function lessons_ctools_export_ui_delete_confirm_form_submit(&$form, &$form_state) {
  $lesson = $form_state['item'];
  $name = $lesson->name;
  $revert = (arg(5) == 'revert') ? TRUE : FALSE; // delete form used for revert too.

  if ($revert) {
    ctools_include('export');
    $schema = ctools_export_get_schema('lessons_lesson');
    $export = $schema['export'];
    $defaults = _ctools_export_get_defaults('lessons_lesson', $export);
    // do something? 
  }

  // delete image files 
  $path = file_directory_path() ."/lessons/$name/images";  
  if (file_check_directory($path)) {
    foreach (@file_scan_directory($path, '.*') as $file) {
      file_delete($file->filename);
    }
  }
  if (file_check_directory($path)) {
    $result = rmdir($path);
    if ($result) {
      $txt = $path . t(' deleted.');  
      drupal_set_message($txt);
    } else {
      $txt = $path . t(' could not be deleted.'); 
    }
  }

  // delete files written to files directory? 
  $path = file_directory_path() ."/lessons/$name/$name.css";
  file_delete($path);
  $path = file_directory_path() ."/lesson/$name";
  if (file_check_directory($path)) {
    $result = rmdir($path);
    if ($result) {
      $txt = $path . t(' deleted.');  
      drupal_set_message($txt);
    } else {
      $txt = $path . t(' could not be deleted.'); 
    }
  }

}
// */
