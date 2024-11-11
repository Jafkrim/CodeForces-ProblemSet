/*
    int t -> 1 <= t && t <= 10^4
    long long n[t] - > 1 <= n[t] && n[t] <= (2 * 10^9)

    n[t] = a[t] + b[t]
    a, b > 0
    a > b

    int answer[t] --> Number of ways to distribute exactly n candies between two sisters in a way described in the problem statement. If there is no way to satisfy all the conditions, print 0.
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int t;

    scanf("%d", &t);

    long long n[t];

    for (int i = 0; i < t; i++) {
        scanf("%lld", &n[i]);

        if ((n[i] == 1) || (n[i] == 2)) {
            printf("0\n");
        } else {
            printf("%lld\n", (n[i] - (n[i] / 2) - 1));
        }
    }

    return 0;
}
