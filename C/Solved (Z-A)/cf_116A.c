/*
    int n -> 2 <= n && n <= 1000
    int a[n], b[n] -> 0 <= A[n], B[n] && A[n], B[n] <= 1000
    int min_seat --> Maximum capacity of tram
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, seat = 0, min_seat = 0;

    scanf("%d", &n);

    int a[n], b[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &b[i]);

        seat -= a[i];

        if (min_seat < seat) {
            min_seat = seat;
        }

        seat += b[i];

        if (min_seat < seat) {
            min_seat = seat;
        }
    }

    printf("%d\n", min_seat);

    return 0;
}
