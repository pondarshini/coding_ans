#include <stdio.h>
#define SIZE 50

int s1[SIZE], s2[SIZE], top1 = -1, top2 = -1;

void enqueue(int x) {
    s1[++top1] = x;
}

int dequeue() {
    if (top2 == -1) {
        while (top1 != -1)
            s2[++top2] = s1[top1--];
    }
    return s2[top2--];
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);

    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    return 0;
}