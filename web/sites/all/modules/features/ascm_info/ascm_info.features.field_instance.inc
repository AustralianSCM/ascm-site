<?php

/**
 * @file
 * ascm_info.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ascm_info_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-book-body'.
  $field_instances['node-book-body'] = array(
    'bundle' => 'book',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 200,
        ),
        'type' => 'text_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 1,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
      'wysiwyg_fields' => array(
        'settings' => array(
          'advanced' => array(
            'delete' => 1,
            'hide' => 1,
          ),
          'formatters' => array(),
          'icon' => '6f7621a02161e347e66d99d8ace540a3',
          'label' => 'Body',
        ),
        'status' => 0,
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-book-field_access'.
  $field_instances['node-book-field_access'] = array(
    'bundle' => 'book',
    'default_value' => array(
      0 => array(
        'tid' => 82,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_access',
    'label' => 'Access',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
      'wysiwyg_fields' => array(
        'settings' => array(
          'advanced' => array(
            'delete' => 1,
            'hide' => 1,
          ),
          'formatters' => array(),
          'icon' => '6f7621a02161e347e66d99d8ace540a3',
          'label' => 'Access',
        ),
        'status' => 0,
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-book-field_attachments'.
  $field_instances['node-book-field_attachments'] = array(
    'bundle' => 'book',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_attachments',
    'label' => 'Attachments',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 0,
          ),
          'value' => 'info',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'user_register_form' => FALSE,
      'wysiwyg_fields' => array(
        'settings' => array(
          'advanced' => array(
            'delete' => 1,
            'hide' => 1,
          ),
          'formatters' => array(),
          'icon' => '6f7621a02161e347e66d99d8ace540a3',
          'label' => 'Attachments',
        ),
        'status' => 0,
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 'attach',
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'imce_filefield_on' => 1,
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 32,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-book-field_tags'.
  $field_instances['node-book-field_tags'] = array(
    'bundle' => 'book',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(
          'taxonomy_term_link' => 1,
          'taxonomy_term_separator' => ' / ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(
          'taxonomy_term_link' => 1,
          'taxonomy_term_separator' => ' / ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
      'wysiwyg_fields' => array(
        'settings' => array(
          'advanced' => array(
            'delete' => 1,
            'hide' => 1,
          ),
          'formatters' => array(),
          'icon' => '6f7621a02161e347e66d99d8ace540a3',
          'label' => 'Tags',
        ),
        'status' => 0,
      ),
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 34,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Access');
  t('Attachments');
  t('Body');
  t('Tags');

  return $field_instances;
}
