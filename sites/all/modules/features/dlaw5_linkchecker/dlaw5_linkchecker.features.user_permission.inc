<?php
/**
 * @file
 * dlaw5_linkchecker.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dlaw5_linkchecker_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access broken links report'.
  $permissions['access broken links report'] = array(
    'name' => 'access broken links report',
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'access own broken links report'.
  $permissions['access own broken links report'] = array(
    'name' => 'access own broken links report',
    'roles' => array(),
    'module' => 'linkchecker',
  );

  // Exported permission: 'administer linkchecker'.
  $permissions['administer linkchecker'] = array(
    'name' => 'administer linkchecker',
    'roles' => array(),
    'module' => 'linkchecker',
  );

  // Exported permission: 'edit link settings'.
  $permissions['edit link settings'] = array(
    'name' => 'edit link settings',
    'roles' => array(),
    'module' => 'linkchecker',
  );

  return $permissions;
}
