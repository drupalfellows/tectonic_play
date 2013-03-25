
<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, 
 * often used as an alternative to directly editing or adding code to 
 * templates. It's worth spending some time to learn more about these functions
 *  - they are a powerful way to easily modify the output of any template 
 * variable.
 *
 * Preprocess and Process Functions SEE: 
 *		http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "adaptivetheme_subtheme" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the 
 *    function name will be "footheme_preprocess_hook". Tip - you can 
 *    search/replace on "adaptivetheme_subtheme".
 * 2. Uncomment the required function to use.

 */

/**
 * Preprocess variables for the html template.
 */

function qandapp_preprocess_html(&$vars) {
  global $theme_key;
  // Two examples of adding custom classes to the body.
  
  // Add a body class for the active theme name.
  // $vars['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome etc.
  // $vars['classes_array'][] = css_browser_selector();

}
// */


/**
 * Process variables for the html template.
 */
/* -- Delete this line if you want to use this function
function adaptivetheme_subtheme_process_html(&$vars) {
}
// */


/**
 * Override or insert variables for the page templates.
 */
/* -- Delete this line if you want to use these functions
function adaptivetheme_subtheme_preprocess_page(&$vars) {
}
function adaptivetheme_subtheme_process_page(&$vars) {
}
// */

/**	
 * Override or insert variables into the node templates.
 */
function qandapp_preprocess_node(&$vars) {
}


function adaptivetheme_subtheme_process_node(&$vars) {
}

function qandapp_form_alter (&$form, &$form_state, $form_id) {
	global $user;
	
	// alter add Question node form on the Talk page
	if ($form_id == 'question__node_form'){
		$node = menu_get_object();
		if ($node->type == 'talk'){
			$form['field_talk']['und']['0']['nid']['#type'] = 
				'value';
			$form['field_talk']['und']['0']['nid']['#value'] = 
				$node->nid;
			$form['author']['name']['#type'] = 'item';
			$form['author']['name']['#value'] = 
				$form['author']['name']['#default_value'];
			$form['author']['name']['#markup'] = 
				theme('username', array('account' => $user));
	
		}
	}
	
}


/**
 * This function is part of flag.module file.
 * This function is overridden here.
 */
function qandapp_flag_link($type, $object = NULL, $teaser = FALSE) {
	var_dump('lsjhjasd');
	die();
  if (!isset($object) || !flag_fetch_definition($type)) {
    return;
  }
  global $user;

  // Get all possible flags for this content-type.
  $flags = flag_get_flags($type);

  foreach ($flags as $flag) {
    $content_id = $flag->get_content_id($object);

    if (!$flag->uses_hook_link($teaser)) {
      // Flag is not configured to show its link here.
      continue;
    }
    if (!$flag->access($content_id) && (!$flag->is_flagged($content_id) || !$flag->access($content_id, 'flag'))) {
      // User has no permission to use this flag or flag does not apply to this
      // content. The link is not skipped if the user has "flag" access but
      // not "unflag" access (this way the unflag denied message is shown).
      continue;
    }
    
    $dlike_append = qandapp_append($type, $flag->get_content_id($object), $flag->name);

    // The flag links are actually fully rendered theme functions.
    // The HTML attribute is set to TRUE to allow whatever the themer desires.
    $links['flag-' . $flag->name] = array(
      'title' => $flag->theme($flag->is_flagged($content_id) ? 'unflag' : 'flag', $content_id) . $dlike_append,
      'html' => TRUE,
    );
  }

  if (isset($links)) {
    return $links;
  }
}

function qandapp_append($flag_type, $content_id, $flag_name) {
    // Variables added for appending facebook like like string
    // Check if facebook like likes is enabled for a flag
    $dlike_status_value = variable_get('dlike-' . $flag_name . '_option', 0);

    //add a condition for disabled flags
    if ($dlike_status_value == 0) {
      $dlike_append_link = '';
    }
    else {
        // Get the list of all the users those flagged current content
        // $dlike_append_names = dlike_user_list($type, $flag->get_content_id($object), $flag->name);
        // Get the flag counts for a piece of content
        $dlike_append_count = flag_get_counts($flag_type, $content_id);
        if ($dlike_append_count && $dlike_append_count[$flag_name] > 0) {
          // Get the text string set by the user
          $dlike_text_value = variable_get('dlike-' . $flag_name . '_text_value', NULL);
          // Pass the string through t().
          $dlike_sanitize_string = t('@text', array('@text' => $dlike_text_value));
          // If set, replace the token for count by actual count.
          $dlike_append_string = str_replace('@count', $dlike_append_count[$flag_name], $dlike_sanitize_string);
	$dlike_append_string = '<span class="element-invisible">'.$dlike_append_string.'</span>';
          // Check if user has the right permissions
          if (user_access('dlike access list')) {
            // format link address.
            $dlike_link_address = 'dlike/' . $flag_type . '/' . $content_id . '/' . $flag_name;
            // format the attributed for l() function.
            $dlike_link_arrtibutes = array();
            $dlike_link_arrtibutes = array(
              'html' => TRUE,
              'attributes' => array(
                'rel' => 'lightmodal[|width:400px; height:300px; scrolling: auto;]',
                ),
            );
            // format the link to the list of users who flagged the content.
            $dlike_append_link = '<span class="dlike-' . $flag_type . '-append-' . $content_id .'">' . l($dlike_append_string, $dlike_link_address, $dlike_link_arrtibutes) . '</span>';
          }
          else {
            $dlike_append_link = $dlike_append_string;
          }
        }
        else {
          $dlike_append_link = '<span class="dlike-' . $flag_type . '-append-' . $content_id .'"></span>';
        }
    }
    if (isset($_POST['method']) && $_POST['method']=='ajax') {
      print $dlike_append_link; die();
    }
    return $dlike_append_link;
}

