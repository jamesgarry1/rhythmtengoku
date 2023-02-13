.section .rodata
.syntax unified

.include "include/gba.inc"
.include "include/bs_riq.inc"
.include "include/bs/drum_studio.inc"

load_drum_studio_labels


/* Script Data - Drum Lesson (Long 6) */


@ Dialogue
glabel D_08064874
.ascii "\n"
.ascii "�܂��́A�����炢�ł��B\n"
.asciz "����΂��ăl�I"
.balign 4, 0


@ Pattern
glabel D_0806489c
    spawn_cue CUE_SNARE_L
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    rest 6
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    rest 6
    spawn_cue CUE_TOM
    rest 6
    rest 6
    spawn_cue CUE_SNARE_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    return


@ Pattern Start
glabel D_08064ad0
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    rest 3
    return


@ Dialogue
glabel D_08064b30
.ascii "\n"
.ascii "�㔼�������Ă݂܂��B\n"
.ascii "��`�������āA\n"
.asciz "�����ƃ}�l���ăl�I\n"
.balign 4, 0


@ Pattern
glabel D_08064b6c
    spawn_cue CUE_SNARE_L
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    rest 6
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    rest 6
    rest 6
    spawn_cue CUE_TOM
    rest 6
    rest 6
    spawn_cue CUE_SNARE_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    return


@ Dialogue
glabel D_08064d70
.ascii "\n"
.ascii "�V���o���������˂�\n"
.ascii "�n�f�ɂ��Ă݂悤�I\n"
.asciz "�ł��邩�ȁH"
.balign 4, 0


@ Pattern
glabel D_08064da4
    spawn_cue CUE_SNARE_L
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    rest 6
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 6
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 6
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 6
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 6
    rest 6
    rest 6
    spawn_cue CUE_TOM
    rest 6
    rest 6
    spawn_cue CUE_SNARE_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    return


@ Dialogue
glabel D_08064fd8
.ascii "\n"
.ascii "�^��������āA������\n"
.ascii "�n�f�ɂ����Ⴈ���I\n"
.asciz "�C�P�C�P�`�I"
.balign 4, 0


@ Pattern
glabel D_08065010
    spawn_cue CUE_SNARE_L
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    rest 6
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 6
    rest 6
    spawn_cue CUE_TOM
    rest 6
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 6
    rest 6
    spawn_cue CUE_TOM
    rest 6
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 6
    rest 6
    spawn_cue CUE_TOM
    rest 6
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 6
    rest 6
    rest 6
    spawn_cue CUE_TOM
    rest 6
    rest 6
    spawn_cue CUE_SNARE_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    return


@ Dialogue
glabel D_08065268
.ascii "\n"
.ascii "���������ꂽ�^����\n"
.ascii "���[���ɂ����Ă݂悤�I\n"
.asciz "�V�u�����邩���I�I"
.balign 4, 0


@ Pattern
glabel D_080652a8
    spawn_cue CUE_SNARE_L
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    rest 6
    rest 6
    rest 6
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 6
    rest 6
    spawn_cue CUE_ROLL
    rest 6
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 6
    rest 6
    spawn_cue CUE_ROLL
    rest 6
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 6
    rest 6
    spawn_cue CUE_ROLL
    rest 6
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 6
    rest 6
    rest 6
    spawn_cue CUE_TOM
    rest 6
    rest 6
    spawn_cue CUE_SNARE_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    return


@ Dialogue
glabel D_08065500
.ascii "\n"
.ascii "����́A\n"
.ascii "�P�O�̃��b�X����\n"
.asciz "���p���Ă݂܂��B"
.balign 4, 0


@ Dialogue
glabel D_08065530
.ascii "\n"
.ascii "�P�O�̃��b�X����\n"
.ascii "�N���A���Ă���A\n"
.asciz "���킵�ăl�I"
.balign 4, 0


@ Dialogue
glabel D_08065564
.ascii "\n"
.asciz "�ł́A�͂��߂܁[���I"
.balign 4, 0

.end