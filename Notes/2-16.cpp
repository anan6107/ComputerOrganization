add x5, x4, x3
assembler { opc xpr.dst "," xpr_rsl "," xrp_rs2}
binary { funct7(opc) xpr_rs1 xpr_rs2 funct3(opc) xpr_dst opcode(opc) }
  defining what the machine code will actually become

Blackboard Review
  What is the assembly for the following code?
    int j, a[100], b[100];
    for (j=0; j<100; j++){
      a[j] = a[j] + b[j];
    }
    j = x20, &a[o] = x21, &b[0] = x22

    addi x20, x0, 0         //j
    addi x6, x0, 100
    Loop:
      lw x7, 0(x21)         //offset 0 for a[0]
      lw x8, 0(x22)         //b[0]
      add x7, x7, x8
      sw x7, 0(x21)
      addi x21, x21, 4
      addi x22, x22, 4
      addi x20, x20, 1

      bne x20, x6, Loop

  What is the c code for the following assembly?
    addi x5, x5, 120
    sub  x5, x5, x6
    andi x5, x5, 256
    ori  x5, x5, 128
    a=x5, b=x6

    a=a+120
    a=a-b
    a=a&256
    a=a|128

    a=((((a+120)-b)+256)|128)

  I am so tired.
  last review
  240+16
  FFFFFF0F

C Bubble Sort Function
Quick Sort
