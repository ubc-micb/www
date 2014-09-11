<?php

/** BREADCRUMB ALTERATIONS
Return a themed breadcrumb trail
---------------------------------------------------------- */
function micb_clf_7_breadcrumb($variables) {
  global $base_path;
  $breadcrumb = $variables['breadcrumb'];
  $breadcrumb = array_unique($breadcrumb);
  $breadcrumb[0] = ''; 
  $show_breadcrumb = theme_get_setting('breadcrumb_display');
  $pos = FALSE;
    
  if ((!empty($breadcrumb)) && ($show_breadcrumb == 'yes')) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    $crumbs = '<ul class="breadcrumb expand">';
    $crumbs .= '<li class="breadcrumb-home"><a href="' . $base_path . '">' . theme_get_setting('clf_unitname') . '</a></li>';
    
    $array_size = count($breadcrumb);
    $i = 0;
    while ( $i < $array_size) {
      if(drupal_get_title()) {
        $pos = strpos($breadcrumb[$i], drupal_get_title());
      }
      //we stop duplicates entering where there is a sub nav based on page jumps
      if ($pos === false){
        $crumbs .= '<li class="breadcrumb-' . $i;
        $crumbs .=  '">' . $breadcrumb[$i] . ' <span class="divider">/</span> </li>';
      }
      $i++;
    }
    // Truncate the title if it is too long 
    $truncate_length = 50;
    $page_title = drupal_get_title();
    if(strlen($page_title) > $truncate_length){
      $page_title = substr($page_title,0,$truncate_length).'...';
    }
    $crumbs .= '<li class="active">'. $page_title .'</li></ul>';
    return $crumbs;
  }
  return '';
}

/** STATUS MESSAGES
Returns HTML for status and/or error messages, grouped by type.
---------------------------------------------------------- */
function micb_clf_7_status_messages($vars) {
  $display = $vars['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  foreach (drupal_get_messages($display) as $type => $messages) {
    $output .= "<div class=\"alert alert-block alert-$type\">\n";
    $output .= "  <a class=\"close\" data-dismiss=\"alert\" href=\"#\">x</a>\n";
    if (!empty($status_heading[$type])) {
      if($type == 'error'){
        $output .= '<i class="icon-exclamation-sign"></i>';
      }
      elseif($type == 'warning'){
        $output .= '<i class="icon-warning-sign"></i>';
      }
      else{
        $output .= '<i class="icon-info-sign"></i>';
      }
      $output .= '<h4 class="alert-heading">' . $status_heading[$type] . "</h4>\n";
    }
    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= $messages[0];
    }
    $output .= "</div>\n";
  }
  return $output;
}
