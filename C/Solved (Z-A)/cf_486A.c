/*
    unsigned long long n -> 1 <= n && n <= 10^15
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    long long n;

    scanf("%lld", &n);

    if ((n % 2) == 0) {
        printf("%lld", (n / 2));
    } else {
        printf("%lld", (((n / 2) + 1) * -1));
    }

    return 0;
}
