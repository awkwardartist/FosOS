#pragma once
#include "IO.hpp"

struct memory_map {
public:
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
// the memory of the HOST, to be used in finding and allocating blocks of memory
class Memory {
public:
    
    static void Initialize() {
        memory_map mp;
        mp.Get(); // check memory values
        map = mp;
    }
private:
    static memory_map map;
};