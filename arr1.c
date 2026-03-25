// rotate array
#include <stdio.h>
void rev(int a[], int l, int r) {
    while (l < r) {
        int t = a[l]; a[l] = a[r]; a[r] = t;
        l++; r--;
    }
}

void rotate(int a[], int n, int k) {
    k = k % n;
    rev(a, 0, n - 1);
    rev(a, 0, k - 1);
    rev(a, k, n - 1);
}

int main() {
    int a[] = {1,2,3,4,5};
    int n = 5, k = 2;
    rotate(a, n, k);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}