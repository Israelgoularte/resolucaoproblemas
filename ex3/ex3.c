#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int e;
    scanf("%d", &e);

    int *arr = (int *)malloc(e * sizeof(int));
    for (int i = 0; i < e; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, e, sizeof(int), compare);

    int distinct_count = 1; 
    for (int i = 1; i < e; i++) {
        if (arr[i] != arr[i - 1]) {
            distinct_count++;
        }
    }

    printf("%d\n", distinct_count);

    free(arr);
    return 0;
}