# Install script for directory: /home/nbhak/Desktop/test_ws/src/test

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/nbhak/Desktop/test_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test/msg" TYPE FILE FILES
    "/home/nbhak/Desktop/test_ws/src/test/msg/BoolStamped.msg"
    "/home/nbhak/Desktop/test_ws/src/test/msg/Float64Stamped.msg"
    "/home/nbhak/Desktop/test_ws/src/test/msg/Int32Stamped.msg"
    "/home/nbhak/Desktop/test_ws/src/test/msg/Int8Stamped.msg"
    "/home/nbhak/Desktop/test_ws/src/test/msg/RadarTarget.msg"
    "/home/nbhak/Desktop/test_ws/src/test/msg/RecognitionObject.msg"
    "/home/nbhak/Desktop/test_ws/src/test/msg/StringStamped.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test/srv" TYPE FILE FILES
    "/home/nbhak/Desktop/test_ws/src/test/srv/camera_get_focus_info.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/camera_get_info.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/camera_get_zoom_info.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/display_draw_line.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/display_draw_oval.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/display_draw_pixel.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/display_draw_polygon.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/display_draw_rectangle.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/display_draw_text.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/display_get_info.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/display_image_copy.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/display_image_delete.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/display_image_load.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/display_image_new.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/display_image_paste.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/display_image_save.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/display_set_font.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_get_bool.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_get_color.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_get_count.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_get_float.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_get_int32.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_get_node.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_get_rotation.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_get_string.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_get_type.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_get_type_name.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_get_vec2f.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_get_vec3f.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_import_node.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_import_node_from_string.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_remove_node.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_remove.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_set_bool.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_set_color.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_set_float.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_set_int32.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_set_rotation.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_set_string.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_set_vec2f.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/field_set_vec3f.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/get_bool.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/get_float_array.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/get_float.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/get_int.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/get_string.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/get_uint64.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/get_urdf.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/gps_decimal_degrees_to_degrees_minutes_seconds.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/lidar_get_frequency_info.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/lidar_get_info.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/lidar_get_layer_point_cloud.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/lidar_get_layer_range_image.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/motor_set_control_pid.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/mouse_get_state.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_add_force_or_torque.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_add_force_with_offset.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_get_center_of_mass.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_get_contact_point.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_get_field.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_get_id.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_get_number_of_contact_points.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_get_name.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_get_orientation.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_get_parent_node.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_get_position.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_get_static_balance.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_get_status.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_get_type.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_get_velocity.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_remove.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_reset_functions.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_move_viewpoint.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_set_visibility.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/node_set_velocity.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/pen_set_ink_color.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/range_finder_get_info.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/receiver_get_emitter_direction.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/robot_get_device_list.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/robot_set_mode.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/robot_wait_for_user_input_event.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/save_image.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/set_bool.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/set_float.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/set_float_array.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/set_int.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/set_string.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/skin_get_bone_name.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/skin_get_bone_orientation.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/skin_get_bone_position.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/skin_set_bone_orientation.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/skin_set_bone_position.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/speaker_is_sound_playing.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/speaker_speak.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/speaker_play_sound.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/supervisor_get_from_def.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/supervisor_get_from_id.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/supervisor_movie_start_recording.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/supervisor_set_label.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/supervisor_virtual_reality_headset_get_orientation.srv"
    "/home/nbhak/Desktop/test_ws/src/test/srv/supervisor_virtual_reality_headset_get_position.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test/cmake" TYPE FILE FILES "/home/nbhak/Desktop/test_ws/build/test/catkin_generated/installspace/test-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/nbhak/Desktop/test_ws/devel/include/test")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/nbhak/Desktop/test_ws/devel/share/roseus/ros/test")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/nbhak/Desktop/test_ws/devel/share/common-lisp/ros/test")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/nbhak/Desktop/test_ws/devel/share/gennodejs/ros/test")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/nbhak/Desktop/test_ws/devel/lib/python2.7/dist-packages/test")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/nbhak/Desktop/test_ws/devel/lib/python2.7/dist-packages/test")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/nbhak/Desktop/test_ws/build/test/catkin_generated/installspace/test.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test/cmake" TYPE FILE FILES "/home/nbhak/Desktop/test_ws/build/test/catkin_generated/installspace/test-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test/cmake" TYPE FILE FILES
    "/home/nbhak/Desktop/test_ws/build/test/catkin_generated/installspace/testConfig.cmake"
    "/home/nbhak/Desktop/test_ws/build/test/catkin_generated/installspace/testConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test" TYPE FILE FILES "/home/nbhak/Desktop/test_ws/src/test/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/test" TYPE PROGRAM FILES "/home/nbhak/Desktop/test_ws/build/test/catkin_generated/installspace/node.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/test" TYPE PROGRAM FILES "/home/nbhak/Desktop/test_ws/build/test/catkin_generated/installspace/testcontroller.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/test" TYPE PROGRAM FILES "/home/nbhak/Desktop/test_ws/build/test/catkin_generated/installspace/webots_launcher.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test" TYPE DIRECTORY FILES "/home/nbhak/Desktop/test_ws/src/test/launch")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test" TYPE DIRECTORY FILES "/home/nbhak/Desktop/test_ws/src/test/plugins")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test" TYPE DIRECTORY FILES "/home/nbhak/Desktop/test_ws/src/test/worlds")
endif()

