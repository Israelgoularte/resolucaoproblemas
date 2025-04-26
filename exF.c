#include <stdio.h>
#include <stdlib.h>

#define MAX_QUERIES 100000

void solve() {
    long long balance = 1; // Initial balance
    long long low = 0, high = 1e14, mid;
    char response[20];

    while (low < high) {
        mid = (low + high + 1) / 2;
        printf("? %lld\n", mid);
        fflush(stdout);

        scanf("%s", response);

        if (response[0] == 'L') { // "Lucky!"
            balance += mid;
            low = mid;
        } else if (response[0] == 'F') { // "Fraudster!"
            balance -= mid;
            high = mid - 1;
        } else if (response[0] == 'F' && response[1] == 'i') { // "Fired!"
            exit(0);
        }
    }

    printf("! %lld\n", low);
    fflush(stdout);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        solve();
    }

    return 0;
}