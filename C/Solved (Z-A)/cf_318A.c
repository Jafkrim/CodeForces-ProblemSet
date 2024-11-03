/*
    long long n, k -> 1 <= k && k <= n && n <= 10^12

    pattern (10, 3) -> {1, 3, '5', 7, 9, 2, 4, 6, 8, 10}
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    long long n, k, result;

    scanf("%lld %lld", &n, &k);

    if (n == 1) {
        result = 1;
    } else if (n % 2 == 0) {
        if (k == n) {
            result = n;
        } else if (k > (n / 2)) {
            result = (k - (n / 2)) * 2;
        } else {
            result = (2 * k) - 1;
        }
    } else {
        if (k == n) {
            result = n - 1;
        } else if (k > ((n / 2) + 1)) {
            result = ((k - (n / 2)) * 2) - 2;
        } else {
            result = (2 * k) - 1;
        }
    }

    printf("%lld\n", result);

    return 0;
}
