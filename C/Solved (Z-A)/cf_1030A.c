/*
    int n -> 1 <= n && n <= 100
    int thought[n] -> 0 / 1 (EASY / HARD)

    if (thought[n] == 1) -> "HARD". Else -> "EASY"
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n;

    scanf("%d", &n);

    int thought[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &thought[i]);

        if (thought[i] == 1) {
            printf("HARD\n");

            return 0;
        }
    }

    printf("EASY\n");

    return 0;
}
