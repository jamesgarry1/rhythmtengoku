asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_08029b88 \n\
/* 08029b88 */ LSLS R2, R1, 0x10 \n\
/* 08029b8a */ LSLS R0, R0, 0x0 \n\
/* 08029b8c */ LDR R0, =0x030055d0 @ !PossiblePointer \n\
/* 08029b8e */ LDR R0, [R0] \n\
/* 08029b90 */ MOVS R1, 0x83 @ Set R1 to 0x83 \n\
/* 08029b92 */ LSLS R1, R1, 0x3 \n\
/* 08029b94 */ ADDS R0, R0, R1 @ Set R0 to R0 + R1 \n\
/* 08029b96 */ LDRB R0, [R0] \n\
/* 08029b98 */ BX LR \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");