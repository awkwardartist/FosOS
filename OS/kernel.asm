section .text
    align 4
    dd 0x1BADB002
    dd 0
    dd - (0x1BADB002+0)

    global _start
    extern Kernel

_start:
    call    Kernel      
    hlt