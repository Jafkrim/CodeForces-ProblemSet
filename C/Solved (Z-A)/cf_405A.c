/*
    int n -> 1 <= n && n <= 100
    int a[n] -> 1 <= a[n] && a[n] <= 100
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, temp;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < (n - 1); j++) {
        for (int k = (j + 1); k < n; k++) {
            if (a[j] > a[k]) {
                temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
    }

    for (int l = 0; l < n; l++) {
        printf("%d ", a[l]);
    }

    printf("\n");
    
    return 0;
}
