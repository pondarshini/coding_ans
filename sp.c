// Swap Two Pointers Using Pointer-to-Pointer
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapPointers(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    char *str1 = (char *)malloc(50);
    char *str2 = (char *)malloc(50);
    strcpy(str1, "Hello");
    strcpy(str2, "World");
    printf("Before Swap:\n");
    printf("str1 = %s, str2 = %s\n", str1, str2);
    swapPointers(&str1, &str2);
    printf("\nAfter Swap:\n");
    printf("str1 = %s, str2 = %s\n", str1, str2);
    free(str1);
    free(str2);

    return 0;
}