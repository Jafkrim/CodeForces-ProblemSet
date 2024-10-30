/*
    int k, w ->  1 <= k, w && k, w <= 1000
    int n -> 0 <= n && n <= 10^9
    int pay -> i * k --> For i-th banana
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int k, n, w, pay = 0;

    scanf("%d %d %d", &k, &n, &w);

    for (int  i = 1; i <= w; i++) {
        pay += k * i;
    }

    if ((pay - n) <= 0) {
        printf("0\n");
    } else {
        printf("%d\n", (pay - n));
    }

    return 0;
}
