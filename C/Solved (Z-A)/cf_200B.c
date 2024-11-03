/*
    int n -> 1 <= n && n <= 100
    int p[n] -> 1 <= p[n] && p[n] <= 100

    Fraction point
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n;
    double sum = 0.0;

    scanf("%d", &n);

    int p[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);

        sum += p[i];
    }

    printf("%.12f\n", ((sum * 100) / (n * 100)));

    return 0;
}
