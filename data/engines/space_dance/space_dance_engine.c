#include "engines/space_dance.h"


  /* SPACE DANCE - GAME ENGINE DATA */


extern const struct Animation anim_space_dancer_right[];
extern const struct Animation anim_cosmic_dancer_right[];
extern const struct Animation anim_space_dancer_punch[];
extern const struct Animation anim_cosmic_dancer_punch[];
extern const struct Animation anim_space_dancer_down[];
extern const struct Animation anim_cosmic_dancer_down[];
extern const struct Animation anim_space_gramps_beat[];
extern const struct Animation anim_cosmic_girl_beat[];
extern const struct Animation anim_space_gramps_instruct_down[];
extern const struct Animation anim_cosmic_girl_instruct_down[];
extern const struct Animation anim_space_gramps_instruct_punch[];
extern const struct Animation anim_cosmic_girl_instruct_punch[];
extern const struct Animation anim_space_gramps_instruct_right[];
extern const struct Animation anim_cosmic_girl_instruct_right[];
extern const struct Animation anim_space_dancer_beat[];
extern const struct Animation anim_cosmic_dancer_beat[];
extern const struct Animation anim_space_dancer_hurt[];
extern const struct Animation anim_cosmic_dancer_hurt[];
extern const struct Animation anim_space_dancer_right_cue[];
extern const struct Animation anim_cosmic_dancer_right_cue[];
extern const struct Animation anim_space_dancer_down_cue[];
extern const struct Animation anim_cosmic_dancer_down_cue[];
extern const struct Animation anim_space_dancer_punch_cue1[];
extern const struct Animation anim_cosmic_dancer_punch_cue1[];
extern const struct Animation anim_space_dancer_punch_cue2[];
extern const struct Animation anim_cosmic_dancer_punch_cue2[];
extern const struct Animation anim_space_dancer_hurt_effect[];
extern const struct Animation anim_cosmic_dancer_hurt_effect[];
extern const struct Animation anim_space_dance_blank1[];
extern const struct Animation anim_cosmic_dance_blank1[];
extern const struct Animation anim_space_dance_tutorial_icons[];
extern const struct Animation anim_cosmic_dance_tutorial_icons[];
extern const struct Animation anim_space_dance_sparkle[];
extern const struct Animation anim_cosmic_dance_sparkle[];
extern const struct Animation anim_space_dance_blank2[];
extern const struct Animation anim_cosmic_dance_blank2[];
extern const struct Animation anim_space_gramps_right[];
extern const struct Animation anim_cosmic_girl_right[];
extern const struct Animation anim_space_gramps_right_cue[];
extern const struct Animation anim_cosmic_girl_right_cue[];
extern const struct Animation anim_space_gramps_down[];
extern const struct Animation anim_cosmic_girl_down[];
extern const struct Animation anim_space_gramps_down_cue[];
extern const struct Animation anim_cosmic_girl_down_cue[];
extern const struct Animation anim_space_gramps_punch[];
extern const struct Animation anim_cosmic_girl_punch[];
extern const struct Animation anim_space_gramps_punch_cue1[];
extern const struct Animation anim_cosmic_girl_punch_cue1[];
extern const struct Animation anim_space_gramps_punch_cue2[];
extern const struct Animation anim_cosmic_girl_punch_cue2[];
extern const struct Animation anim_space_gramps_speak[];
extern const struct Animation anim_cosmic_girl_placeholder7[];
extern const struct Animation anim_space_gramps_blink[];
extern const struct Animation anim_cosmic_girl_placeholder8[];
extern const struct Animation anim_space_gramps_frown[];
extern const struct Animation anim_cosmic_girl_frown[];
extern const struct Animation anim_space_gramps_raise_brow[];
extern const struct Animation anim_cosmic_girl_glare[];

extern const struct CompressedGraphics D_08ce2cb0;
extern const struct CompressedGraphics D_08ce3ccc;
extern const struct CompressedGraphics D_08ce296c;
extern const struct CompressedGraphics D_08c38fcc;
extern const struct CompressedGraphics D_08c39888;
extern const struct CompressedGraphics D_08c3a0a0;
extern const struct CompressedGraphics D_08c38f60;
extern const struct CompressedGraphics D_08ce3978;
extern const struct CompressedGraphics D_08ce426c;
extern const struct CompressedGraphics D_08ce296c;
extern const Palette cosmic_dance_bg_pal[];
extern const Palette cosmic_dance_obj_pal[];
extern const Palette space_dance_bg_pal[];
extern const Palette space_dance_obj_pal[];
extern const Palette space_dance_remix3_bg_pal[];

