#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACCOUNTS 100000
#define ACCOUNT_LENGTH 35

typedef struct {
    char account[ACCOUNT_LENGTH];
    int count;
} Account;

int compare(const void *a, const void *b) {
    return strcmp(((Account *)a)->account, ((Account *)b)->account);
}

int main() {
    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        Account accounts[MAX_ACCOUNTS];
        char buffer[ACCOUNT_LENGTH];
        int account_count = 0;

        for (int i = 0; i < n; i++) {
            scanf("%s %s %s %s %s %s", buffer, buffer + 3, buffer + 12, buffer + 17, buffer + 22, buffer + 27);
            buffer[ACCOUNT_LENGTH - 1] = '\0';

            int found = 0;
            for (int j = 0; j < account_count; j++) {
                if (strcmp(accounts[j].account, buffer) == 0) {
                    accounts[j].count++;
                    found = 1;
                    break;
                }
            }

            if (!found) {
                strcpy(accounts[account_count].account, buffer);
                accounts[account_count].count = 1;
                account_count++;
            }
        }

        qsort(accounts, account_count, sizeof(Account), compare);

        for (int i = 0; i < account_count; i++) {
            printf("%s %d\n", accounts[i].account, accounts[i].count);
        }

        if (t > 0) {
            printf("\n");
        }
    }

    return 0;
}