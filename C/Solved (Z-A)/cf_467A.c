/*
    int n -> 1 <= n && n <= 100
    int p[n], q[n] -> 1 <= p[n], q[n] && p[n], q[n] <= 100

    if (q[n] - p[n] >= 2) -> result++

    int result --> Number of room where George and Alex can move in
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, result = 0;

    scanf("%d", &n);

    int p[n], q[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p[i], &q[i]);

        if ((q[i] - p[i]) >= 2) {
            result++;
        }
    }

    printf("%d\n", result);

    return 0;
}
