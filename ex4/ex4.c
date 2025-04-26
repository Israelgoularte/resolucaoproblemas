#include <stdio.h>
#include <stdlib.h>

void swap(int *arr, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int countRounds(int *arr, int n) {
    int rounds = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            rounds++;
        }
    }
    return rounds;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *positions = (int *)malloc((n + 1) * sizeof(int));
    for (int i = 0; i < n; i++) {
        positions[arr[i]] = i;
    }

    int rounds = countRounds(arr, n);
    printf("%d\n", rounds);

    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        a--; b--;

        swap(arr, a, b);
        positions[arr[a]] = a;
        positions[arr[b]] = b;

        rounds = countRounds(arr, n);
        printf("%d\n", rounds);
    }

    free(arr);
    free(positions);

    return 0;
}