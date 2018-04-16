<?php
/**
 * @file
 * all_the_battiness.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function all_the_battiness_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article-field_image'.
  $field_instances['node-article-field_image'] = array(
    'bundle' => 'article',
    'deleted' => 0,
    'description' => 'Upload an image to go with this article.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => TRUE,
      'default_image' => 0,
      'file_directory' => 'field/image',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-article-field_record_'.
  $field_instances['node-article-field_record_'] = array(
    'bundle' => 'article',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_record_',
    'label' => 'Record!',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'wav ogg webm mp3 mov',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media_recorder',
      'settings' => array(
        'constraints' => array(
          'audio' => 1,
          'video' => 0,
          'video_height' => array(
            'ideal' => 720,
            'max' => 1080,
            'min' => 480,
          ),
          'video_width' => array(
            'ideal' => 1280,
            'max' => 1920,
            'min' => 640,
          ),
        ),
        'time_limit' => 300,
      ),
      'type' => 'media_recorder',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');
  t('Record!');
  t('Upload an image to go with this article.');

  return $field_instances;
}
