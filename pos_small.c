/* find mising +ve int*/

#include <stdio.h>
int firstMissingPositive(int A[], int n) {
    for (int i = 0; i < n; i++) {
        while (A[i] > 0 && A[i] <= n && A[A[i]-1] != A[i]) {
            int t = A[A[i]-1];
            A[A[i]-1] = A[i];
            A[i] = t;
        }
    }
    for (int i = 0; i < n; i++)
        if (A[i] != i+1) return i+1;
    return n+1;
}

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    printf("%d\n", firstMissingPositive(A, n));
    return 0;
}