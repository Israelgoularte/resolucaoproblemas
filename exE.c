#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 200000

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void solve() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[MAX_NODES];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        qsort(a, n, sizeof(int), compare);

        int valid = 1;
        int current_level = 0;
        int count_at_level = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] < current_level) {
                valid = 0;
                break;
            }

            if (a[i] == current_level) {
                count_at_level++;
            } else {
                if (count_at_level < (1 << current_level)) {
                    valid = 0;
                    break;
                }
                current_level++;
                count_at_level = 1;
            }
        }

        if (valid && count_at_level >= (1 << current_level)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}

int main() {
    solve();
    return 0;
}