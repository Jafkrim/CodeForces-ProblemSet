/*
    int n -> 1 <= n && n <= 100
    int x[n], y[n], z[n] -> -100 <= x[n], y[n], z[n] && x[n], y[n], z[n] <= 100

    if --> the body is in equilibrium ("YES"). else ("NO")
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, sum_check[3] = {0, 0, 0};

    scanf("%d", &n);

    int x[n], y[n], z[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &x[i], &y[i], &z[i]);
        sum_check[0] += x[i];
        sum_check[1] += y[i];
        sum_check[2] += z[i];
    }

    for (int j = 0; j < 3; j++) {
        if (sum_check[j] != 0) {
            printf("NO\n");

            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
