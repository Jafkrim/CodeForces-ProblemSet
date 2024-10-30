/*
    int x -> 1<= x && x <= 1000000

    one step --> 1, 2, 3, 4, or 5 position

    int num_step --> Minimum number of step
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int x, num_step = 0;

    scanf("%d", &x);

    if (x % 5 != 0) {
        num_step++;
    }

    num_step += x / 5;

    printf("%d\n", num_step);

    return 0;
}
