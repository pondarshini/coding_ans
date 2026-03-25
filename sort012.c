#include <stdio.h>

void sort012(int a[], int n) {
    int low = 0, mid = 0, high = n - 1, t;

    while (mid <= high) {
        if (a[mid] == 0) {
            t = a[low]; a[low] = a[mid]; a[mid] = t;
            low++; mid++;
        } else if (a[mid] == 1) {
            mid++;
        } else {
            t = a[mid]; a[mid] = a[high]; a[high] = t;
            high--;
        }
    }
}

int main() {
    int a[] = {2,0,1,2,1,0};
    int n = 6;

    sort012(a, n);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}