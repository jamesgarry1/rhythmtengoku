asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
thumb_func_start func_08047ff4 \n\
/* 08047ff4 */ PUSH {R4, LR} \n\
/* 08047ff6 */ LDR R4, =s_studio_bgm_seqData \n\
/* 08047ff8 */ MOVS R0, 0x30 @ Set R0 to 0x30 \n\
/* 08047ffa */ BL ticks_to_frames \n\
/* 08047ffe */ ADDS R1, R0, 0x0 @ Set R1 to R0 + 0x0 \n\
/* 08048000 */ LSLS R1, R1, 0x10 \n\
/* 08048002 */ LSRS R1, R1, 0x10 \n\
/* 08048004 */ ADDS R0, R4, 0x0 @ Set R0 to R4 + 0x0 \n\
/* 08048006 */ BL fade_out_sound \n\
/* 0804800a */ POP {R4} \n\
/* 0804800c */ POP {R0} \n\
/* 0804800e */ BX R0 \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");
