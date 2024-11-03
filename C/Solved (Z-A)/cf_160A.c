/*
    int n -> 1 <= n && n <= 100
    int a[n] -> 1 <= a[n] && a[n] <= 100

    if (take <= mean) coin++;

    int result --> Minimum needed number of coins
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, temp, sum = 0, curr = 0, result = 0;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        sum += a[i];
    }

    for (int j = 0; j < (n - 1); j++) {
        for (int k = j; k < n; k++) {
            if (a[j] < a[k]) {
                temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
    }

    while (curr <= (sum / 2.0)) {
        curr += a[result];
        result++;
    }

    printf("%d\n", result);

    return 0;
}
