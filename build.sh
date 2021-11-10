source ./.bashrc

nasm -felf OS/kernel.asm -o kboot.o
gcc -m32 -fno-stack-protector -Wl,static-libgcc,lgcc -ffreestanding -fpermissive -c OS/ckernel.cpp -w -o kernel.o -I ./OS/lib
ld -m elf_i386 -T OS/link.ld -o kernel_execute kboot.o kernel.o
qemu-system-i386 -kernel ./OS/kernel_execute -m 512

rm -f *.bin *.o