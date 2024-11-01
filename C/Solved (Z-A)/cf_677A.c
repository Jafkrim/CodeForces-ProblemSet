/*
    int n, h -> 1 <= n, h && n, h <= 1000
    int a[n] -> 1 <= a[n] && a[n] <= 2h

    walking usual -> result++
    bent person -> result += 2

    int result --> Minimum possible valid width
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, h, result = 0;

    scanf("%d %d", &n, &h);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] <= h) {
            result++;
        } else {
            result += 2;
        }
    }

    printf("%d\n", result);

    return 0;
}
