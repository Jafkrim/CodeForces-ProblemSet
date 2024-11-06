/*
    int n -> 1 <= n && n <= 10^5
    int a[n] -> 1 <= a[n] && a[n] <= 10^9

    int count_max --> Length of the maximum non-decreasing subsegment of sequence a
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, count_temp = 1, count_max = 0;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < (n - 1); j++) {
        if (a[j] <= a[j + 1]) {
            count_temp++;
        } else {
            if (count_max < count_temp) {
                count_max = count_temp;
            }

            count_temp = 1;
        }
    }

    if (count_max < count_temp) {
        count_max = count_temp;
    }

    printf("%d\n", count_max);

    return 0;
}
