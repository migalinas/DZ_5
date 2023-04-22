// stack.c
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100
static double stack[STACK_SIZE];
static int top = -1;
void push(double n) {
    if (top + 1 < STACK_SIZE)
        stack[++top] = n;
    else
        printf("error: stack full");
}

double pop(void) {
    if (top == -1) {
        printf("error: stack empty");
        return 0.0;
    } else
        return stack[top--];
}