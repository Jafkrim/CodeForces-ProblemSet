/*
    int n -> 1 <= n && n <= 100
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n;

    scanf("%d", &n);

    if (n == 1) {
        printf("I hate it\n");
    } else {
        printf("I hate ");

        for (int i = 1; i < n; i++) {
            printf("that I ");

            if (i % 2 != 0) {
                printf("love ");
            } else {
                printf("hate ");
            }
        }

        printf("it\n");
    }

    return 0;
}
