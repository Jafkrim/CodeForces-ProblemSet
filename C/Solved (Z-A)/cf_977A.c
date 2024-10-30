/*
    int n -> 2 <= n && n <= 10^9
    int k -> 1 <= k && k <= 50

    if ((n % 10) != 0) -> n - 1
    if ((n % 10) == 0) -> n / 10
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < k; i++) {
        if ((n % 10) != 0) {
            n--;
        } else {
            n /= 10;
        }
    }

    printf("%d\n", n);

    return 0;
}
