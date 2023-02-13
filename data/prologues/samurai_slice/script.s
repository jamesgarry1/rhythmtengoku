.section .rodata
.syntax unified

.include "include/gba.inc"
.include "include/bs_riq.inc"


@ Prologue (Samurai Slice) - Script
glabel D_089eb3f8
    set_game_fade_in_time 8
    load_game D_089eb3d8, 0
    run stop_all_soundplayers, 0
    play_sfx s_jingle_iai_seqData
    rest 24
    rest 24
    rest 24
    play_sfx_sp s_f_iai_title_seqData, 0xC0, 0
    run scene_hide_bg_layer, 1
    run scene_show_bg_layer, 2
    rest 24
    run func_080460d4, 1
    rest 6
    run func_080460d4, 2
    rest 6
    run func_080460d4, 3
    rest 6
    run func_080460d4, 4
    rest 6
    run func_080460d4, 5
    rest 24
    rest 24
    run func_08006d80, 0
    rest 24
    set_game_fade_in_time 16
    return

.end