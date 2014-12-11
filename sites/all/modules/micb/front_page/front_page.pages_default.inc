<?php
/**
 * @file
 * front_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function front_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = 'The main landing page of this website.';
  $page->path = 'front';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'fluid_3_4_ubc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      11 => NULL,
      12 => NULL,
      13 => NULL,
      21 => NULL,
      22 => NULL,
      23 => NULL,
      31 => NULL,
      32 => NULL,
      33 => NULL,
      41 => NULL,
      42 => NULL,
      43 => NULL,
      44 => NULL,
      51 => NULL,
      52 => NULL,
      53 => NULL,
      54 => NULL,
      61 => NULL,
      62 => NULL,
      63 => NULL,
      64 => NULL,
      71 => NULL,
      72 => NULL,
      73 => NULL,
      74 => NULL,
      'full-width' => NULL,
      'full-width-middle' => NULL,
      'full-width-lower' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0babe015-207f-4245-8970-65458095fb5e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-89dd6760-25d3-4d12-9761-ae6b29a587f7';
    $pane->panel = 'full-width';
    $pane->type = 'views';
    $pane->subtype = 'highlight_carousel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '89dd6760-25d3-4d12-9761-ae6b29a587f7';
    $display->content['new-89dd6760-25d3-4d12-9761-ae6b29a587f7'] = $pane;
    $display->panels['full-width'][0] = 'new-89dd6760-25d3-4d12-9761-ae6b29a587f7';
    $pane = new stdClass();
    $pane->pid = 'new-4089914b-b783-41be-af95-0bb9e6f560da';
    $pane->panel = 'full-width';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'About MICB',
      'title' => 'Microbiology & Immunology',
      'body' => '<p>The Department of Microbiology and Immunology at the University of British Columbia provides a stimulating environment in which to pursue a graduate or undergraduate research program. Our faculty is internationally recognized for contributions in microbiology, molecular biology and immunology. Students will have the opportunity to experience the most up to date molecular approaches to the study of problems in microbiology and immunology.</p>

<p>&nbsp;</p>
',
      'format' => 'wysiwyg_filter',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'front-about',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4089914b-b783-41be-af95-0bb9e6f560da';
    $display->content['new-4089914b-b783-41be-af95-0bb9e6f560da'] = $pane;
    $display->panels['full-width'][1] = 'new-4089914b-b783-41be-af95-0bb9e6f560da';
    $pane = new stdClass();
    $pane->pid = 'new-0ee75dd2-5ace-4bae-9a42-fbf16f4aceee';
    $pane->panel = 'full-width-middle';
    $pane->type = 'views';
    $pane->subtype = 'news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 1,
      'override_title_text' => 'NEWS',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'front-news',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0ee75dd2-5ace-4bae-9a42-fbf16f4aceee';
    $display->content['new-0ee75dd2-5ace-4bae-9a42-fbf16f4aceee'] = $pane;
    $display->panels['full-width-middle'][0] = 'new-0ee75dd2-5ace-4bae-9a42-fbf16f4aceee';
    $pane = new stdClass();
    $pane->pid = 'new-a6cce55d-08ff-4641-91c4-593db14e34be';
    $pane->panel = 'full-width-middle';
    $pane->type = 'views';
    $pane->subtype = 'calendar_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'page_9',
      'override_title' => 1,
      'override_title_text' => 'EVENTS',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'front-events',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a6cce55d-08ff-4641-91c4-593db14e34be';
    $display->content['new-a6cce55d-08ff-4641-91c4-593db14e34be'] = $pane;
    $display->panels['full-width-middle'][1] = 'new-a6cce55d-08ff-4641-91c4-593db14e34be';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
