#include "Memory.hpp"

extern "C" void Kernel();

void Kernel() {
    VirtualBuffer bu = VirtualBuffer(10, 0);
    Memory m;
    m.Allocate(bu);
}