extern const struct SequenceData s_f_space_dancer_swing_seqData;
extern const struct SequenceData s_f_space_dancer_pa_seqData;
extern const struct SequenceData s_f_space_dancer_sit_seqData;
extern const struct SequenceData s_f_space_hit_seqData;
extern const struct SequenceData s_tebyoushi_pati_seqData;
extern const struct SequenceData s_space_miss_seqData;


  //  //  //  GRAPHICS DATA  //  //  //


// [D_089e6ba4] All Animations
const struct Animation *const space_dance_anim[][3] = {
    /* 0x00 */ { anim_space_dancer_right, anim_cosmic_dancer_right, anim_space_dancer_right },
    /* 0x01 */ { anim_space_dancer_punch, anim_cosmic_dancer_punch, anim_space_dancer_punch },
    /* 0x02 */ { anim_space_dancer_down, anim_cosmic_dancer_down, anim_space_dancer_down },
    /* 0x03 */ { anim_space_gramps_beat, anim_cosmic_girl_beat, anim_space_gramps_beat },
    /* 0x04 */ { anim_space_gramps_instruct_down, anim_cosmic_girl_instruct_down, anim_space_gramps_instruct_down },
    /* 0x05 */ { anim_space_gramps_instruct_punch, anim_cosmic_girl_instruct_punch, anim_space_gramps_instruct_punch },
    /* 0x06 */ { anim_space_gramps_instruct_right, anim_cosmic_girl_instruct_right, anim_space_gramps_instruct_right },
    /* 0x07 */ { anim_space_dancer_beat, anim_cosmic_dancer_beat, anim_space_dancer_beat },
    /* 0x08 */ { anim_space_dancer_hurt, anim_cosmic_dancer_hurt, anim_space_dancer_hurt },
    /* 0x09 */ { anim_space_dancer_right_cue, anim_cosmic_dancer_right_cue, anim_space_dancer_right_cue },
    /* 0x0A */ { anim_space_dancer_down_cue, anim_cosmic_dancer_down_cue, anim_space_dancer_down_cue },
    /* 0x0B */ { anim_space_dancer_punch_cue1, anim_cosmic_dancer_punch_cue1, anim_space_dancer_punch_cue1 },
    /* 0x0C */ { anim_space_dancer_punch_cue2, anim_cosmic_dancer_punch_cue2, anim_space_dancer_punch_cue2 },
    /* 0x0D */ { anim_space_dancer_hurt_effect, anim_cosmic_dancer_hurt_effect, anim_space_dancer_hurt_effect },
    /* 0x0E */ { anim_space_dance_blank1, anim_cosmic_dance_blank1, anim_space_dance_blank1 },
    /* 0x0F */ { anim_space_dance_tutorial_icons, anim_cosmic_dance_tutorial_icons, anim_space_dance_tutorial_icons },
    /* 0x10 */ { anim_space_dance_sparkle, anim_cosmic_dance_sparkle, anim_space_dance_sparkle },
    /* 0x11 */ { anim_space_dance_blank2, anim_cosmic_dance_blank2, anim_space_dance_blank2 },
    /* 0x12 */ { anim_space_gramps_right, anim_cosmic_girl_right, anim_space_gramps_right },
    /* 0x13 */ { anim_space_gramps_right_cue, anim_cosmic_girl_right_cue, anim_space_gramps_right_cue },
    /* 0x14 */ { anim_space_gramps_down, anim_cosmic_girl_down, anim_space_gramps_down },
    /* 0x15 */ { anim_space_gramps_down_cue, anim_cosmic_girl_down_cue, anim_space_gramps_down_cue },
    /* 0x16 */ { anim_space_gramps_punch, anim_cosmic_girl_punch, anim_space_gramps_punch },
    /* 0x17 */ { anim_space_gramps_punch_cue1, anim_cosmic_girl_punch_cue1, anim_space_gramps_punch_cue1 },
    /* 0x18 */ { anim_space_gramps_punch_cue2, anim_cosmic_girl_punch_cue2, anim_space_gramps_punch_cue2 },
    /* 0x19 */ { anim_space_gramps_speak, anim_cosmic_girl_placeholder7, anim_space_gramps_speak },
    /* 0x1A */ { anim_space_gramps_blink, anim_cosmic_girl_placeholder8, anim_space_gramps_blink },
    /* 0x1B */ { anim_space_gramps_frown, anim_cosmic_girl_frown, anim_space_gramps_frown },
    /* 0x1C */ { anim_space_gramps_raise_brow, anim_cosmic_girl_glare, anim_space_gramps_raise_brow }
};

