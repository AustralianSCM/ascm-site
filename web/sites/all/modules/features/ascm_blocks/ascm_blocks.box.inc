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
  $box->delta = 'contact_brief';
  $box->plugin_key = 'simple';
  $box->title = 'Contact us';
  $box->description = 'Contact - brief info';
  $box->options = array(
    'additional_classes' => '',
    'body' => array(
      'format' => 'filtered_html',
      'value' => '<p>PO Box 4386<br />
MELBOURNE UNIVERSITY<br />
VIC 3052</p>

<p>ABN: 41 280 113 129</p>

<p><a href="/contact-us">Email us</a></p>

<p><a href="https://gitreports.com/issue/claudinec/ascm-site">Website problem?</a></p>
',
    ),
  );
  $export['contact_brief'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Contact form header';
  $box->options = array(
    'additional_classes' => '',
    'body' => array(
      'format' => 'filtered_html',
      'value' => '<p><strong>Our postal address</strong></p>

<p>PO Box 4386<br />
MELBOURNE UNIVERSITY<br />
VIC 3052</p>

<p>You can also contact us using the following form.</p>

<p>To updated your details on our contact database, please use the form on the <a href="/form/update-your-contact-details">\'Update your contact details\'</a> page.</p>

<p>If you\'ve found a problem with this website, please <a href="https://gitreports.com/issue/claudinec/ascm-site">submit a report</a>.</p>
',
    ),
  );
  $export['contact_header'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'postal_address';
  $box->plugin_key = 'simple';
  $box->title = 'Our postal address';
  $box->description = 'Postal address';
  $box->options = array(
    'body' => array(
      'format' => 'filtered_html',
      'value' => '<p>PO Box 4386<br><span style="line-height: 1.4;">MELBOURNE UNIVERSITY<br>VIC 3052</span></p>',
    ),
  );
  $export['postal_address'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social';
  $box->plugin_key = 'simple';
  $box->title = 'Keep in touch';
  $box->description = 'Social links';
  $box->options = array(
    'additional_classes' => '',
    'body' => array(
      'format' => 'filtered_html',
      'value' => '<p><a href="/newsletter">Subscribe to our email newsletter</a> or visit our <a href="/newsletter-archive">newsletter archive</a></p>

<p>Like and follow: <a href="https://fb.me/AustralianSCM"><span class="fab fa-facebook-square"></span></a> <a href="https://instagram.com/australianscm"><span class="fab fa-instagram"></span></a> <a href="https://twitter.com/australianscm"><span class="fab fa-twitter-square"></span></a> <a href="https://www.youtube.com/channel/UComAdAiyJxC3PN1A0gUcWXQ"><span class="fab fa-youtube-square"></span></a></p>
',
    ),
  );
  $export['social'] = $box;

  return $export;
}
