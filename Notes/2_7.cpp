ECOT 431

RISC-V is little endian
ARM    is big endian

Compiler must use registers for variables as much as possible
  only "spill" to memory for less frequently used variables
    Put variables into actual memory over registers -> wastes time
  register optimization is important

Most compilers know that sp refers to x2
  stack pointer
"simplicity is the art of design"

Branch is a conditional operation
Jump is not conditional

shifting left == multiply

for(int j=1000; j!=0; j--){}
  This is better practice from a firmware perspective, though counting up to
  1000 seems to make more logical sense. The 0 does not need to use another
  register to be saved. 0 is "free".

Procedure Call
  1. Place params in registers
  2. Transfer control to procedure
  3. Acquire storage
  4. Perform ops
  5. Place result in register for caller
  6. return

  Jump and link ( and their associated registers)
    Look at the slides for this part
