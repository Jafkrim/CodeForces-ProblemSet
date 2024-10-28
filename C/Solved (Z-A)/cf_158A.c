/*
    int n, k -> 1 <= k && k <= n && n <= 50
    int a[n]
    int next_round --> Result from {a[n]}. Start from (0)
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, k, next_round = 0;

    scanf("%d %d", &n, &k);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < n; j++) {
        if ((a[j] >= a[k - 1]) && (a[j] != 0)) {
            next_round++;
        }
    }

    printf("%d\n", next_round);

    return 0;
}
