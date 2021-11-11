#pragma once

typedef unsigned char byte;
typedef unsigned long word;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned long uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned long long size_t;

Operation * opqueue;
int oplen;

struct Operation {
public:
    int opcode;
    unsigned char *dat, *ret;
    void Queue() {
        opqueue[oplen++] = *this;
    }
};