ARE_signature = 0x00
ARE_version = 0x04
ARE_wed = 0x08
ARE_last_saved = 0x10
ARE_flags = 0x14
ARE_north = 0x18
ARE_north_flags = 0x20
ARE_east = 0x24
ARE_east_flags = 0x2c
ARE_south = 0x30
ARE_south_flags = 0x38
ARE_west = 0x3c
ARE_west_flags = 0x44
ARE_type_flags = 0x48
ARE_rain_probability = 0x4a
ARE_snow_probability = 0x4c
ARE_fog_probability_EE = 0x4e
ARE_lighting_probability = 0x50
ARE_wind_speed_nonEE = 0x52
ARE_overlay_transparency_EE = 0x52
ARE_actors_offset = 0x54
ARE_actors_count = 0x58
ARE_regions_count = 0x5a
ARE_regions_offset = 0x5c
ARE_spawn_offset = 0x60
ARE_spawn_count = 0x64
ARE_entrances_offset = 0x68
ARE_entrances_count = 0x6c
ARE_containers_offset = 0x70
ARE_containers_count = 0x74
ARE_items_count = 0x76
ARE_items_offset = 0x78
ARE_vertices_offset = 0x7c
ARE_vertices_count = 0x80
ARE_ambients_count = 0x82
ARE_ambiets_offset = 0x84
ARE_variables_offset = 0x88
ARE_variables_count = 0x8c
ARE_tiled_object_flags = 0x90
ARE_tiled_object_count = 0x92
ARE_script = 0x94
ARE_bitmask_size = 0x9c
ARE_bitmask_offset = 0xa0
ARE_doors_count = 0xa4
ARE_doors_offset = 0xa8
ARE_animations_count = 0xac
ARE_animations_offset = 0xb0
ARE_tiled_objects_count = 0xb4
ARE_tiled_objects_offset = 0xb8
ARE_soung_offset = 0xbc
ARE_rest_interruptions_offset = 0xc0
ARE_map_note_offset_PST = 0xc8
ARE_map_note_count_PST = 0xcc
ARE_projectile_traps_count = 0xd0
ARE_rest_movie_day = 0xd4
ARE_rest_movie_night = 0xdc

ARE_REGION_size = 0xc4
ARE_REGION_name = 0
ARE_REGION_type = 0x20
ARE_REGION_bounding_box = 0x22
ARE_REGION_vertices_count = 0x2a
ARE_REGION_first_vertex_index = 0x2c
ARE_REGION_trigger_value = 0x30
ARE_REGION_cursor = 0x34
ARE_REGION_dest_area = 0x38
ARE_REGION_dest_area_entranc_name = 0x40
ARE_REGION_flags = 0x60
ARE_REGION_into_text = 0x64
ARE_REGION_trap_detection_difficulty = 0x68
ARE_REGION_trap_removal_difficulty = 0x6a
ARE_REGION_trapped = 0x6c
ARE_REGION_trap_detected = 0x6e
ARE_REGION_trap_launch_location = 0x70
ARE_REGION_key_item = 0x74
ARE_REGION_script = 0x7c
ARE_REGION_alt_use_point_x_coord = 0x84
ARE_REGION_alt_use_point_y_coord = 0x86
ARE_REGION_sound_PST = 0xac
ARE_REGION_talk_location_point_x_PST = 0xb4
ARE_REGION_talk_location_point_y_PST = 0xb6
ARE_REGION_speaker_name_PST = 0xb8
ARE_REGION_dialog_PST = 0xbc

ARE_CONTAINER_size = 0xc0
ARE_CONTAINER_name = 0
ARE_CONTAINER_x = 0x20
ARE_CONTAINER_y = 0x22
ARE_CONTAINER_type = 0x24
ARE_CONTAINER_lock_difficulty = 0x26
ARE_CONTAINER_flags = 0x28
ARE_CONTAINER_trap_detection_difficulty = 0x2c
ARE_CONTAINER_trap_removal_difficulty = 0x2e
ARE_CONTAINER_trapped = 0x30
ARE_CONTAINER_trap_detected = 0x32
ARE_CONTAINER_trap_launch_x_coord = 0x34
ARE_CONTAINER_trap_launch_y_coord = 0x36
ARE_CONTAINER_bounding_left = 0x38
ARE_CONTAINER_bounding_top = 0x38
ARE_CONTAINER_bounding_right = 0x38
ARE_CONTAINER_bounding_bottom = 0x38
ARE_CONTAINER_first_item_index = 0x40
ARE_CONTAINER_items_count = 0x44
ARE_CONTAINER_script = 0x48
ARE_CONTAINER_first_vertex_index = 0x50
ARE_CONTAINER_vertices_count = 0x54
ARE_CONTAINER_trigger_range = 0x56
ARE_CONTAINER_owner_script_name = 0x58
ARE_CONTAINER_key_item = 0x78
ARE_CONTAINER_break_difficulty = 0x80
ARE_CONTAINER_lockpick_string = 0x84

ARE_DOOR_size = 0xc8
ARE_DOOR_name = 0
ARE_DOOR_id = 0x20
ARE_DOOR_flags = 0x28
ARE_DOOR_open_first_vertex_index = 0x2c
ARE_DOOR_open_vertices_count = 0x30
ARE_DOOR_closed_vertices_count = 0x32
ARE_DOOR_closed_first_vertex_index = 0x34
ARE_DOOR_bounding_open = 0x38
ARE_DOOR_bounding_closed = 0x40
ARE_DOOR_impeded_open_first_vertex_index = 0x48
ARE_DOOR_impeded_open_vertices_count = 0x4c
ARE_DOOR_impeded_closed_vertices_count = 0x4e
ARE_DOOR_impeded_closed_first_vertice_index = 0x50
ARE_DOOR_hp = 0x54
ARE_DOOR_ac = 0x56
ARE_DOOR_open_sound = 0x58
ARE_DOOR_close_sound = 0x60
ARE_DOOR_cursor = 0x68
ARE_DOOR_trap_detection_difficulty = 0x6c
ARE_DOOR_trap_removal_difficulty = 0x6e
ARE_DOOR_trapped = 0x70
ARE_DOOR_trap_detected = 0x72
ARE_DOOR_trap_launch_x_coord = 0x74
ARE_DOOR_trap_launch_y_coord = 0x76
ARE_DOOR_key = 0x78
ARE_DOOR_script = 0x80
ARE_DOOR_detection_difficulty = 0x88
ARE_DOOR_lock_difficulty = 0x8c
ARE_DOOR_toggle_state_points = 0x90
ARE_DOOR_lockpick_string = 0x98
ARE_DOOR_travel_trigger_name = 0x9c
ARE_DOOR_speaker_name = 0xb4
ARE_DOOR_dialog = 0xb8


FLAG_ARE_EDGE_party_required = 0
FLAG_ARE_EDGE_party_enabled = 1

PATCH_INCLUDE ~%BGFORGE_LIB_DIR%/flag_are_region.tpp~
