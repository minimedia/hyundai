<?php
/**
 * @file
 * hyundai.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hyundai_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_admin_theme_batch';
  $strongarm->value = 1;
  $export['admin_theme_admin_theme_batch'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_path';
  $strongarm->value = 'node/add*
node/*/edit
node/*/delete
admin*
user/*/edit
user/*/delete
taxonomy/term/*/edit';
  $export['admin_theme_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bakery_domain';
  $strongarm->value = 'minimedia.se';
  $export['bakery_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bakery_freshness';
  $strongarm->value = '28800';
  $export['bakery_freshness'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bakery_help_text';
  $strongarm->value = 'Otherwise you can contact the site administrators.';
  $export['bakery_help_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bakery_is_master';
  $strongarm->value = 0;
  $export['bakery_is_master'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bakery_key';
  $strongarm->value = 'BE384DAB3BF53316C64BE66CFB29D';
  $export['bakery_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bakery_master';
  $strongarm->value = 'http://bakery.minimedia.se/';
  $export['bakery_master'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bakery_slaves';
  $strongarm->value = array();
  $export['bakery_slaves'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bakery_supported_fields';
  $strongarm->value = array(
    'name' => 'name',
    'mail' => 'mail',
    'status' => 'status',
    'picture' => 0,
    'language' => 0,
    'signature' => 0,
  );
  $export['bakery_supported_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_article';
  $strongarm->value = 0;
  $export['comment_anonymous_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_page';
  $strongarm->value = 0;
  $export['comment_anonymous_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_article';
  $strongarm->value = '0';
  $export['comment_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_article';
  $strongarm->value = 1;
  $export['comment_default_mode_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_page';
  $strongarm->value = 1;
  $export['comment_default_mode_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_article';
  $strongarm->value = '50';
  $export['comment_default_per_page_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_article';
  $strongarm->value = 1;
  $export['comment_form_location_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_page';
  $strongarm->value = 1;
  $export['comment_form_location_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 0;
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_article';
  $strongarm->value = '1';
  $export['comment_preview_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_page';
  $strongarm->value = '1';
  $export['comment_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_article';
  $strongarm->value = 1;
  $export['comment_subject_field_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_page';
  $strongarm->value = 1;
  $export['comment_subject_field_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_contextual';
  $strongarm->value = 0;
  $export['ds_extras_contextual'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_fields_extra';
  $strongarm->value = 0;
  $export['ds_extras_fields_extra'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_fields_extra_list';
  $strongarm->value = '';
  $export['ds_extras_fields_extra_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_field_template';
  $strongarm->value = 1;
  $export['ds_extras_field_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_hide_page_title';
  $strongarm->value = 0;
  $export['ds_extras_hide_page_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_region_to_block';
  $strongarm->value = 0;
  $export['ds_extras_region_to_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_revision_view_mode';
  $strongarm->value = 0;
  $export['ds_extras_revision_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_switch_field';
  $strongarm->value = 0;
  $export['ds_extras_switch_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_switch_view_mode';
  $strongarm->value = 0;
  $export['ds_extras_switch_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_vd';
  $strongarm->value = 0;
  $export['ds_extras_vd'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__article';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'mynewviewmode' => array(
        'custom_settings' => TRUE,
      ),
      'ettan' => array(
        'custom_settings' => TRUE,
      ),
      'fyran' => array(
        'custom_settings' => TRUE,
      ),
      'slider' => array(
        'custom_settings' => TRUE,
      ),
      'mini' => array(
        'custom_settings' => TRUE,
      ),
      'lopsedel' => array(
        'custom_settings' => TRUE,
      ),
      'artikel_view' => array(
        'custom_settings' => FALSE,
      ),
      'minimobile' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'dashboard_teasers' => array(
        'custom_settings' => TRUE,
      ),
      'dashboard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '9',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_cache';
  $strongarm->value = 0;
  $export['googleanalytics_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_js_scope';
  $strongarm->value = 'header';
  $export['googleanalytics_js_scope'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_privacy_donottrack';
  $strongarm->value = 1;
  $export['googleanalytics_privacy_donottrack'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackfiles';
  $strongarm->value = 1;
  $export['googleanalytics_trackfiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackoutbound';
  $strongarm->value = 1;
  $export['googleanalytics_trackoutbound'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_visibility_roles';
  $strongarm->value = '0';
  $export['googleanalytics_visibility_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_article';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_article';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_article';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_article';
  $strongarm->value = '0';
  $export['node_preview_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '0';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_article';
  $strongarm->value = 1;
  $export['node_submitted_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = FALSE;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_reduce_ascii';
  $strongarm->value = 0;
  $export['pathauto_reduce_ascii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_separator';
  $strongarm->value = '-';
  $export['pathauto_separator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_transliterate';
  $strongarm->value = 1;
  $export['pathauto_transliterate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_arctica_subtheme_settings';
  $strongarm->value = array(
    'boxsizing_polyfill' => 0,
    'flexible_images_polyfill' => 1,
    'html_polyfill' => 1,
    'responsive_polyfill' => 1,
    'responsive_polyfill2' => 0,
    'futurecss_enable' => 0,
    'process_selectors' => '',
    'css_overrides' => array(
      'system_menus_css' => 'system_menus_css',
      'system_messages_css' => 'system_messages_css',
      'system_theme_css' => 'system_theme_css',
      'comment_css' => 'comment_css',
      'user_css' => 'user_css',
      'search_css' => 'search_css',
      'taxonomy_css' => 'taxonomy_css',
      'poll_css' => 'poll_css',
      'book_css' => 'book_css',
      'node_css' => 'node_css',
      'system_base_css' => 0,
    ),
    'remove_attribution_link' => 1,
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_favicon' => 0,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 0,
    'default_logo' => 0,
    'logo_path' => 'public://dummy_sidhuvud.png',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => '',
    'favicon_upload' => '',
    'responsive_enable' => 1,
    'layout_type1' => '5',
    'layout_query1' => '#block-boxes-google-remarketing{padding: 0 !important;}
#block-boxes-surveymonkey-overlay{padding:0 !important;}
#block-boxes-ipad-orientationchange-fix{padding:0 !important;}
*{-moz-box-sizing: border-box; -webkit-box-sizing: border-box; -ms-box-sizing: border-box; box-sizing: border-box;}
/* Monkey survey */
#zsurvey{float:left; width: 100%; height: auto; position: static; background-color: rgb(255, 255, 255); padding: 10px; min-height: 570px;}

/* Fix new issues with paddings */
[class|="grid"], .block{padding: 10px;}
.region-featured .block{padding: 0;}
/* Hide mobile blocks */
#block-views-lopsedel-mobile-block-2, #block-views-lopsedel-mobile-block-3, .mobile-trigger{display: none;}
#block-system-main{padding: 0px; padding-left: 10px; padding-right: 10px;}
.region-content{padding-top: 0px;}
.view-mode-full{padding-top: 10px;}
.term-listing-heading{padding-top: 10px;}
.wrap-feed-icons{display:none;}
.view-mode-teaser{margin-bottom: 20px;}

/* Set Page width */
#page{width: 100%; max-width: 1000px;}

@media screen and (max-width:1065px){
#page{width: 97%; overflow: hidden;}
.menu{max-width: 100%;}
.menu a{font-size: 12px;}
.masthead{margin: 0 5px;}
.wrap-columns{float:left;}
#panoramabreddare, #block-block-6, #breddare{display: none;}
.brodtext{ padding-bottom: 1%; margin-bottom: 1%; border-bottom: 1px solid #ddd;}

#block-views-lopsedel-start-block-2{/*margin-top: 10px;*/}
.view-display-id-block_2 td, .view-display-id-block_6 td{float: left; max-width: 100%;}
.fyran-row{max-width: 100%; float: left;}

}
@media screen and (max-width:1040px){
.content-column{max-width: 53%;}
#block-views-lopsedel-start-block-1{max-width: 53%; width: 53%;}
#block-views-lopsedel-start-block-2, .region-sidebar-second{max-width: 47%; width: 100% !important; margin-left: 0; float: left; border: none;}
.brodtext iframe{width: 100%;}
}
@media screen and (max-width:1000px){
#page{border: none; width: 100%;}
.menu{width: 100%; padding: 1% 2%; height: auto; float: left;}
.menu li{margin-left: 0; margin-right: 15px; float: left;}
#block-views-lopsedel-start-block{display:none;}
#block-boxes-surveymonkey-overlay, #zsurvey,#cover,#closer,#surveyMonkeyInfo{display:none;}
}',
    'layout_width1' => '100%',
    'layout_max_width1' => '980px',
    'sidebar_first_width1' => '50',
    'sidebar_second_width1' => '33.333',
    'gutter_vertical1' => '10px',
    'gutter_horizontal1' => '10px',
    'layout_type2' => '5',
    'layout_query2' => '@media screen and (max-width:800px){
iframe, iframe > *{max-width: 100%;}

/* YT feed */
#boxes-box-wisely_ytfeed, #boxes-box-wisely_ytfeed iframe, #boxes-box-wisely_ytfeed iframe iframe, #boxes-box-wisely_ytfeed iframe #wrapper{max-width: 100%;}

/* Veckans fråga */
.sidebar article.hyundaipoll header{margin: 0;}
.sidebar article.hyundaipoll{padding: 3%;}
.sidebar form .form-radios{padding: 3%; width: 70%; background: rgba(51, 51, 51, 0.71); float: right;}
.sidebar article.hyundaipoll input.form-submit{float: right; margin-right: 0;}
/* Bilväljaren */
.article.jumper, article.jumper{padding: 0; margin: 0; position: relative; margin-bottom: 6%;}
article.jumper header{padding: 4%; margin: 0;}
article.jumper .content{position: absolute; bottom: 4%; min-height: initial;}

/* Newsletter */
#boxes-box-wisely_newsletter, #boxes-box-wisely_newsletter *{max-width: 100%;}

/* Hide non-mobile blocks */
#breddare, #block-block-6, #panoramabreddare, .region-featured, #block-views-lopsedel-start-block-5, #block-views-lopsedel-start-block-3, #block-views-lopsedel-start-block-4, #block-views-lopsedel-block-2, #block-views-lopsedel-block-3, #block-views-lopsedel-block-4, #block-views-lopsedel-block-5, #block-views-lopsedel-block-6{display: none;}

/* Show mobile blocks */
#block-views-lopsedel-mobile-block-2, #block-views-lopsedel-mobile-block-3 {display: block;}

/* Set mobile blocks ul margins*/
#block-views-lopsedel-mobile-block-2 ul, #block-views-lopsedel-mobile-block-3 ul{margin: 0; padding: 0;}

/* Set double-column widths */
.content-column{width: 60% !important; max-width: 60%;}
.region-sidebar-second{max-width: 40%;}

/* Fix font-sizes */
h4.mini{font-size: 15px; line-height: 15px;}
p.mini{font-size: 13px; line-height: 13px;}
h5.lopsedel{font-size: 25px; line-height: 25px;}
p.lopsedel{font-size: 13px; line-height: 13px;}

/* Margins and stuff */
.view-lopsedel-mobile li{padding-bottom: 2%; margin-bottom: 2%; border-bottom: 1px solid #ccc; list-style: none;}
.view-lopsedel-mobile li.views-row-last{border-bottom: 0;}

/* Fix header margins for annonsbalk 100% */
.masthead{margin: 0;}
.masthead .logo img{width: 98%; margin-left: 1%;}

/* Fix annonsbalk issues on mobile */
.annonsbalk{position: static; float:left;}
.region-footer .grid-1-2{width: 100%;}
.region-footer{margin: 0;}
#topp{margin:0;}
#block-boxes-annonsbalk-topp-box, #block-boxes-annonsbalk-botten-box{padding: 0;}
/* REMOVED .grid-inner#topp{margin:0;}*/

/* Fix Facebook widget */
.fb_iframe_widget,.fb_iframe_widget iframe, .fb_iframe_widget_fluid span{max-width: 100%; width: 100%;}
}',
    'layout_width2' => '100%',
    'layout_max_width2' => 'none',
    'sidebar_first_width2' => '50',
    'sidebar_second_width2' => '33.333',
    'gutter_vertical2' => '10px',
    'gutter_horizontal2' => '10px',
    'layout_type3' => '4',
    'layout_query3' => '@media screen and (max-width:540px){
.mobile-trigger{display:block;}
.menu{display: none;}
.menu li{width: 100%; float: left;}
#page{width: 100% !important; max-width:100% !important;}
.content-column{width: 100% !important; max-width:100% !important;}
.region-sidebar-second{width: 100% !important; max-width: 100% !important;}
.view-lopsedel-mobile li.views-row-last{border-bottom: 1px solid #ccc;}
.view-mode-teaser{border-bottom: 1px solid #ccc; margin-bottom: 2%; padding-bottom: 2%;}
}',
    'layout_width3' => '100%',
    'layout_max_width3' => 'none',
    'sidebar_first_width3' => '100',
    'sidebar_second_width3' => '33.333',
    'gutter_vertical3' => '10px',
    'gutter_horizontal3' => '10px',
    'layout_type4' => '4',
    'layout_query4' => '@media screen and (max-width:400px){
h4.mini{font-size: 18px; line-height: 18px;}
p.mini{font-size: 15px; line-height: 15px;}
h5.lopsedel{font-size: 30px; line-height: 30px;}
h1.article{font-size: 40px; line-height: 40px;}
.annonsbalk{font-size: 10px; line-height: 17px;}
}',
    'layout_width4' => '100%',
    'layout_max_width4' => 'none',
    'sidebar_first_width4' => '20',
    'sidebar_second_width4' => '20',
    'gutter_vertical4' => '10px',
    'gutter_horizontal4' => '10px',
    'layout_type5' => '4',
    'layout_query5' => '@media screen and (max-width:450px){
}',
    'layout_width5' => '100%',
    'layout_max_width5' => 'none',
    'sidebar_first_width5' => '20',
    'sidebar_second_width5' => '20',
    'gutter_vertical5' => '5px',
    'gutter_horizontal5' => '5px',
    'media_queries' => '0',
    'meta' => '<meta name="MobileOptimized" content ="width">
<meta name="HandheldFriendly" content ="true">
<meta name="apple-mobile-web-app-capable" content ="yes">
<meta http-equiv="cleartype" content ="on">
<meta http-equiv="X-UA-Compatible" content ="IE =edge, chrome =1">
<meta name="viewport" content ="width =device-width, initial-scale =1">',
    'hide_address_bar' => 0,
    'ori_scale' => 0,
    'aavb_print' => 1,
    'aavb_forms' => 1,
    'aavb_navigation' => 1,
    'aavb_messages' => 1,
    'arctica_settings__active_tab' => 'edit-layout',
  );
  $export['theme_arctica_subtheme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'arctica_subtheme';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_comment_user_verification' => 0,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 0,
    'default_logo' => 0,
    'logo_path' => 'public://vattenfall_sidhuvud.png',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'public://favicon.ico',
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
  );
  $export['theme_settings'] = $strongarm;

  return $export;
}
