#include <stdio.h>
#include <stdbool.h>

bool running = true;
int ip = 0;
int sp = -1;

int stack[256];

typedef enum {
   PSH,
   ADD,
   POP,
   HLT
} InstructionSet;

const int program[] = {
    PSH, 5,
    PSH, 6,
    ADD,
    POP,
    HLT
};