<?php
/**
 * @file
 * ascm_blocks.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ascm_blocks_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ascm_logo';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'ASCM Logo';
  $box->options = array(
    'body' => array(
      'value' => '<p><img alt="" class="image-style-large media-image attr__typeof__foaf:Image img__fid__27 img__view_mode__media_large attr__format__media_large" height="319" src="http://www.ascm.org.au/sites/default/files/styles/large/public/logo_320_1.png?itok=G1QUOdzN" typeof="foaf:Image" width="301"></p>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['ascm_logo'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Contact form header';
  $box->options = array(
    'body' => array(
      'value' => '<p>You can also contact us using the following form.</p><p>To updated your details on our contact database, please use the form on the <a href="/form/update-your-contact-details">\'Update your contact details\'</a> page.</p>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['contact_header'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'google_calendar';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Google Calendar embed code';
  $box->options = array(
    'body' => array(
      'value' => '<iframe src="https://www.google.com/calendar/embed?src=australianscm%40gmail.com&ctz=Australia/Sydney&showPrint=0&showTabs=0&mode=AGENDA" style="border: 0" width="300" height="225" frameborder="0" scrolling="no"></iframe>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['google_calendar'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'postal_address';
  $box->plugin_key = 'simple';
  $box->title = 'Our postal address';
  $box->description = 'Postal address';
  $box->options = array(
    'body' => array(
      'value' => '<p>PO Box 4386<br><span style="line-height: 1.4;">MELBOURNE UNIVERSITY<br>VIC 3052</span></p>',
      'format' => 'filtered_html',
    ),
  );
  $export['postal_address'] = $box;

  return $export;
}