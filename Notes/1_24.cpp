NDA due by end of class Monday -> can turn it in earlier!

Harvard Architecture
  - separate instruction and data caches AND instruction/data busses
  - parallel access to inst and data

Von Neumann
  - instr and data share a bus
  - resource conflict
  - fewer interconnections
CISC - complex instruction set computer
     - ex. Pentium II
     - instructions are hardwired and can be executed in one cc
        - a RISC prop
     - instr use microinstr for exec
     - can require more than on c for exec time

     - Why do it?
        - high-level language support
        - migration of functions from software to hardware
          - generally, one instruction in hardware will be better
            than one realized by a sequence of simpler instructions
              - limits mem access
          - increases comlexity of the comp
        - upward compatibility
          - use old instruction set to build off of rather than starting
            from scratch

RISC- Reduced Instruction set computer
    - more data close to the processor
    - no micro code -> limited/simple instr sets
    - on-chip memories/registers
    - compiler that maximizes the use of regisers
      - minimzed main mem access
    - optimizing the instruction pipeline

    - Why do it?
      - improve tech
      - min cc/instr
      - simpler design -> simpler circuits
      - enabling VLSI
        - control unit area
        - realize entire process on a single chip
      - Allows pipelining
      - simpler debugging

    - HOWEVER
        - may degrade instruction efficiency
          - more instruction/function
