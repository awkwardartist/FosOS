#include "VirtualMemory.hpp"

extern "C" void Kernel();

void Kernel() {
    Memory::Initialize();
}