// [D_089e6d00] Animation Table
const struct Animation *const *const space_dance_anim_table[] = {
    /* 0x00 */ space_dance_anim[0],
    /* 0x01 */ space_dance_anim[1],
    /* 0x02 */ space_dance_anim[2],
    /* 0x03 */ space_dance_anim[3],
    /* 0x04 */ space_dance_anim[4],
    /* 0x05 */ space_dance_anim[5],
    /* 0x06 */ space_dance_anim[6],
    /* 0x07 */ space_dance_anim[7],
    /* 0x08 */ space_dance_anim[8],
    /* 0x09 */ space_dance_anim[9],
    /* 0x0A */ space_dance_anim[10],
    /* 0x0B */ space_dance_anim[11],
    /* 0x0C */ space_dance_anim[12],
    /* 0x0D */ space_dance_anim[13],
    /* 0x0E */ space_dance_anim[14],
    /* 0x0F */ space_dance_anim[15],
    /* 0x10 */ space_dance_anim[16],
    /* 0x11 */ space_dance_anim[17],
    /* 0x12 */ space_dance_anim[18],
    /* 0x13 */ space_dance_anim[19],
    /* 0x14 */ space_dance_anim[20],
    /* 0x15 */ space_dance_anim[21],
    /* 0x16 */ space_dance_anim[22],
    /* 0x17 */ space_dance_anim[23],
    /* 0x18 */ space_dance_anim[24],
    /* 0x19 */ space_dance_anim[25],
    /* 0x1A */ space_dance_anim[26],
    /* 0x1B */ space_dance_anim[27],
    /* 0x1C */ space_dance_anim[28]
};

// [D_089e6d74] Buffered Textures List
const struct CompressedGraphics *const space_dance_buffered_textures[] = {
    END_OF_BUFFERED_TEXTURES_LIST
};

// [D_089e6d78] Graphics Table (Space Dance)
const struct GraphicsTable space_dance_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08ce2cb0,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08ce3ccc,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08ce296c,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ space_dance_bg_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ space_dance_obj_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ D_089ccbc8[1],
        /* Dest. */ OBJ_PALETTE_BUFFER(12.5),
        /* Size  */ 0x8
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089e6dcc] Graphics Table (Cosmic Dance)
const struct GraphicsTable cosmic_dance_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08c38fcc,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08c39888,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08c3a0a0,
        /* Dest. */ BG_MAP_BASE(0xF000),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08c38f60,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ cosmic_dance_bg_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ cosmic_dance_obj_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ D_089ccbc8[1],
        /* Dest. */ OBJ_PALETTE_BUFFER(12.5),
        /* Size  */ 0x8
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089e6e2c] Graphics Table (Remix 3)
const struct GraphicsTable space_dance_remix3_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08ce3978,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08ce426c,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08ce296c,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ space_dance_remix3_bg_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ space_dance_obj_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ D_089ccbc8[1],
        /* Dest. */ OBJ_PALETTE_BUFFER(12.5),
        /* Size  */ 0x8
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089e6e80] Graphics Table Index
const struct GraphicsTable *const space_dance_gfx_tables[] = {
    /* 0x00 */ space_dance_gfx_table,
    /* 0x01 */ cosmic_dance_gfx_table,
    /* 0x02 */ space_dance_remix3_gfx_table
};


  //  //  //  CUE DATA  //  //  //


// [D_089e6e8c] Animation IDs for Space Dancer Actions
const u8 space_dancer_anim_map[] = {
    /* 0x00 */ SPACE_DANCE_ANIM_DANCER_RIGHT,
    /* 0x01 */ SPACE_DANCE_ANIM_DANCER_PUNCH,
    /* 0x02 */ SPACE_DANCE_ANIM_DANCER_DOWN,
    /* 0x03 */ SPACE_DANCE_ANIM_DANCER_RIGHT_CUE,
    /* 0x04 */ SPACE_DANCE_ANIM_DANCER_PUNCH_CUE1,
    /* 0x05 */ SPACE_DANCE_ANIM_DANCER_PUNCH_CUE2,
    /* 0x06 */ SPACE_DANCE_ANIM_DANCER_DOWN_CUE,
};

