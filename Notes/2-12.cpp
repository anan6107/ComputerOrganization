Synchronization
  - two processors sharing an area of memory
    - data_race(different thread access the same location and at least one is a write and
                they occur right after each other) if P1 and P2 dont synchronize
    - result depends on order of accesses
Hardward support required
  - atomic read/write mem op
  - no other access to the location
  atomic()
    def on the slides
RISC_V Synch
  Load reserved: lr.d rd,(rs1)
    - load from address in rs1 to rd
    - place reservation on mem address
  Store conditional: sc.d rd,(rs1)rs2
    store from rs2 to address in rs1
    succeeds if location not changed since the lr.d
      returns 0 in rd
    fails if location is changed
      returns non-zero in rd
  (semifor)
  Slides have test/set lock variable examples
    store conditional is the test /has someone accessed since I did

What is the machine code for the following assembly instruction?

sb x5, 19(x15)

OPCODE: 0100011
fcn 3:  000


       19     15/14   12        6     0
00000  00101  100101 0  0  0        0100011
0x00F289A3

jalr x0, 0(x1)

OPCODE  6     0
        1100111
Fcn3    14  12
        0 0 0
rd      11  7
        00000
rs1     19 15
        00000
imm[11:0]
        all zeros

bgeu x19,x26,-72
     rs1>rs2

OPCODE    1100011
Fcn3      111

bit gets
7 -> 11
