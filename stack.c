#include <stdio.h>
#define SIZE 5

int stack[SIZE], top = -1;

void push(int val) {
    if (top == SIZE - 1) printf("Overflow\n");
    else stack[++top] = val;
}

int pop() {
    if (top == -1) return -1;
    return stack[top--];
}

int main() {
    push(10);
    push(20);
    printf("Popped: %d\n", pop());
    return 0;
}