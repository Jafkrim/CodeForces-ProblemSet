/*
    int M, N -> 1 <= M, N && M, N <= 16
    int value --> Maximum number of dominoes, which can be placed
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int M, N;

    scanf("%d %d", &M, &N);
    printf("%d\n", ((M * N) / (2 * 1)));

    return 0;
}
