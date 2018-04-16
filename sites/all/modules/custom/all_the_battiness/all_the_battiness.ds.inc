<?php
/**
 * @file
 * all_the_battiness.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function all_the_battiness_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'hear_hear' => array(
      'weight' => '3',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Hear hear!',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|article|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function all_the_battiness_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'hear_hear';
  $ds_field->label = 'Hear hear';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
    'file' => 'file',
  );
  $ds_field->ui_limit = 'article|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<script>
var howBatty = function(battiness) {
  console.log("inside howBatty");
  var battyPlayer = document.getElementById("batty");
  battiness = battiness.value;
  var c = document.getElementById("currentPbr");
  battyPlayer.mozPreservesPitch = false;
  battyPlayer.playbackRate = battiness;
  c.innerHTML = battiness;
}
</script>
<div style="margin-bottom:1.25em;">
<audio id="batty" controls>
  <source src="/sites/default/files/[node:field_record_:filename]" />
</audio>
</div>

<form>
  <label for="howbatty"><strong>Playback rate:</strong> <span id="currentPbr">1</span>x</label>
  <input type="range" name="howbatty" value="1" min="0.5" max="1" step="0.05" style="width:180px;" oninput="howBatty(this);">
</form>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['hear_hear'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function all_the_battiness_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'hear_hear',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'hear_hear' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|article|default'] = $ds_layout;

  return $export;
}
