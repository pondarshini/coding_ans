#include <stdio.h>
#define SIZE 5

int q[SIZE], front = -1, rear = -1;

void enqueue(int x) {
    if ((rear + 1) % SIZE == front) {
        printf("Queue Full\n");
        return;
    }
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    q[rear] = x;
}

void display() {
    int i = front;
    while (i != rear) {
        printf("%d ", q[i]);
        i = (i + 1) % SIZE;
    }
    printf("%d\n", q[rear]);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    return 0;
}