#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = 0, rear = 0;

void enqueue(int val) {
    if (rear == SIZE) printf("Full\n");
    else queue[rear++] = val;
}

void dequeue() {
    if (front == rear) printf("Empty\n");
    else printf("Dequeued: %d\n", queue[front++]);
}

int main() {
    enqueue(100);
    enqueue(200);
    dequeue();
    return 0;
}