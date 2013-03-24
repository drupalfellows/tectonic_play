<?php
/**
 * @file
 * qandapp_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function qandapp_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access custom config.
  $permissions['access custom config'] = array(
    'name' => 'access custom config',
    'roles' => array(),
    'module' => 'custom_config',
  );

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: access own authorizations.
  $permissions['access own authorizations'] = array(
    'name' => 'access own authorizations',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: access own consumers.
  $permissions['access own consumers'] = array(
    'name' => 'access own consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: admin_classes.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(),
    'module' => 'ds_ui',
  );

  // Exported permission: admin_display_suite.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(),
    'module' => 'ds',
  );

  // Exported permission: admin_fields.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(),
    'module' => 'ds_ui',
  );

  // Exported permission: admin_view_modes.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(),
    'module' => 'ds_ui',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer advanced pane settings.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
    'module' => 'block',
  );

  // Exported permission: administer consumers.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: administer exclude node title.
  $permissions['administer exclude node title'] = array(
    'name' => 'administer exclude node title',
    'roles' => array(),
    'module' => 'exclude_node_title',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: administer flags.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(),
    'module' => 'image',
  );

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(),
    'module' => 'locale',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
    'module' => 'menu',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: administer oauth.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: administer pane access.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: administer panels layouts.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: administer panels styles.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: administer user locations.
  $permissions['administer user locations'] = array(
    'name' => 'administer user locations',
    'roles' => array(),
    'module' => 'location_user',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: change layouts in place editing.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: create conference content.
  $permissions['create conference content'] = array(
    'name' => 'create conference content',
    'roles' => array(
      0 => 'organizer user',
    ),
    'module' => 'node',
  );

  // Exported permission: create question_ content.
  $permissions['create question_ content'] = array(
    'name' => 'create question_ content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create speaker_profile content.
  $permissions['create speaker_profile content'] = array(
    'name' => 'create speaker_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create talk content.
  $permissions['create talk content'] = array(
    'name' => 'create talk content',
    'roles' => array(
      0 => 'organizer user',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: delete any conference content.
  $permissions['delete any conference content'] = array(
    'name' => 'delete any conference content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any question_ content.
  $permissions['delete any question_ content'] = array(
    'name' => 'delete any question_ content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any speaker_profile content.
  $permissions['delete any speaker_profile content'] = array(
    'name' => 'delete any speaker_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any talk content.
  $permissions['delete any talk content'] = array(
    'name' => 'delete any talk content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own conference content.
  $permissions['delete own conference content'] = array(
    'name' => 'delete own conference content',
    'roles' => array(
      0 => 'organizer user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own question_ content.
  $permissions['delete own question_ content'] = array(
    'name' => 'delete own question_ content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own speaker_profile content.
  $permissions['delete own speaker_profile content'] = array(
    'name' => 'delete own speaker_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own talk content.
  $permissions['delete own talk content'] = array(
    'name' => 'delete own talk content',
    'roles' => array(
      0 => 'organizer user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'organizer user',
    ),
    'module' => 'node',
  );

  // Exported permission: display LinkedIn profile.
  $permissions['display LinkedIn profile'] = array(
    'name' => 'display LinkedIn profile',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'linkedin_profile',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: edit any conference content.
  $permissions['edit any conference content'] = array(
    'name' => 'edit any conference content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any question_ content.
  $permissions['edit any question_ content'] = array(
    'name' => 'edit any question_ content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any speaker_profile content.
  $permissions['edit any speaker_profile content'] = array(
    'name' => 'edit any speaker_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any talk content.
  $permissions['edit any talk content'] = array(
    'name' => 'edit any talk content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own conference content.
  $permissions['edit own conference content'] = array(
    'name' => 'edit own conference content',
    'roles' => array(
      0 => 'organizer user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own question_ content.
  $permissions['edit own question_ content'] = array(
    'name' => 'edit own question_ content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own speaker_profile content.
  $permissions['edit own speaker_profile content'] = array(
    'name' => 'edit own speaker_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own talk content.
  $permissions['edit own talk content'] = array(
    'name' => 'edit own talk content',
    'roles' => array(
      0 => 'organizer user',
    ),
    'module' => 'node',
  );

  // Exported permission: exclude any node title.
  $permissions['exclude any node title'] = array(
    'name' => 'exclude any node title',
    'roles' => array(),
    'module' => 'exclude_node_title',
  );

  // Exported permission: exclude own node title.
  $permissions['exclude own node title'] = array(
    'name' => 'exclude own node title',
    'roles' => array(),
    'module' => 'exclude_node_title',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: oauth authorize any consumers.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: oauth register any consumers.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: set own user location.
  $permissions['set own user location'] = array(
    'name' => 'set own user location',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'location_user',
  );

  // Exported permission: submit latitude/longitude.
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(),
    'module' => 'location',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: translate content.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(),
    'module' => 'translation',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(),
    'module' => 'locale',
  );

  // Exported permission: use PHP for title patterns.
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(),
    'module' => 'auto_nodetitle',
  );

  // Exported permission: use exclude node title.
  $permissions['use exclude node title'] = array(
    'name' => 'use exclude node title',
    'roles' => array(
      0 => 'authenticated user',
      1 => 'organizer user',
      2 => 'speaker user',
    ),
    'module' => 'exclude_node_title',
  );

  // Exported permission: use flag import.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: use panels caching features.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: use panels locks.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: use text format ds_code.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: view all user locations.
  $permissions['view all user locations'] = array(
    'name' => 'view all user locations',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'location_user',
  );

  // Exported permission: view location directory.
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'location',
  );

  // Exported permission: view node location table.
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'location',
  );

  // Exported permission: view node map.
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(),
    'module' => 'gmap_location',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view own user location.
  $permissions['view own user location'] = array(
    'name' => 'view own user location',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'location_user',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: view user location details.
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: view user location table.
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'location',
  );

  // Exported permission: view user map.
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'gmap_location',
  );

  return $permissions;
}
