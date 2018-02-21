Guest Lecturer

r_
rf_
\-> all of these things indicate that theyre coming from dif places

2 read/1 write by default

black board work:
  Just determining instructions from the hex base
  0x5CE02E23
  SW
  rs2 == e source for the store
  rs1 == 0 source 1
  Immediate:
    0101 110 1 1100

  sw x14, 1500(x0)

  0X0180006F
      0     1   8   0     0     0   6   F
  0b 0000 0001 1000 0000 0000 0000 0110 1111

  Which instruction? 110 1111 JAL (j-type)
  jal x0, 24
    if we were jumping to a function it would go to x1
    because that is where the return register is stored

  LUI and AUIPC
    load upper immediate, address upper immediate pc
    look into this
  *count carefully*
"Pseudo instructions: figments of the assembler's imagination"
  nop                 -> addi x0, x0, 0
  bgt rs1, rs2, label -> blt rs2, rs1, label
  mv rd ,rs -> addi rd, rs, 0
  Allows us to not increase circuity or waste opcode space
    Abstraction!
  Lots floating around
