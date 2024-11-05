/*
    int k, l, m, n -> 1 <= k, l, m, n && k, l, m, n <= 10
    int d -> 1 <= d && d <= 10^5

    if (1, 2, ..., k % k, l, m, n == 0) -> count++

    int count
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int k, l, m, n, d, count = 0;
    
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);

    if ((k == 1) || (l == 1) || (m == 1) || (n == 1)) {
        printf("%d\n", d);

        return 0;
    } else {
        for (int i = 1; i <= d; i++) {
            if (((i % k) == 0) || ((i % l) == 0) || ((i % m) == 0) || ((i % n) == 0)) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
