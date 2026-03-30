#include <stdio.h>

void nextGreaterElement(int arr[], int n) {
    int result[n];
    for (int i = 0; i < n; i++) {
        result[i] = -1;  

        for (int j = 1; j < n; j++) {
            int nextIndex = (i + j) % n;

            if (arr[nextIndex] > arr[i]) {
                result[i] = arr[nextIndex];
                break;
            }
        }
    }

    printf("Next Greater Elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d -> %d\n", arr[i], result[i]);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    nextGreaterElement(arr, n);

    return 0;
}