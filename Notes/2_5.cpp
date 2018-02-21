QS Tutorial due 2/11
IA         due 2/18

ISA: Instruction Set Architecture
RISC-V
6 types of instructions:
  1. R-Type (register)
    FN(?)->RS2->RS1->FN3->RD->OPCODE
    31                             0
    add rd, rs1, rs2
    xor/or/and
    sll rd, rs1, rs2 <- shift out
  2. I-Type (immediate)
    IMM[11,0]->RS1->FN3->RD->OPCODE
    31                         0
    addi rd, rs1, imm
    ld   rd, IMM[rs1]
    lb sign extended
    lbu 0 (?)

  3. S-Type
    IMM[11,5]->RS2->RS1->FN3->IMM[4,0]->OP
    31                               0

  4. Conditional Branch (SB Type)
    IMM 12[11,5]->RS2->RS1->FN3->IMM[4,1]11->OP
    beq rs1, rs2, IMM(+PC)
  5. U-Type
    IMM-> rd -> op
    20bits->5-> 7

  Note: OPCODE holds the encoding for the instruction
        Expand the instruction set?


2s Complement
  invert each, add 1
  overflow issues

  Sign extension
