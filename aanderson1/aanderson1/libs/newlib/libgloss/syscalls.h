#ifndef SYSCALLS_H_
#define SYSCALLS_H_

#define DO_SYSCALL(addr) \
          __asm__( "r2 = mov %0 " : :"r"(addr) :"r2"); \
          __asm__( "syscall" )

#endif // SYSCALLS_H_
