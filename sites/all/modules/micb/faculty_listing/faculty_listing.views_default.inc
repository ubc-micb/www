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
  $view->name = 'faculty';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Faculty';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_faculty3',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_picture' => 'field_picture',
    'field_name' => 'field_name',
    'field_title' => 'field_title',
    'field_department' => 'field_department',
    'edit_node' => 'field_name',
    'field_faculty3' => 'field_faculty3',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_department' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_faculty3' => array(
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
  /* Field: User: Picture */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'faculty_thumbnail',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'url';
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: User: Department(s) */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_department']['separator'] = '<br />';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: User: Faculty */
  $handler->display->display_options['fields']['field_faculty3']['id'] = 'field_faculty3';
  $handler->display->display_options['fields']['field_faculty3']['table'] = 'field_data_field_faculty3';
  $handler->display->display_options['fields']['field_faculty3']['field'] = 'field_faculty3';
  $handler->display->display_options['fields']['field_faculty3']['label'] = '';
  $handler->display->display_options['fields']['field_faculty3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faculty3']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Faculty (field_faculty3) */
  $handler->display->display_options['sorts']['field_faculty3_value']['id'] = 'field_faculty3_value';
  $handler->display->display_options['sorts']['field_faculty3_value']['table'] = 'field_data_field_faculty3';
  $handler->display->display_options['sorts']['field_faculty3_value']['field'] = 'field_faculty3_value';
  /* Sort criterion: User: Name (field_name:title) */
  $handler->display->display_options['sorts']['field_name_title']['id'] = 'field_name_title';
  $handler->display->display_options['sorts']['field_name_title']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_title']['field'] = 'field_name_title';
  /* Contextual filter: User: Name (field_name:title) */
  $handler->display->display_options['arguments']['field_name_title']['id'] = 'field_name_title';
  $handler->display->display_options['arguments']['field_name_title']['table'] = 'field_data_field_name';
  $handler->display->display_options['arguments']['field_name_title']['field'] = 'field_name_title';
  $handler->display->display_options['arguments']['field_name_title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_name_title']['summary']['format'] = 'default_summary';
  /* Filter criterion: User: Faculty (field_faculty3) */
  $handler->display->display_options['filters']['field_faculty3_value']['id'] = 'field_faculty3_value';
  $handler->display->display_options['filters']['field_faculty3_value']['table'] = 'field_data_field_faculty3';
  $handler->display->display_options['filters']['field_faculty3_value']['field'] = 'field_faculty3_value';
  $handler->display->display_options['filters']['field_faculty3_value']['value'] = array(
    'all' => 'all',
    1 => '1',
    2 => '2',
    21 => '21',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_faculty3',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_picture' => 'field_picture',
    'field_name' => 'field_name',
    'field_title' => 'field_title',
    'field_department' => 'field_department',
    'edit_node' => 'field_name',
    'field_faculty3' => 'field_faculty3',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_department' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_faculty3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'faculty_thumbnail',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'url';
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: User: Department(s) */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_department']['separator'] = '<br />';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: User: Faculty */
  $handler->display->display_options['fields']['field_faculty3']['id'] = 'field_faculty3';
  $handler->display->display_options['fields']['field_faculty3']['table'] = 'field_data_field_faculty3';
  $handler->display->display_options['fields']['field_faculty3']['field'] = 'field_faculty3';
  $handler->display->display_options['fields']['field_faculty3']['label'] = '';
  $handler->display->display_options['fields']['field_faculty3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faculty3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_faculty3']['alter']['text'] = '<span id="faculty_[field_faculty3-value]">[field_faculty3]</span>';
  $handler->display->display_options['fields']['field_faculty3']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Name (field_name:title) */
  $handler->display->display_options['arguments']['field_name_title']['id'] = 'field_name_title';
  $handler->display->display_options['arguments']['field_name_title']['table'] = 'field_data_field_name';
  $handler->display->display_options['arguments']['field_name_title']['field'] = 'field_name_title';
  $handler->display->display_options['arguments']['field_name_title']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_name_title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_name_title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_name_title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_name_title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_name_title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_name_title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_name_title']['limit'] = '1';
  $handler->display->display_options['arguments']['field_name_title']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_name_title']['path_case'] = 'lower';
  $handler->display->display_options['path'] = 'faculty-staff/faculty';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Faculty';
  $handler->display->display_options['menu']['weight'] = '-1000';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

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
  /* Contextual filter: User: Name (field_name:title) */
  $handler->display->display_options['arguments']['field_name_title']['id'] = 'field_name_title';
  $handler->display->display_options['arguments']['field_name_title']['table'] = 'field_data_field_name';
  $handler->display->display_options['arguments']['field_name_title']['field'] = 'field_name_title';
  $handler->display->display_options['arguments']['field_name_title']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_name_title']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_name_title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_name_title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_name_title']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_name_title']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_name_title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_name_title']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['field_name_title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_name_title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_name_title']['limit'] = '1';
  $handler->display->display_options['arguments']['field_name_title']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_name_title']['path_case'] = 'lower';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $export['faculty'] = $view;

  return $export;
}
