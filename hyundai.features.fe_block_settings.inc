<?php
/**
 * @file
 * hyundai.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function hyundai_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-emediate_js'] = array(
    'cache' => -1,
    'custom' => '0',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'machine_name' => 'emediate_js',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-28',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['platformoptions-annonsbalk_botten'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'annonsbalk_botten',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'platformoptions',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-37',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['platformoptions-annonsbalk_topp'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'annonsbalk_topp',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'platformoptions',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'header',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-37',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['platformoptions-facebook'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'facebook',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'platformoptions',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-40',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['platformoptions-insider1'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'insider1',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'platformoptions',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-41',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['platformoptions-mobile_article'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'mobile_article',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'platformoptions',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'content_bottom',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['platformoptions-mobile_insider'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'mobile_insider',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'platformoptions',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-40',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['platformoptions-mobile_panorama'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'mobile_panorama',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'platformoptions',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'header',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-35',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['platformoptions-outsider1'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'outsider1',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'platformoptions',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-38',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['platformoptions-panorama1'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'panorama1',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'platformoptions',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'header',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-34',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['platformoptions-panorama2'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'panorama2',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'platformoptions',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'featured',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-34',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'login',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'user',
    'node_types' => array(),
    'pages' => 'admin
user',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-38',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '-6',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-21',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-find_content-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'find_content-block',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-10',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'dashboard_main',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel-block',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '11',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel-block_1',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '10',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel-block_2'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel-block_2',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-43',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel-block_3'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel-block_3',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>
kategorier/*
taggar/*
bilmodeller/*',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-42',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Mini1',
    'visibility' => '0',
  );

  $export['views-lopsedel-block_4'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel-block_4',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-35',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel-block_5'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel-block_5',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>
modeller
modeller/*
taggar
taggar/*
kategorier
kategorier/*',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-37',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel-block_6'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel-block_6',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-38',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel_mobile-block_2'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel_mobile-block_2',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-36',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel_mobile-block_3'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel_mobile-block_3',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-39',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel_start-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel_start-block',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-37',
      ),
      'bartik' => array(
        'region' => 'top_start',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '-12',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-lopsedel_start-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel_start-block_1',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'featured',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-36',
      ),
      'bartik' => array(
        'region' => 'top_start',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '-11',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-lopsedel_start-block_2'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel_start-block_2',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'featured',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-35',
      ),
      'bartik' => array(
        'region' => 'top_start',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '-10',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-lopsedel_start-block_3'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel_start-block_3',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>
kategorier/*',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-42',
      ),
      'bartik' => array(
        'region' => 'right',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '-12',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel_start-block_4'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel_start-block_4',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-36',
      ),
      'bartik' => array(
        'region' => 'right',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '-11',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-lopsedel_start-block_5'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel_start-block_5',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-43',
      ),
      'bartik' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '-11',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/start',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-8',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-30',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_1',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/start',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-5',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-31',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_2'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_2',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/start',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-9',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-29',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_3'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_3',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/start',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-7',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-28',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_4'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_4',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/start',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-6',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-27',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_5'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_5',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/under',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-4',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-25',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_6'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_6',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/under',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-1',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-23',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_7'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_7',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/under',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-3',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-24',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_8'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_8',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/under',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-22',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_9'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_9',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/under',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '-2',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-26',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-senaste_artiklarna-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'senaste_artiklarna-block',
    'esi_enabled' => '0',
    'esi_ttl' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '2',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
