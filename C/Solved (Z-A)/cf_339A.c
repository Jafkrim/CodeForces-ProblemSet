/*
    char add_op[101] -> 1 <= add_op[101] && add_op[101] <= 100

    if (add_op[i] == '+') -> continue
    char alt_add_op[n] --> New sum with ascending sort. {n} refers to string true size
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    char add_op[101];

    scanf("%s", add_op);

    int count = 0, temp, store_num[(strlen(add_op) / 2) + 1];

    for (int i = 0; i < strlen(add_op); i += 2) {
        store_num[count] = add_op[i] - 48;
        count++;
    }

    for (int j = 0; j < ((strlen(add_op) / 2) + 1); j++) {
        for (int k = (j + 1); k < ((strlen(add_op) / 2) + 1); k++) {
            if (store_num[j] > store_num[k]) {
                temp = store_num[j];
                store_num[j] = store_num[k];
                store_num[k] = temp;
            }
        }
    }

    for (int l = 0; l < ((strlen(add_op) / 2) + 1); l++) {
        printf("%d", store_num[l]);

        if (l != ((strlen(add_op) / 2))) {
            printf("+");
        }
    }

    printf("\n");

    return 0;
}
