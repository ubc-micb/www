<?php
/**
 * @file
 * faculty_listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function faculty_listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'faculty_list';
  $view->description = 'List of all the Faculty.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Faculty List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Faculty';
  $handler->display->display_options['css_class'] = 'facultytable';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_faculty_faculty',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_faculty_url' => 'field_faculty_url',
    'field_faculty_picture' => 'field_faculty_picture',
    'field_faculty_last_name' => 'field_faculty_last_name',
    'field_faculty_first_name' => 'field_faculty_last_name',
    'edit_node' => 'field_faculty_last_name',
    'title' => 'title',
    'field_faculty_departments' => 'field_faculty_departments',
    'field_faculty_faculty' => 'field_faculty_faculty',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_faculty_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_faculty_picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_faculty_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_faculty_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_faculty_departments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_faculty_faculty' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<img src="/sites/default/files/images/gstrain.jpg" alt="Microbiology Science Image" /><p>The Department is divided into three sub-groups that describe the type of research conducted by our researchers: Infection, Inflammation and Immunity (I3); Bacterial Adaptation and Response Networks (BARN); and Drug Discovery and Target Identification (DDTI). Following these groups are our Joint Faculty, Adjunct Faculty, Associate Faculty, Instructors/Lecturers, and Professors Emeriti. There is also an affiliated groups in the Department: The Centre for Microbial Diseases and Immunity Research (CMDR), Centre for Microbial Diversity and Evolution (CMDE) and The Centre for Tuberculosis Research (CTBR).</p>
<table id="anchors">
<tr>
	<td>
		<a href="#faculty_1">Department Head</a>
		<a href="#faculty_2">Research Faculty</a>
		<a href="#faculty_3">Teaching Faculty</a>
		<a href="#faculty_4">Associate Faculty</a>
	</td>
	<td>
		<a href="#faculty_5">Adjunct Faculty</a>
		<a href="#faculty_6">Professors Emeriti</a>
		<a href="#faculty_7">Active Professors Emeriti</a>		
	</td>
</tr>
</table>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_faculty_url']['id'] = 'field_faculty_url';
  $handler->display->display_options['fields']['field_faculty_url']['table'] = 'field_data_field_faculty_url';
  $handler->display->display_options['fields']['field_faculty_url']['field'] = 'field_faculty_url';
  $handler->display->display_options['fields']['field_faculty_url']['label'] = '';
  $handler->display->display_options['fields']['field_faculty_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faculty_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faculty_url']['click_sort_column'] = 'url';
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_faculty_picture']['id'] = 'field_faculty_picture';
  $handler->display->display_options['fields']['field_faculty_picture']['table'] = 'field_data_field_faculty_picture';
  $handler->display->display_options['fields']['field_faculty_picture']['field'] = 'field_faculty_picture';
  $handler->display->display_options['fields']['field_faculty_picture']['label'] = '';
  $handler->display->display_options['fields']['field_faculty_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faculty_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_faculty_picture']['settings'] = array(
    'image_style' => 'faculty_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_faculty_last_name']['id'] = 'field_faculty_last_name';
  $handler->display->display_options['fields']['field_faculty_last_name']['table'] = 'field_data_field_faculty_last_name';
  $handler->display->display_options['fields']['field_faculty_last_name']['field'] = 'field_faculty_last_name';
  $handler->display->display_options['fields']['field_faculty_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_faculty_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_faculty_last_name']['alter']['path'] = '[field_faculty_url]';
  $handler->display->display_options['fields']['field_faculty_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_faculty_first_name']['id'] = 'field_faculty_first_name';
  $handler->display->display_options['fields']['field_faculty_first_name']['table'] = 'field_data_field_faculty_first_name';
  $handler->display->display_options['fields']['field_faculty_first_name']['field'] = 'field_faculty_first_name';
  $handler->display->display_options['fields']['field_faculty_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_faculty_first_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_faculty_first_name']['alter']['text'] = ', [field_faculty_first_name]';
  $handler->display->display_options['fields']['field_faculty_first_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_faculty_first_name']['alter']['path'] = '[field_faculty_url]';
  $handler->display->display_options['fields']['field_faculty_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="[edit_node]" class="edit">edit</a>';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Faculty Title */
  $handler->display->display_options['fields']['field_faculty_title']['id'] = 'field_faculty_title';
  $handler->display->display_options['fields']['field_faculty_title']['table'] = 'field_data_field_faculty_title';
  $handler->display->display_options['fields']['field_faculty_title']['field'] = 'field_faculty_title';
  $handler->display->display_options['fields']['field_faculty_title']['label'] = '';
  $handler->display->display_options['fields']['field_faculty_title']['element_label_colon'] = FALSE;
  /* Field: Content: Department(s) */
  $handler->display->display_options['fields']['field_faculty_departments']['id'] = 'field_faculty_departments';
  $handler->display->display_options['fields']['field_faculty_departments']['table'] = 'field_data_field_faculty_departments';
  $handler->display->display_options['fields']['field_faculty_departments']['field'] = 'field_faculty_departments';
  $handler->display->display_options['fields']['field_faculty_departments']['label'] = '';
  $handler->display->display_options['fields']['field_faculty_departments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faculty_departments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_faculty_departments']['separator'] = ', <br />';
  /* Field: Content: Faculty */
  $handler->display->display_options['fields']['field_faculty_faculty']['id'] = 'field_faculty_faculty';
  $handler->display->display_options['fields']['field_faculty_faculty']['table'] = 'field_data_field_faculty_faculty';
  $handler->display->display_options['fields']['field_faculty_faculty']['field'] = 'field_faculty_faculty';
  $handler->display->display_options['fields']['field_faculty_faculty']['label'] = '';
  $handler->display->display_options['fields']['field_faculty_faculty']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faculty_faculty']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_faculty_faculty']['alter']['text'] = '<span id="faculty_[field_faculty_faculty-value]">[field_faculty_faculty]</span>';
  $handler->display->display_options['fields']['field_faculty_faculty']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Faculty (field_faculty_faculty) */
  $handler->display->display_options['sorts']['field_faculty_faculty_value']['id'] = 'field_faculty_faculty_value';
  $handler->display->display_options['sorts']['field_faculty_faculty_value']['table'] = 'field_data_field_faculty_faculty';
  $handler->display->display_options['sorts']['field_faculty_faculty_value']['field'] = 'field_faculty_faculty_value';
  /* Sort criterion: Content: Last Name (field_faculty_last_name) */
  $handler->display->display_options['sorts']['field_faculty_last_name_value']['id'] = 'field_faculty_last_name_value';
  $handler->display->display_options['sorts']['field_faculty_last_name_value']['table'] = 'field_data_field_faculty_last_name';
  $handler->display->display_options['sorts']['field_faculty_last_name_value']['field'] = 'field_faculty_last_name_value';
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
    'faculty' => 'faculty',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Last Name (field_faculty_last_name) */
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['id'] = 'field_faculty_last_name_value';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['table'] = 'field_data_field_faculty_last_name';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['field'] = 'field_faculty_last_name_value';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['path_case'] = 'lower';
  $handler->display->display_options['path'] = 'faculty-staff/faculty';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Faculty';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Filter by name';
  $handler->display->display_options['header']['area']['content'] = '<h4> Filter by faculty last name: </h4>
<p id="filter-reset"><a href=".">Reset Filters</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Last Name (field_faculty_last_name) */
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['id'] = 'field_faculty_last_name_value';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['table'] = 'field_data_field_faculty_last_name';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['field'] = 'field_faculty_last_name_value';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_faculty_last_name_value']['path_case'] = 'lower';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $export['faculty_list'] = $view;

  return $export;
}
