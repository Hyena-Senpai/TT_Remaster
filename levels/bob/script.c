#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xA1, LEVEL_BOB, 0x01, 0xA2, WARP_NO_CHECKPOINT),
		WARP_NODE(0xA2, LEVEL_BOB, 0x01, 0xA1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 9985, -2702, -10759, 0, 0, 0, 0x00020000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -8500, 2006, -1703, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 10576, -4479, -10174, 0, 0, 0, 0x00170000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 8039, -4449, 1120, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -7386, -328, 12506, 0, 0, 0, 0x00170000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -134, 5028, 353, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 10608, -3750, -11880, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -678, 621, -555, 90, 45, 90, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5477, -146, -10621, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -3610, -3802, -11700, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5073, 1954, -1749, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 3513, -2448, 13651, 0, 90, 0, 0x00020000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 2155, 2155, 12969, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 11095, -2513, -13492, 0, 90, 0, 0x00020000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 8624, -4449, 6164, 0, 90, 0, 0x00020000, bhvCoinFormation),
		OBJECT(MODEL_EXCLAMATION_BOX, 13400, 0, 5000, 0, 0, 0, 0x00040000, bhvExclamationBox),
		MARIO_POS(0x01, 0, 11620, -5230, -370),
		OBJECT(MODEL_BREAKABLE_BOX, 5700, 1880, 13979, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 5700, 1710, 13979, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 5700, 1540, 13979, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 5700, 1370, 13979, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 5700, 1200, 13979, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -10864, 1200, -13568, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -10864, 900, -13268, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -10864, 600, -13068, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -10864, 300, -12868, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -10864, 0, -12568, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -10864, -300, -12368, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -10864, -600, -12168, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -8588, 1700, -13970, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, -10866, 1336, -13970, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, -9847, 1657, -13970, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BOBOMB_BUDDY, 8200, -4400, 4200, 0, 0, 0, 0x00000000, bhvBobombBuddy),
		OBJECT(MODEL_EXCLAMATION_BOX, 8800, -2200, -3000, 0, 0, 0, 0x00A10000, bhvFadingWarp),
		OBJECT(MODEL_EXCLAMATION_BOX, -3600, -3700, -9800, 0, 0, 0, 0x00A20000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 11620, -5230, -370, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_STAR, 10104, 2269, -3958, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_STAR, -3226, 2969, -13935, 0, 0, 0, 0x00010000, bhvStar),
		OBJECT(MODEL_STAR, 5130, -3574, -13510, 0, 0, 0, 0x00020000, bhvHiddenStar),
		OBJECT(MODEL_STAR, -11650, 2108, 1093, 0, 0, 0, 0x00030000, bhvStar),
		OBJECT(MODEL_STAR, 2975, 2778, 14159, 0, 0, 0, 0x00040000, bhvStar),
		OBJECT(MODEL_NONE, 10352, -4832, 1010, 0, 0, 0, 0x00050000, bhvHiddenRedCoinStar),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 11620, -5230, -370),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
