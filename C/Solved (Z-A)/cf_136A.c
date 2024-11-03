/*
    int n -> 1 <= n && n <= 100
    int a[n]

    a[4] = {2, 3, 4, 1} --> Person index 3(1) sit on row 1 (2)
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n;

    scanf("%d", &n);

    int a[n], alt_a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        alt_a[a[i] - 1] = i + 1;
    }

    for (int j = 0; j < n; j++) {
        printf("%d ", alt_a[j]);
    }

    printf("\n");

    return 0;
}
