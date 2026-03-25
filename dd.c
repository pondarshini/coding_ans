#include <stdio.h>
#include <stdlib.h>

struct Node {
    int seats;
    struct Node *prev, *next;
};

struct Node* create(int seats) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->seats = seats;
    n->prev = n->next = NULL;
    return n;
}

struct Node* addFront(struct Node* head, int seats) {
    struct Node* n = create(seats);
    if (head == NULL)
        return n;

    n->next = head;
    head->prev = n;
    return n;
}

struct Node* addEnd(struct Node* head, int seats) {
    struct Node* n = create(seats);
    if (head == NULL)
        return n;

    struct Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = n;
    n->prev = temp;
    return head;
}

struct Node* deletePos(struct Node* head, int pos) {
    if (head == NULL)
        return NULL;

    struct Node* temp = head;

    if (pos == 1) {
        head = temp->next;
        if (head)
            head->prev = NULL;
        free(temp);
        return head;
    }

    for (int i = 1; temp && i < pos; i++)
        temp = temp->next;

    if (temp == NULL)
        return head;

    if (temp->prev)
        temp->prev->next = temp->next;

    if (temp->next)
        temp->next->prev = temp->prev;

    free(temp);
    return head;
}

void displayForward(struct Node* head) {
    while (head) {
        printf("%d ", head->seats);
        head = head->next;
    }
    printf("\n");
}

void displayBackward(struct Node* head) {
    if (head == NULL) return;

    while (head->next)
        head = head->next;

    while (head) {
        printf("%d ", head->seats);
        head = head->prev;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    head = addFront(head, 50);
    head = addEnd(head, 60);
    head = addFront(head, 40);
    head = addEnd(head, 70);

    printf("Forward: ");
    displayForward(head);

    printf("Backward: ");
    displayBackward(head);

    head = deletePos(head, 2);

    printf("After deletion: ");
    displayForward(head);

    return 0;
}