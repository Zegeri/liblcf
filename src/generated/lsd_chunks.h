/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_LSD_CHUNKS_H
#define LCF_LSD_CHUNKS_H

/**
 * LSD Reader namespace.
 */
namespace LSD_Reader {
	struct ChunkSaveTitle {
		enum Index {
			/** double - timestamp in Delphi's TDateTime format */
			timestamp	= 0x01,
			/** char[]: hero name */
			hero_name	= 0x0B,
			/** int: hero level */
			hero_level	= 0x0C,
			/** int: hero HP */
			hero_hp		= 0x0D,
			/** char[]: face filename */
			face1_name	= 0x15,
			/** int: face id */
			face1_id	= 0x16,
			/** char[]: face filename */
			face2_name	= 0x17,
			/** int: face id */
			face2_id	= 0x18,
			/** char[]: face filename */
			face3_name	= 0x19,
			/** int: face id */
			face3_id	= 0x1A,
			/** char[]: face filename */
			face4_name	= 0x1B,
			/** int: face id */
			face4_id	= 0x1C 
		};
	};
	struct ChunkSaveSystem {
		enum Index {
			/**  */
			screen					= 0x01,
			/**  */
			frame_count				= 0x0B,
			/** string */
			graphics_name			= 0x15,
			/** ? */
			unknown_16				= 0x16,
			/** ? */
			unknown_17				= 0x17,
			/**  */
			switches_size			= 0x1F,
			/**  */
			switches				= 0x20,
			/**  */
			variables_size			= 0x21,
			/**  */
			variables				= 0x22,
			/**  */
			message_transparent		= 0x29,
			/**  */
			message_position		= 0x2A,
			/**  */
			message_prevent_overlap	= 0x2B,
			/**  */
			message_continue_events	= 0x2C,
			/**  */
			face_name				= 0x33,
			/**  */
			face_id					= 0x34,
			/** bool */
			face_right				= 0x35,
			/** bool */
			face_flip				= 0x36,
			/**  */
			transparent				= 0x37,
			/**  */
			unknown_3d				= 0x3D,
			/**  */
			title_music				= 0x47,
			/**  */
			battle_music			= 0x48,
			/**  */
			battle_end_music		= 0x49,
			/**  */
			inn_music				= 0x4A,
			/**  */
			current_music			= 0x4B,
			/**  */
			before_vehicle_music	= 0x4C,
			/**  */
			before_battle_music		= 0x4D,
			/**  */
			stored_music			= 0x4E,
			/**  */
			boat_music				= 0x4F,
			/**  */
			ship_music				= 0x50,
			/**  */
			airship_music			= 0x51,
			/**  */
			gameover_music			= 0x52,
			/**  */
			cursor_se				= 0x5B,
			/**  */
			decision_se				= 0x5C,
			/**  */
			cancel_se				= 0x5D,
			/**  */
			buzzer_se				= 0x5E,
			/**  */
			battle_se				= 0x5F,
			/**  */
			escape_se				= 0x60,
			/**  */
			enemy_attack_se			= 0x61,
			/**  */
			enemy_damaged_se		= 0x62,
			/**  */
			actor_damaged_se		= 0x63,
			/**  */
			dodge_se				= 0x64,
			/**  */
			enemy_death_se			= 0x65,
			/**  */
			item_se					= 0x66,
			/**  */
			transition_out			= 0x6F,
			/**  */
			transition_in			= 0x70,
			/**  */
			battle_start_fadeout	= 0x71,
			/**  */
			battle_start_fadein		= 0x72,
			/**  */
			battle_end_fadeout		= 0x73,
			/**  */
			battle_end_fadein		= 0x74,
			/**  */
			teleport_allowed		= 0x79,
			/**  */
			escape_allowed			= 0x7A,
			/**  */
			save_allowed			= 0x7B,
			/**  */
			menu_allowed			= 0x7C,
			/** string */
			background				= 0x7D,
			/**  */
			save_count				= 0x83,
			/**  */
			save_slot				= 0x84,
			/**  */
			unknown_8c				= 0x8C 
		};
	};
	struct ChunkSaveScreen {
		enum Index {
			/** int */
			tint_finish_red			= 0x01,
			/** int */
			tint_finish_green		= 0x02,
			/** int */
			tint_finish_blue		= 0x03,
			/** int */
			tint_finish_sat			= 0x04,
			/** double */
			tint_current_red		= 0x0B,
			/** double */
			tint_current_green		= 0x0C,
			/** double */
			tint_current_blue		= 0x0D,
			/** double */
			tint_current_sat		= 0x0E,
			/** int */
			tint_time_left			= 0x0F,
			/** int */
			flash_continuous		= 0x14,
			/** int */
			flash_red				= 0x15,
			/** int */
			flash_green				= 0x16,
			/** int */
			flash_blue				= 0x17,
			/** double */
			flash_current_level		= 0x18,
			/** int */
			flash_time_left			= 0x19,
			/** int */
			shake_continuous		= 0x1E,
			/** int */
			shake_strength			= 0x1F,
			/** int */
			shake_speed				= 0x20,
			/** int */
			shake_position			= 0x21,
			/** int */
			unknown_22				= 0x22,
			/** int */
			shake_time_left			= 0x23,
			/** int */
			pan_x					= 0x29,
			/** int */
			pan_y					= 0x2A,
			/** int - battle animation ID */
			battleanim_id			= 0x2B,
			/** int - battle animation target */
			battleanim_target		= 0x2C,
			/** int - battle animation? Ref<Animation>? */
			unknown_2d_battle_anim	= 0x2D,
			/** int */
			unknown_2e				= 0x2E,
			/** int - battle animation global scope */
			battleanim_global		= 0x2F,
			/** int */
			weather					= 0x30,
			/** int */
			weather_strength		= 0x31 
		};
	};
	struct ChunkSavePicture {
		enum Index {
			/** string */
			name				= 0x01,
			/** double */
			start_x				= 0x02,
			/** double */
			start_y				= 0x03,
			/** double */
			current_x			= 0x04,
			/** double */
			current_y			= 0x05,
			/** bool */
			fixed_to_map		= 0x06,
			/** double */
			current_magnify		= 0x07,
			/** double */
			current_top_trans	= 0x08,
			/** bool */
			transparency		= 0x09,
			/** double */
			current_red			= 0x0B,
			/** double */
			current_green		= 0x0C,
			/** double */
			current_blue		= 0x0D,
			/** double */
			current_sat			= 0x0E,
			/** int */
			effect_mode			= 0x0F,
			/** double */
			current_effect		= 0x10,
			/** double */
			current_bot_trans	= 0x12,
			/** double */
			finish_x			= 0x1F,
			/** double */
			finish_y			= 0x20,
			/** int */
			finish_magnify		= 0x21,
			/** int */
			finish_top_trans	= 0x22,
			/** int */
			finish_bot_trans	= 0x23,
			/** int */
			finish_red			= 0x29,
			/** int */
			finish_green		= 0x2A,
			/** int */
			finish_blue			= 0x2B,
			/** int */
			finish_sat			= 0x2C,
			/** int */
			finish_effect		= 0x2E,
			/** int */
			time_left			= 0x33,
			/** double */
			current_rotation	= 0x34,
			/** int */
			current_waver		= 0x35 
		};
	};
	struct ChunkSavePartyLocation {
		enum Index {
			/** Flag */
			active						= 0x01,
			/** ? */
			map_id						= 0x0B,
			/** ? */
			position_x					= 0x0C,
			/** ? */
			position_y					= 0x0D,
			/** Facing direction before lock */
			prelock_direction			= 0x15,
			/** Current facing direction */
			direction					= 0x16,
			/** ? */
			anim_frame					= 0x17,
			/** 0 or 3 - Transparency level of the main party member */
			transparency				= 0x18,
			/** From 0 to 255 - Remaining distance of the current move */
			remaining_step				= 0x1F,
			/** ? */
			move_frequency				= 0x20,
			/** ? */
			layer						= 0x21,
			/** Flag */
			overlap_forbidden			= 0x22,
			/** Integer */
			animation_type				= 0x23,
			/** facing locked */
			lock_facing					= 0x24,
			/**  */
			move_speed					= 0x25,
			/** chunks: RPG::MoveRoute */
			move_route					= 0x29,
			/** Use custom move route */
			move_route_overwrite		= 0x2A,
			/** Index of MoveEvent command route */
			move_route_index			= 0x2B,
			/** Boolean - Repeating move route has been completed at least once */
			move_route_repeated			= 0x2C,
			/** bool */
			sprite_transparent			= 0x2E,
			/** Boolean - Overlap? */
			unknown_2f_overlap			= 0x2F,
			/** ? */
			anim_paused					= 0x30,
			/** ? */
			unknown_33					= 0x33,
			/** ? */
			stop_count					= 0x34,
			/** ? */
			anim_count					= 0x35,
			/** ? */
			unknown_36					= 0x36,
			/** ? */
			unknown_3d					= 0x3D,
			/** ? */
			unknown_3e					= 0x3E,
			/** ? */
			unknown_3f					= 0x3F,
			/** ? */
			unknown_47					= 0x47,
			/** Flag */
			flying						= 0x48,
			/** ? */
			sprite_name					= 0x49,
			/** ? */
			sprite_id					= 0x4A,
			/** ? */
			unknown_4b					= 0x4B,
			/** int */
			flash_red					= 0x51,
			/** int */
			flash_green					= 0x52,
			/** int */
			flash_blue					= 0x53,
			/** double */
			flash_current_level			= 0x54,
			/** int */
			flash_time_left				= 0x55,
			/**  */
			unknown_65					= 0x65,
			/** Index of custom move route */
			original_move_route_index	= 0x66,
			/** Vehicle in use */
			vehicle						= 0x67,
			/**  */
			unknown_68					= 0x68,
			/**  */
			unknown_69					= 0x69,
			/**  */
			unknown_6c					= 0x6C,
			/**  */
			pan_state					= 0x6F,
			/** int */
			pan_current_x				= 0x70,
			/** ? */
			pan_current_y				= 0x71,
			/** ? */
			pan_finish_x				= 0x72,
			/** ? */
			pan_finish_y				= 0x73,
			/** ? */
			unknown_79					= 0x79,
			/** int: sum of terrain.encounter_rate for each step */
			encounter_steps				= 0x7C,
			/** ? */
			unknown_7d					= 0x7D,
			/** Mirrors save_count of current map. On mismatch events are not continued after load. */
			map_save_count				= 0x83,
			/** ? */
			database_save_count			= 0x84 
		};
	};
	struct ChunkSaveVehicleLocation {
		enum Index {
			/** Flag */
			active						= 0x01,
			/** ? */
			map_id						= 0x0B,
			/** ? */
			position_x					= 0x0C,
			/** ? */
			position_y					= 0x0D,
			/** Facing direction before lock */
			prelock_direction			= 0x15,
			/** Current facing direction */
			direction					= 0x16,
			/** ? */
			anim_frame					= 0x17,
			/** always 0 */
			transparency				= 0x18,
			/** From 0 to 255 - Remaining distance of the current move */
			remaining_step				= 0x1F,
			/** ? */
			move_frequency				= 0x20,
			/** ? */
			layer						= 0x21,
			/** Flag */
			overlap_forbidden			= 0x22,
			/**  */
			animation_type				= 0x23,
			/** facing locked */
			lock_facing					= 0x24,
			/**  */
			move_speed					= 0x25,
			/** chunks: RPG::MoveRoute */
			move_route					= 0x29,
			/** Use custom move route */
			move_route_overwrite		= 0x2A,
			/** Index of MoveEvent command route */
			move_route_index			= 0x2B,
			/** Boolean - Repeating move route has been completed at least once */
			move_route_repeated			= 0x2C,
			/** ? */
			anim_paused					= 0x30,
			/** ? */
			unknown_33					= 0x33,
			/** ? */
			stop_count					= 0x34,
			/** ? */
			anim_count					= 0x35,
			/** ? */
			unknown_36					= 0x36,
			/** ? */
			unknown_3d					= 0x3D,
			/** ? */
			unknown_3e					= 0x3E,
			/** ? */
			unknown_3f					= 0x3F,
			/** ? */
			unknown_47					= 0x47,
			/** Flag */
			flying						= 0x48,
			/** ? */
			sprite_name					= 0x49,
			/** ? */
			sprite_id					= 0x4A,
			/** ? */
			unknown_4b					= 0x4B,
			/** int */
			flash_red					= 0x51,
			/** int */
			flash_green					= 0x52,
			/** int */
			flash_blue					= 0x53,
			/** double */
			flash_current_level			= 0x54,
			/** int */
			flash_time_left				= 0x55,
			/** ? */
			unknown_65					= 0x65,
			/** Index of custom move route */
			original_move_route_index	= 0x66,
			/** ? */
			unknown_6a					= 0x6A,
			/** string */
			sprite2_name				= 0x6F,
			/** int */
			sprite2_id					= 0x70 
		};
	};
	struct ChunkSaveActor {
		enum Index {
			/** string; ''\x01'' for default!?!? */
			name			= 0x01,
			/** string; ''\x01'' for default!?!? */
			title			= 0x02,
			/** string */
			sprite_name		= 0x0B,
			/** int */
			sprite_id		= 0x0C,
			/** int */
			sprite_flags	= 0x0D,
			/** string */
			face_name		= 0x15,
			/** int */
			face_id			= 0x16,
			/** int */
			level			= 0x1F,
			/** int */
			exp				= 0x20,
			/** ? */
			hp_mod			= 0x21,
			/** ? */
			sp_mod			= 0x22,
			/** int */
			attack_mod		= 0x29,
			/** int */
			defense_mod		= 0x2A,
			/** int */
			spirit_mod		= 0x2B,
			/** int */
			agility_mod		= 0x2C,
			/** ? */
			skills_size		= 0x33,
			/** short[] */
			skills			= 0x34,
			/** short[5] */
			equipped		= 0x3D,
			/** int */
			current_hp		= 0x47,
			/** int */
			current_sp		= 0x48,
			/** array of (uncompressed) int32 */
			battle_commands	= 0x50,
			/** ? */
			status_size		= 0x51,
			/** array of short */
			status			= 0x52,
			/** bool */
			changed_class	= 0x53,
			/** int class-id */
			class_id		= 0x5A,
			/** RPG2003 Battle row (-1 Back; 1 Front) */
			row				= 0x5B,
			/** bool */
			two_weapon		= 0x5C,
			/** bool */
			lock_equipment	= 0x5D,
			/** bool */
			auto_battle		= 0x5E,
			/** bool */
			mighty_guard	= 0x5F,
			/** ? */
			unknown_60		= 0x60 
		};
	};
	struct ChunkSaveInventory {
		enum Index {
			/** ? */
			party_size			= 0x01,
			/** ? */
			party				= 0x02,
			/** ? */
			items_size			= 0x0B,
			/** short[]: item list */
			item_ids			= 0x0C,
			/** ? */
			item_counts			= 0x0D,
			/** ? */
			item_usage			= 0x0E,
			/** int */
			gold				= 0x15,
			/** int */
			timer1_secs			= 0x17,
			/** bool */
			timer1_active		= 0x18,
			/** bool */
			timer1_visible		= 0x19,
			/** bool */
			timer1_battle		= 0x1A,
			/** int */
			timer2_secs			= 0x1B,
			/** bool */
			timer2_active		= 0x1C,
			/** bool */
			timer2_visible		= 0x1D,
			/** bool */
			timer2_battle		= 0x1E,
			/** ? */
			battles				= 0x20,
			/** ? */
			defeats				= 0x21,
			/** ? */
			escapes				= 0x22,
			/** ? */
			victories			= 0x23,
			/** Number of turns passed in the latest battle fought? RPG2000: 'turn' passes after every character (enemies and heroes both) performed an action each. RPG2003: every time a hero or enemy performs an action that is considered a 'turn'. */
			unknown_29_turns	= 0x29,
			/** ? */
			steps				= 0x2A 
		};
	};
	struct ChunkSaveTarget {
		enum Index {
			/** int */
			map_id		= 0x01,
			/** int */
			map_x		= 0x02,
			/** int */
			map_y		= 0x03,
			/** bool */
			switch_on	= 0x04,
			/** int */
			switch_id	= 0x05 
		};
	};
	struct ChunkSaveEventCommands {
		enum Index {
			/** int */
			commands_size	= 0x01,
			/** event command list */
			commands		= 0x02,
			/** int */
			current_command	= 0x0B,
			/** 0 if it's common event or in other map */
			event_id		= 0x0C,
			/** Event was triggered by the Action Key */
			actioned		= 0x0D,
			/** byte */
			unknown_15		= 0x15,
			/** byte */
			unknown_16		= 0x16 
		};
	};
	struct ChunkSaveEventData {
		enum Index {
			/** array */
			commands	= 0x01,
			/**  */
			unknown_16	= 0x16,
			/**  */
			unknown_17	= 0x17,
			/** int */
			time_left	= 0x1F,
			/**  */
			unknown_20	= 0x20 
		};
	};
	struct ChunkSaveMapEvent {
		enum Index {
			/** Flag */
			active						= 0x01,
			/** ? */
			map_id						= 0x0B,
			/** ? */
			position_x					= 0x0C,
			/** ? */
			position_y					= 0x0D,
			/** Facing direction before lock */
			prelock_direction			= 0x15,
			/** Current facing direction */
			direction					= 0x16,
			/** ? */
			anim_frame					= 0x17,
			/** 0 or 3 - Transparency level of the current event page */
			transparency				= 0x18,
			/** From 0 to 255 - Remaining distance of the current move */
			remaining_step				= 0x1F,
			/** ? */
			move_frequency				= 0x20,
			/** ? */
			layer						= 0x21,
			/** Flag */
			overlap_forbidden			= 0x22,
			/**  */
			animation_type				= 0x23,
			/** facing locked */
			lock_facing					= 0x24,
			/**  */
			move_speed					= 0x25,
			/** chunks: RPG::MoveRoute */
			move_route					= 0x29,
			/** Use custom move route */
			move_route_overwrite		= 0x2A,
			/** Index of MoveEvent command route */
			move_route_index			= 0x2B,
			/** Boolean - Repeating move route has been completed at least once */
			move_route_repeated			= 0x2C,
			/** Boolean - Overlap? */
			unknown_2f_overlap			= 0x2F,
			/** ? */
			anim_paused					= 0x30,
			/** ? */
			unknown_33					= 0x33,
			/** ? */
			stop_count					= 0x34,
			/** ? */
			anim_count					= 0x35,
			/** ? */
			unknown_36					= 0x36,
			/** ? */
			unknown_3d					= 0x3D,
			/** ? */
			unknown_3e					= 0x3E,
			/** ? */
			unknown_3f					= 0x3F,
			/** ? */
			unknown_47					= 0x47,
			/** Flag */
			flying						= 0x48,
			/** ? */
			sprite_name					= 0x49,
			/** ? */
			sprite_id					= 0x4A,
			/** ? */
			unknown_4b					= 0x4B,
			/** int */
			flash_red					= 0x51,
			/** int */
			flash_green					= 0x52,
			/** int */
			flash_blue					= 0x53,
			/** double */
			flash_current_level			= 0x54,
			/** int */
			flash_time_left				= 0x55,
			/** ? */
			running						= 0x65,
			/** Index of custom move route */
			original_move_route_index	= 0x66,
			/** If true, this event will run after the current running event stops running */
			pending						= 0x67,
			/** chunks */
			event_data					= 0x6C 
		};
	};
	struct ChunkSaveMapInfo {
		enum Index {
			/** int */
			position_x			= 0x01,
			/** int */
			position_y			= 0x02,
			/** int */
			encounter_rate		= 0x03,
			/** int */
			chipset_id			= 0x05,
			/** ? array */
			events				= 0x0B,
			/** ? [00 01 02 ... 8E 8F] */
			lower_tiles			= 0x15,
			/**  */
			upper_tiles			= 0x16,
			/** string */
			parallax_name		= 0x20,
			/** bool */
			parallax_horz		= 0x21,
			/** bool */
			parallax_vert		= 0x22,
			/** bool */
			parallax_horz_auto	= 0x23,
			/** int */
			parallax_horz_speed	= 0x24,
			/** bool */
			parallax_vert_auto	= 0x25,
			/** int */
			parallax_vert_speed	= 0x26 
		};
	};
	struct ChunkSaveEvents {
		enum Index {
			/** array */
			events		= 0x01,
			/** int */
			events_size	= 0x04,
			/**  */
			unknown_0b	= 0x0B,
			/**  */
			unknown_0d	= 0x0D,
			/**  */
			unknown_15	= 0x15,
			/**  */
			unknown_16	= 0x16,
			/**  */
			unknown_17	= 0x17,
			/**  */
			unknown_18	= 0x18,
			/**  */
			unknown_19	= 0x19,
			/**  */
			unknown_1a	= 0x1A,
			/**  */
			unknown_1b	= 0x1B,
			/** int/bool */
			unknown_1c	= 0x1C,
			/**  */
			unknown_1f	= 0x1F,
			/** int/bool */
			unknown_20	= 0x20,
			/**  */
			unknown_23	= 0x23,
			/** int/bool */
			unknown_24	= 0x24,
			/** int/bool */
			unknown_25	= 0x25,
			/**  */
			unknown_26	= 0x26,
			/**  */
			unknown_29	= 0x29,
			/**  */
			unknown_2a	= 0x2A 
		};
	};
	struct ChunkSaveCommonEvent {
		enum Index {
			/** chunks */
			event_data	= 0x01 
		};
	};
	struct ChunkSave {
		enum Index {
			/** RPG::SaveTitle */
			title				= 0x64,
			/** RPG::SaveSystem */
			system				= 0x65,
			/** RPG::SaveScreen */
			screen				= 0x66,
			/** array of RPG::SavePicture */
			pictures			= 0x67,
			/** RPG::SavePartyLocation */
			party_location		= 0x68,
			/** RPG::SaveVehicleLocation */
			boat_location		= 0x69,
			/** RPG::SaveVehicleLocation */
			ship_location		= 0x6A,
			/** RPG::SaveVehicleLocation */
			airship_location	= 0x6B,
			/** array of RPG::SaveActor */
			actors				= 0x6C,
			/** RPG::SaveInventory */
			inventory			= 0x6D,
			/** array of RPG::SaveTarget */
			targets				= 0x6E,
			/** RPG::SaveMapInfo */
			map_info			= 0x6F,
			/** ? chunks? */
			unknown_70			= 0x70,
			/** RPG::SaveEvents */
			events				= 0x71,
			/** array of RPG::SaveCommonEvent */
			common_events		= 0x72 
		};
	};
}

#endif
