asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_0802be40 \n\
/* 0802be40 */ PUSH {R4, LR} \n\
/* 0802be42 */ ADDS R4, R1, 0x0 @ Set R4 to R1 + 0x0 \n\
/* 0802be44 */ MOVS R0, 0x0 @ Set R0 to 0x0 \n\
/* 0802be46 */ BL func_0802ce70 \n\
/* 0802be4a */ STR R0, [R4, 0x4] \n\
/* 0802be4c */ BL func_0802d38c \n\
/* 0802be50 */ POP {R4} \n\
/* 0802be52 */ POP {R0} \n\
/* 0802be54 */ BX R0 \n\
.balign 4, 0 \n\
.syntax divided");