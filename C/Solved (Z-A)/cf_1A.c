/*
    int n, m, a -> 1 <= n, m, a && n, m, a <= 10^9

    size theatre = n * m
    size flagstone = a * a

    long long needed_flag -> size theatre / size flagstone
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, m, a;
    long long needed_flag;

    scanf("%d %d %d", &n, &m, &a);

    if (n % a != 0) {
        n = (n / a) + 1;
    } else {
        n = (n / a);
    }

    if (m % a != 0) {
        m = (m / a) + 1;
    } else {
        m = (m / a);
    }

    needed_flag = (long long)n * m;

    printf("%lld\n", needed_flag);

    return 0;
}
