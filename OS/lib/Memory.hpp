#pragma once
#include "Types.hpp"

class Memory {
public:
    void Allocate(VirtualBuffer v) {
        this.v[i++] = v;
    }
    struct VirtualBuffer {
    public:
        unsigned char * buffer;
        unsigned int virtual_address;
        unsigned int memory_address;
        uint64_t Allocated; // the size of this buffer
        
        VirtualBuffer(uint64_t size, unsigned int virtual_address) {
            unsigned char bu[size]; // allocate buffer of size
            buffer = bu; 
            memory_address = buffer;
        }
        void Free() {
            
        }

    };
private:
    VirtualBuffer * v;
    int i;
};