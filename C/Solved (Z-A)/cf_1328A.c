/*
    int t -> 1 <= t && t <= 10^4 
    int a[t], b[t] -> 1 <= a[t], b[t] && a[t], b[t] <= 10^9

    loop -> a++

    if (a % b == 0) --> Stop looping
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    int t, min;

    scanf("%d", &t);

    int a[t], b[t];

    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a[i], &b[i]);

        if ((a[i] % b[i]) == 0) {
            printf("0\n");
        } else {
            min = a[i] % b[i];

            printf("%d\n", (b[i] - min));
        }
    }

    return 0;
}
