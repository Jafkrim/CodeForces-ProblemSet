/*
    int n, m -> 1 <= n && n <= m && n <= 50
    int f[m] -> 1 <= f[m] && f[m] <= 1000

    A --> Largest value
    B --> Smallest value

    Print the least possible value of A - B.
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, m, temp;

    scanf("%d %d", &n, &m);

    int f[m];

    for (int i = 0; i < m; i++) {
        scanf("%d", &f[i]);
    }

    for (int j = 0; j < (m - 1); j++) {
        for (int k = (j + 1); k < m; k++) {
            if (f[j] > f[k]) {
                temp = f[j];
                f[j] = f[k];
                f[k] = temp;
            }
        }
    }

    for (int l = 0; l <= (m - n); l++) {
        if (temp > (f[l + (n - 1)] - f[l])) {
            temp = (f[l + (n - 1)] - f[l]);
        }
    }

    printf("%d\n", temp);

    return 0;
}
