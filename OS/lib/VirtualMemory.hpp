#pragma once
#include "IO.hpp"

// the memory of the HOST, to be used in finding and allocating blocks of memory
class Memory {
public:
    Memory() {
        Get(); // get memory map
    }
private:
    unsigned char high_memory, low_memory;
    unsigned short total;

    void Get() {
        outb(0x70, 0x30);
        low_memory = inb(0x71);
        outb(0x70, 0x31);
        high_memory = inb(0x71);

        total = low_memory | high_memory << 8;
    }
};