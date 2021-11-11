#include "Memory.hpp"

extern "C" void Kernel();

void Kernel() {
    VirtualBuffer bu = VirtualBuffer(10, 0);
}