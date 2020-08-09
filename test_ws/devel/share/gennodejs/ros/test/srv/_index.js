
"use strict";

let node_get_velocity = require('./node_get_velocity.js')
let node_get_field = require('./node_get_field.js')
let node_get_center_of_mass = require('./node_get_center_of_mass.js')
let field_set_int32 = require('./field_set_int32.js')
let display_image_paste = require('./display_image_paste.js')
let field_get_vec3f = require('./field_get_vec3f.js')
let display_draw_text = require('./display_draw_text.js')
let field_import_node_from_string = require('./field_import_node_from_string.js')
let field_get_color = require('./field_get_color.js')
let robot_wait_for_user_input_event = require('./robot_wait_for_user_input_event.js')
let get_int = require('./get_int.js')
let set_int = require('./set_int.js')
let node_remove = require('./node_remove.js')
let field_get_type = require('./field_get_type.js')
let set_float = require('./set_float.js')
let skin_get_bone_position = require('./skin_get_bone_position.js')
let field_set_vec3f = require('./field_set_vec3f.js')
let set_string = require('./set_string.js')
let mouse_get_state = require('./mouse_get_state.js')
let node_get_name = require('./node_get_name.js')
let field_get_float = require('./field_get_float.js')
let field_import_node = require('./field_import_node.js')
let display_draw_pixel = require('./display_draw_pixel.js')
let field_set_float = require('./field_set_float.js')
let node_get_id = require('./node_get_id.js')
let display_image_delete = require('./display_image_delete.js')
let skin_set_bone_orientation = require('./skin_set_bone_orientation.js')
let node_set_visibility = require('./node_set_visibility.js')
let display_draw_rectangle = require('./display_draw_rectangle.js')
let supervisor_virtual_reality_headset_get_orientation = require('./supervisor_virtual_reality_headset_get_orientation.js')
let supervisor_movie_start_recording = require('./supervisor_movie_start_recording.js')
let field_set_color = require('./field_set_color.js')
let lidar_get_layer_range_image = require('./lidar_get_layer_range_image.js')
let field_get_type_name = require('./field_get_type_name.js')
let field_get_node = require('./field_get_node.js')
let node_add_force_with_offset = require('./node_add_force_with_offset.js')
let skin_get_bone_orientation = require('./skin_get_bone_orientation.js')
let field_set_bool = require('./field_set_bool.js')
let robot_get_device_list = require('./robot_get_device_list.js')
let field_get_string = require('./field_get_string.js')
let node_get_parent_node = require('./node_get_parent_node.js')
let supervisor_get_from_id = require('./supervisor_get_from_id.js')
let node_add_force_or_torque = require('./node_add_force_or_torque.js')
let camera_get_zoom_info = require('./camera_get_zoom_info.js')
let display_image_save = require('./display_image_save.js')
let node_get_position = require('./node_get_position.js')
let field_set_string = require('./field_set_string.js')
let robot_set_mode = require('./robot_set_mode.js')
let node_get_contact_point = require('./node_get_contact_point.js')
let node_get_number_of_contact_points = require('./node_get_number_of_contact_points.js')
let node_get_orientation = require('./node_get_orientation.js')
let set_bool = require('./set_bool.js')
let display_get_info = require('./display_get_info.js')
let node_set_velocity = require('./node_set_velocity.js')
let range_finder_get_info = require('./range_finder_get_info.js')
let display_draw_polygon = require('./display_draw_polygon.js')
let field_get_rotation = require('./field_get_rotation.js')
let display_image_copy = require('./display_image_copy.js')
let get_float_array = require('./get_float_array.js')
let node_is_proto = require('./node_is_proto.js')
let field_remove_node = require('./field_remove_node.js')
let camera_get_info = require('./camera_get_info.js')
let field_get_bool = require('./field_get_bool.js')
let field_set_vec2f = require('./field_set_vec2f.js')
let camera_get_focus_info = require('./camera_get_focus_info.js')
let display_set_font = require('./display_set_font.js')
let display_draw_oval = require('./display_draw_oval.js')
let field_get_int32 = require('./field_get_int32.js')
let field_get_vec2f = require('./field_get_vec2f.js')
let supervisor_movie_stop_recording = require('./supervisor_movie_stop_recording.js')
let display_image_load = require('./display_image_load.js')
let lidar_get_layer_point_cloud = require('./lidar_get_layer_point_cloud.js')
let display_draw_line = require('./display_draw_line.js')
let node_get_status = require('./node_get_status.js')
let set_float_array = require('./set_float_array.js')
let receiver_get_emitter_direction = require('./receiver_get_emitter_direction.js')
let motor_set_control_pid = require('./motor_set_control_pid.js')
let field_remove = require('./field_remove.js')
let get_urdf = require('./get_urdf.js')
let skin_get_bone_name = require('./skin_get_bone_name.js')
let speaker_speak = require('./speaker_speak.js')
let field_get_count = require('./field_get_count.js')
let node_move_viewpoint = require('./node_move_viewpoint.js')
let get_float = require('./get_float.js')
let speaker_play_sound = require('./speaker_play_sound.js')
let speaker_is_sound_playing = require('./speaker_is_sound_playing.js')
let gps_decimal_degrees_to_degrees_minutes_seconds = require('./gps_decimal_degrees_to_degrees_minutes_seconds.js')
let supervisor_set_label = require('./supervisor_set_label.js')
let get_bool = require('./get_bool.js')
let display_image_new = require('./display_image_new.js')
let supervisor_virtual_reality_headset_get_position = require('./supervisor_virtual_reality_headset_get_position.js')
let supervisor_get_from_def = require('./supervisor_get_from_def.js')
let lidar_get_info = require('./lidar_get_info.js')
let skin_set_bone_position = require('./skin_set_bone_position.js')
let get_uint64 = require('./get_uint64.js')
let node_reset_functions = require('./node_reset_functions.js')
let lidar_get_frequency_info = require('./lidar_get_frequency_info.js')
let node_get_type = require('./node_get_type.js')
let save_image = require('./save_image.js')
let field_set_rotation = require('./field_set_rotation.js')
let node_get_static_balance = require('./node_get_static_balance.js')
let get_string = require('./get_string.js')
let automobile_get_dimensions = require('./automobile_get_dimensions.js')
let pen_set_ink_color = require('./pen_set_ink_color.js')

