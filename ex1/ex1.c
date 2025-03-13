#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int *arr = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, N, sizeof(int), compare);

    int count = 0;
    int i = 0, j = 1;

    while (j < N) {
        int diff = arr[j] - arr[i];
        if (diff == K) {
            count++;
            i++;
            j++;
        } else if (diff < K) {
            j++;
        } else {
            i++;
        }
        if (i == j) {
            j++;
        }
    }

    printf("%d\n", count);

    free(arr);
    return 0;
}