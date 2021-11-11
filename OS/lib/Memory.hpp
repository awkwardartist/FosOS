#pragma once
#include "Types.hpp"
struct VirtualBuffer {
public:
    unsigned char * buffer;
    unsigned int virtual_address;
    uint64_t Allocated; // the size of this buffer
    
    VirtualBuffer(uint64_t size, unsigned int virtual_address) {
        unsigned char bu[size];
        buffer = bu;
    }
    void Free() {

    }
};
class Memory {
public:
    
};