#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* newNode(int val) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = val;
    n->left = n->right = NULL;
    return n;
}

int height(struct Node* root) {
    if (root == NULL)
        return 0;

    int l = height(root->left);
    int r = height(root->right);

    return (l > r ? l : r) + 1;
}

int isBalanced(struct Node* root) {
    if (root == NULL)
        return 1;

    int l = height(root->left);
    int r = height(root->right);

    if (abs(l - r) > 1)
        return 0;

    return isBalanced(root->left) && isBalanced(root->right);
}

int main() {
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->left->left = newNode(5);

    printf("Height: %d\n", height(root));

    if (isBalanced(root))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}