// rotated sorted array (search)
#include <stdio.h>
int search(int a[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == key)
            return mid;

        if (a[low] <= a[mid]) {
            if (key >= a[low] && key < a[mid])
                high = mid - 1;
            else
                low = mid + 1;
        } else {
            if (key > a[mid] && key <= a[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int a[] = {4,5,6,7,0,1,2};
    int n = 7, key = 0;

    int pos = search(a, n, key);

    if (pos != -1)
        printf("Found at index %d", pos);
    else
        printf("Not found");

    return 0;
}