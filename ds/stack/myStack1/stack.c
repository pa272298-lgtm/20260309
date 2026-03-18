#include "stack.h"

int stack[50];
int tos = 0; // top of stack

void push(int data)
{
    stack[tos] = data;
    // tos = tos + 1;
    ++tos;
}

int pop(void)
{
    --tos;
    return stack[tos];
}