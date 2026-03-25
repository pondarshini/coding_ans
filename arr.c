// Create an array of char* to store names of cities entered by the user. Implement functions to sort them alphabetically and free allocated memory
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortCities(char **cities, int n) {
    char *temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(cities[i], cities[j]) > 0) {
                temp = cities[i];
                cities[i] = cities[j];
                cities[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of cities: ");
    scanf("%d", &n);
    char **cities = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        cities[i] = (char *)malloc(50 * sizeof(char));
        printf("Enter city %d: ", i + 1);
        scanf("%s", cities[i]);
    }

    sortCities(cities, n);
    printf("\nSorted Cities:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", cities[i]);
    }
    for (int i = 0; i < n; i++) {
        free(cities[i]);
    }
    free(cities);

    return 0;
}