// [D_089e6e93] Animation IDs for Space Gramps Actions
const u8 space_gramps_anim_map[] = {
    /* 0x00 */ SPACE_DANCE_ANIM_GRAMPS_RIGHT,
    /* 0x01 */ SPACE_DANCE_ANIM_GRAMPS_PUNCH,
    /* 0x02 */ SPACE_DANCE_ANIM_GRAMPS_DOWN,
    /* 0x03 */ SPACE_DANCE_ANIM_GRAMPS_RIGHT_CUE,
    /* 0x04 */ SPACE_DANCE_ANIM_GRAMPS_PUNCH_CUE1,
    /* 0x05 */ SPACE_DANCE_ANIM_GRAMPS_PUNCH_CUE2,
    /* 0x06 */ SPACE_DANCE_ANIM_GRAMPS_DOWN_CUE,
    /* 0x07 */ SPACE_DANCE_ANIM_GRAMPS_SPEAK,
    /* 0x08 */ SPACE_DANCE_ANIM_GRAMPS_BLINK,
};

// [D_089e6e9c] Sound Effects for Dancer Actions
const struct SequenceData *const space_dancer_sounds[] = {
    /* 0x00 */ NULL,
    /* 0x01 */ NULL,
    /* 0x02 */ NULL,
    /* 0x03 */ &s_f_space_dancer_swing_seqData,
    /* 0x04 */ &s_f_space_dancer_pa_seqData,
    /* 0x05 */ &s_f_space_dancer_pa_seqData,
    /* 0x06 */ &s_f_space_dancer_sit_seqData
};

// [D_089e6eb8] Animation IDs for Inputs
const u8 space_dance_cue_anim_map[] = {
    /* 0x00 */ SPACE_DANCE_ANIM_DANCER_RIGHT,
    /* 0x01 */ SPACE_DANCE_ANIM_DANCER_DOWN,
    /* 0x02 */ SPACE_DANCE_ANIM_DANCER_PUNCH
};

// [D_089e6ebc] ? (y values for a sprite)
const s16 D_089e6ebc[] = {
    /* 0x00 */ 67,
    /* 0x01 */ 96,
    /* 0x02 */ 67
};

// [D_089e6ec4] Cue 00 (Turn Right)
const struct CueDefinition space_dance_cue_turn_right = {
    /* Unknown Param.  */ 0,
    /* Input Buttons   */ PRESS_BUTTON(DPAD_RIGHT),
    /* Total Duration  */ 0x18,
    /* Hit Window      */ -0x03, 0x03,
    /* Barely Window   */ -0x05, 0x05,
    /* Tempo-Dependent */ FALSE,
    /* Force-Delete    */ FALSE,
    /* Size in Memory  */ 0x4,
    /* Func. Spawn     */ space_dance_cue_spawn,
    /* Spawn Parameter */ 0,
    /* Func. Update    */ space_dance_cue_update,
    /* Func. Despawn   */ space_dance_cue_despawn,
    /* Func. Hit       */ space_dance_cue_hit,
    /* Func. Barely    */ space_dance_cue_barely,
    /* Func. Miss      */ space_dance_cue_miss,
    /* SFX Spawn       */ NULL,
    /* SFX Hit         */ &s_f_space_hit_seqData,
    /* SFX Barely      */ &s_tebyoushi_pati_seqData,
    /* SFX Miss        */ &s_space_miss_seqData,
    /* Miss Condition  */ NULL
};

// [D_089e6f04] Cue 01 (Let's Sit Down)
const struct CueDefinition space_dance_cue_sit_down = {
    /* Unknown Param.  */ 0,
    /* Input Buttons   */ PRESS_BUTTON(DPAD_DOWN),
    /* Total Duration  */ 0x18,
    /* Hit Window      */ -0x03, 0x03,
    /* Barely Window   */ -0x05, 0x05,
    /* Tempo-Dependent */ FALSE,
    /* Force-Delete    */ FALSE,
    /* Size in Memory  */ 0x4,
    /* Func. Spawn     */ space_dance_cue_spawn,
    /* Spawn Parameter */ 1,
    /* Func. Update    */ space_dance_cue_update,
    /* Func. Despawn   */ space_dance_cue_despawn,
    /* Func. Hit       */ space_dance_cue_hit,
    /* Func. Barely    */ space_dance_cue_barely,
    /* Func. Miss      */ space_dance_cue_miss,
    /* SFX Spawn       */ NULL,
    /* SFX Hit         */ &s_f_space_hit_seqData,
    /* SFX Barely      */ &s_tebyoushi_pati_seqData,
    /* SFX Miss        */ &s_space_miss_seqData,
    /* Miss Condition  */ NULL
};

