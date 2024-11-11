/*
    int n -> 3 <= n && n <= 100
    int natural[n] -> 1 <= natural[n] && natural[n] <= 100

    Output the index of number that differs from the others in evenness, start from 1.
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, odd_count = 0, even_count = 0, compare, index;

    scanf("%d", &n);

    int natural[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &natural[i]);
    }

    for (int j = 0; j < 3; j++) {
        if ((natural[j] % 2) == 1) {
            odd_count++;
        } else {
            even_count++;
        }
    }

    if (odd_count > even_count) {
        compare = 0;
    } else {
        compare = 1;
    }

    for (int k = 0; k < n; k++) {
        if ((natural[k] % 2) == compare) {
            printf("%d\n", (k + 1));
        }
    }

    return 0;
}
