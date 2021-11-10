extern "C" void Kernel();

void Kernel() {
    ((char*)0xb8000)[0] = 'A';
    while(true);
}