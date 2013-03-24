<?php
/**
 * @file
 * redirection_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function redirection_rules_default_rules_configuration() {
  $items = array();
  $items['rules_redirect_users_to_talk_page_after_new_question'] = entity_import('rules_config', '{ "rules_redirect_users_to_talk_page_after_new_question" : {
      "LABEL" : "Redirect Users to Talk Page After New Question",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "question_" : "question_" } }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : [ "node:field-talk:url" ] } } ]
    }
  }');
  return $items;
}
