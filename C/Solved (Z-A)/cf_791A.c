/*
    int a, b -> 1 <= a && a <= b && b <= 10
    int num_year --> Result of years after which Limak will become strictly larger than Bob
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int a, b, num_year = 0;

    scanf("%d %d", &a, &b);

    while (a <= b) {
        a *= 3;
        b *= 2;
        num_year++;
    }

    printf("%d\n", num_year);

    return 0;
}