// [D_089e6f44] Cue 02 (Pa-Pa-Pa-Punch)
const struct CueDefinition space_dance_cue_punch = {
    /* Unknown Param.  */ 0,
    /* Input Buttons   */ PRESS_BUTTON(A_BUTTON),
    /* Total Duration  */ 0x0C,
    /* Hit Window      */ -0x03, 0x03,
    /* Barely Window   */ -0x05, 0x05,
    /* Tempo-Dependent */ FALSE,
    /* Force-Delete    */ FALSE,
    /* Size in Memory  */ 0x4,
    /* Func. Spawn     */ space_dance_cue_spawn,
    /* Spawn Parameter */ 2,
    /* Func. Update    */ space_dance_cue_update,
    /* Func. Despawn   */ space_dance_cue_despawn,
    /* Func. Hit       */ space_dance_cue_hit,
    /* Func. Barely    */ space_dance_cue_barely,
    /* Func. Miss      */ space_dance_cue_miss,
    /* SFX Spawn       */ NULL,
    /* SFX Hit         */ &s_f_space_hit_seqData,
    /* SFX Barely      */ &s_tebyoushi_pati_seqData,
    /* SFX Miss        */ &s_space_miss_seqData,
    /* Miss Condition  */ NULL
};

// [D_089e6f84] Cue 03 (Pa-Pa-Pa-Punch - Swing)
const struct CueDefinition space_dance_cue_punch_swing = {
    /* Unknown Param.  */ 0,
    /* Input Buttons   */ PRESS_BUTTON(A_BUTTON),
    /* Total Duration  */ 0x08,
    /* Hit Window      */ -0x03, 0x03,
    /* Barely Window   */ -0x05, 0x05,
    /* Tempo-Dependent */ FALSE,
    /* Force-Delete    */ FALSE,
    /* Size in Memory  */ 0x4,
    /* Func. Spawn     */ space_dance_cue_spawn,
    /* Spawn Parameter */ 2,
    /* Func. Update    */ space_dance_cue_update,
    /* Func. Despawn   */ space_dance_cue_despawn,
    /* Func. Hit       */ space_dance_cue_hit,
    /* Func. Barely    */ space_dance_cue_barely,
    /* Func. Miss      */ space_dance_cue_miss,
    /* SFX Spawn       */ NULL,
    /* SFX Hit         */ &s_f_space_hit_seqData,
    /* SFX Barely      */ &s_tebyoushi_pati_seqData,
    /* SFX Miss        */ &s_space_miss_seqData,
    /* Miss Condition  */ NULL
};

// [D_089e6fc4] Cue Definition Index
const struct CueDefinition *const space_dance_cue_index[] = {
    /* 0x00 */ &space_dance_cue_turn_right,
    /* 0x01 */ &space_dance_cue_sit_down,
    /* 0x02 */ &space_dance_cue_punch,
    /* 0x03 */ &space_dance_cue_punch_swing,
    /* 0x04 */ NULL,
    /* 0x05 */ NULL,
    /* 0x06 */ NULL,
    /* 0x07 */ NULL,
    /* 0x08 */ NULL,
    /* 0x09 */ NULL,
    /* 0x0A */ NULL,
    /* 0x0B */ NULL,
    END_OF_CUE_INDEX
};


  //  //  //  GAME ENGINE DATA  //  //  //


// [D_089e6ff8] Common Events
const EngineEvent space_dance_common_events[] = {
    /* BEAT_ANIMATION */ (EngineEvent) space_dance_common_beat_animation,
    /* DISPLAY_TEXT   */ (EngineEvent) space_dance_common_display_text,
    /* INIT_TUTORIAL  */ (EngineEvent) space_dance_common_init_tutorial,
    END_OF_COMMON_EVENT_LIST
};

// [D_089e7008] Engine Events
const EngineEvent space_dance_engine_events[] = {
    /* 0x00 */ (EngineEvent) func_0803d2c0,
    /* 0x01 */ (EngineEvent) func_0803d460,
    /* 0x02 */ (EngineEvent) func_0803d4bc,
    /* 0x03 */ (EngineEvent) func_0803d4e0,
    /* 0x04 */ (EngineEvent) func_0803d588,
    /* 0x05 */ (EngineEvent) func_0803d3fc,
    /* 0x06 */ (EngineEvent) func_0803d408,
    /* 0x07 */ (EngineEvent) func_0803d414,
    /* 0x08 */ (EngineEvent) space_dance_engine_event_stub
};

// [D_089e702c] Space Dance Game Engine
const struct GameEngine D_089e702c = {
    /* Size in Memory */ 0x38,
    /* Start Engine   */ space_dance_engine_start,
    /* Update Engine  */ space_dance_engine_update,
    /* Stop Engine    */ space_dance_engine_stop,
    /* Cue Index      */ space_dance_cue_index,
    /* Common Events  */ space_dance_common_events,
    /* Engine Events  */ space_dance_engine_events,
    /* Input Event    */ space_dance_input_event
};