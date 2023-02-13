
/* ------------------------ BeatScript Labels: Toss Boys ------------------------ */


@ Load Data
.macro load_toss_boys_labels
    @ Game Events
    .set EVENT_00,      0x00
    .set EVENT_01,      0x01
    .set EVENT_02,      0x02
    .set EVENT_03,      0x03
    .set EVENT_04,      0x04
    .set EVENT_05,      0x05
    .set EVENT_06,      0x06
    .set EVENT_07,      0x07
    .set EVENT_08,      0x08
    .set STUB_EVENT,    0x09

    @ Cues
    .set CUE_TOSS_R,    0x00
    .set CUE_TOSS_B,    0x01
    .set CUE_TOSS_Y,    0x02
    .set CUE_CATCH_R,   0x04
    .set CUE_CATCH_B,   0x05
    .set CUE_CATCH_Y,   0x06
    .set CUE_POP_R,     0x08
    .set CUE_POP_B,     0x09
    .set CUE_POP_Y,     0x0A

    @ Characters
    .set AKA_CHAN,  0
    .set AO_KUN,    1
    .set KII_YAN,   2

    @ Actions
    .set ACTION_TOSS,       0
    .set ACTION_SUPER_TOSS, 1
    .set ACTION_CATCH,      2
    .set ACTION_POP,        3
.endm


@ Load Game: Toss Boys
.macro load_toss_boys
    load_toss_boys_labels
    load_game TOSS_BOYS, 0
.endm

@ Load Game: Toss Boys (Remix 5)
.macro load_toss_boys_remix5
    load_toss_boys_labels
    load_game TOSS_BOYS, 1
.endm

@ Load Game: Toss Boys 2
.macro load_toss_boys_2
    load_toss_boys_labels
    load_game TOSS_BOYS, 2
.endm


/* ---------------- Game Engine Events ---------------- */


@ Run Game Event
.macro toss_boys_event event, args
    game_event TOSS_BOYS, \event, \args
.endm


@ [Event 0x00] ?
.macro tb_event00 args
    toss_boys_event 0x00, \args
.endm

@ [Event 0x01] ?
.macro tb_event01 args
    toss_boys_event 0x01, \args
.endm

@ [Event 0x02] ?
.macro tb_event02 args
    toss_boys_event 0x02, \args
.endm

@ [Event 0x03] ?
.macro tb_event03 args
    toss_boys_event 0x03, \args
.endm

@ [Event 0x04] ?
.macro tb_event04 args
    toss_boys_event 0x04, \args
.endm

@ [Event 0x05] ?
.macro tb_event05 args
    toss_boys_event 0x05, \args
.endm

@ [Event 0x06] ?
.macro tb_event06 args
    toss_boys_event 0x06, \args
.endm

@ [Event 0x07] ?
.macro tb_event07 args
    toss_boys_event 0x07, \args
.endm

@ [Event 0x08] ?
.macro tb_event08 args
    toss_boys_event 0x08, \args
.endm

@ [Event 0x09] Nothing
.macro tb_stub_event noArgs
    toss_boys_event 0x09, \noArgs
.endm