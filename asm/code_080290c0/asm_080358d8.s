asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_080358d8 \n\
/* 080358d8 */ PUSH {LR} \n\
/* 080358da */ LDR R0, =D_030055d0 \n\
/* 080358dc */ LDR R0, [R0] \n\
/* 080358de */ LDRH R0, [R0, 0x2C] \n\
/* 080358e0 */ CMP R0, 0x0 @ Compare R0 and 0x0 \n\
/* 080358e2 */ BEQ branch_080358f0 \n\
/* 080358e4 */ BL func_0800bc40 \n\
/* 080358e8 */ B branch_080358f4 \n\
\n\
.ltorg \n\
 \n\
branch_080358f0: \n\
/* 080358f0 */ BL func_0800bce4 \n\
 \n\
branch_080358f4: \n\
/* 080358f4 */ POP {R0} \n\
/* 080358f6 */ BX R0 \n\
.balign 4, 0 \n\
.syntax divided");