module.exports = {
  node_get_velocity: node_get_velocity,
  node_get_field: node_get_field,
  node_get_center_of_mass: node_get_center_of_mass,
  field_set_int32: field_set_int32,
  display_image_paste: display_image_paste,
  field_get_vec3f: field_get_vec3f,
  display_draw_text: display_draw_text,
  field_import_node_from_string: field_import_node_from_string,
  field_get_color: field_get_color,
  robot_wait_for_user_input_event: robot_wait_for_user_input_event,
  get_int: get_int,
  set_int: set_int,
  node_remove: node_remove,
  field_get_type: field_get_type,
  set_float: set_float,
  skin_get_bone_position: skin_get_bone_position,
  field_set_vec3f: field_set_vec3f,
  set_string: set_string,
  mouse_get_state: mouse_get_state,
  node_get_name: node_get_name,
  field_get_float: field_get_float,
  field_import_node: field_import_node,
  display_draw_pixel: display_draw_pixel,
  field_set_float: field_set_float,
  node_get_id: node_get_id,
  display_image_delete: display_image_delete,
  skin_set_bone_orientation: skin_set_bone_orientation,
  node_set_visibility: node_set_visibility,
  display_draw_rectangle: display_draw_rectangle,
  supervisor_virtual_reality_headset_get_orientation: supervisor_virtual_reality_headset_get_orientation,
  supervisor_movie_start_recording: supervisor_movie_start_recording,
  field_set_color: field_set_color,
  lidar_get_layer_range_image: lidar_get_layer_range_image,
  field_get_type_name: field_get_type_name,
  field_get_node: field_get_node,
  node_add_force_with_offset: node_add_force_with_offset,
  skin_get_bone_orientation: skin_get_bone_orientation,
  field_set_bool: field_set_bool,
  robot_get_device_list: robot_get_device_list,
  field_get_string: field_get_string,
  node_get_parent_node: node_get_parent_node,
  supervisor_get_from_id: supervisor_get_from_id,
  node_add_force_or_torque: node_add_force_or_torque,
  camera_get_zoom_info: camera_get_zoom_info,
  display_image_save: display_image_save,
  node_get_position: node_get_position,
  field_set_string: field_set_string,
  robot_set_mode: robot_set_mode,
  node_get_contact_point: node_get_contact_point,
  node_get_number_of_contact_points: node_get_number_of_contact_points,
  node_get_orientation: node_get_orientation,
  set_bool: set_bool,
  display_get_info: display_get_info,
  node_set_velocity: node_set_velocity,
  range_finder_get_info: range_finder_get_info,
  display_draw_polygon: display_draw_polygon,
  field_get_rotation: field_get_rotation,
  display_image_copy: display_image_copy,
  get_float_array: get_float_array,
  node_is_proto: node_is_proto,
  field_remove_node: field_remove_node,
  camera_get_info: camera_get_info,
  field_get_bool: field_get_bool,
  field_set_vec2f: field_set_vec2f,
  camera_get_focus_info: camera_get_focus_info,
  display_set_font: display_set_font,
  display_draw_oval: display_draw_oval,
  field_get_int32: field_get_int32,
  field_get_vec2f: field_get_vec2f,
  supervisor_movie_stop_recording: supervisor_movie_stop_recording,
  display_image_load: display_image_load,
  lidar_get_layer_point_cloud: lidar_get_layer_point_cloud,
  display_draw_line: display_draw_line,
  node_get_status: node_get_status,
  set_float_array: set_float_array,
  receiver_get_emitter_direction: receiver_get_emitter_direction,
  motor_set_control_pid: motor_set_control_pid,
  field_remove: field_remove,
  get_urdf: get_urdf,
  skin_get_bone_name: skin_get_bone_name,
  speaker_speak: speaker_speak,
  field_get_count: field_get_count,
  node_move_viewpoint: node_move_viewpoint,
  get_float: get_float,
  speaker_play_sound: speaker_play_sound,
  speaker_is_sound_playing: speaker_is_sound_playing,
  gps_decimal_degrees_to_degrees_minutes_seconds: gps_decimal_degrees_to_degrees_minutes_seconds,
  supervisor_set_label: supervisor_set_label,
  get_bool: get_bool,
  display_image_new: display_image_new,
  supervisor_virtual_reality_headset_get_position: supervisor_virtual_reality_headset_get_position,
  supervisor_get_from_def: supervisor_get_from_def,
  lidar_get_info: lidar_get_info,
  skin_set_bone_position: skin_set_bone_position,
  get_uint64: get_uint64,
  node_reset_functions: node_reset_functions,
  lidar_get_frequency_info: lidar_get_frequency_info,
  node_get_type: node_get_type,
  save_image: save_image,
  field_set_rotation: field_set_rotation,
  node_get_static_balance: node_get_static_balance,
  get_string: get_string,
  automobile_get_dimensions: automobile_get_dimensions,
  pen_set_ink_color: pen_set_ink_color,
};
