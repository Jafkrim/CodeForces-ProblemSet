/*
    int n -> 1 <= n && n <= 100
    int p[n] -> 0 <= p[n] && p[n] <= n
    int a[p] -> 1 <= a[p] && a[p] <= n
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, X, Y, temp, count = 1;

    scanf("%d %d", &n, &X);

    int p[X];

    for (int i = 0; i < X; i++) {
        scanf("%d", &p[i]);
    }

    scanf("%d", &Y);

    int a[Y];

    for (int j = 0; j < Y; j++) {
        scanf("%d", &a[j]);
    }

    int locate[X + Y];

    for (int n = 0; n < X; n++) {
        locate[n] = p[n];
    }

    for (int o = 0; o < Y; o++) {
        locate[o + X] = a[o];
    }

    for (int k = 0; k < ((X + Y) - 1); k++) {
        for (int l = (k + 1); l < (X + Y); l++) {
            if (locate[k] > locate[l]) {
                temp = locate[k];
                locate[k] = locate[l];
                locate[l] = temp;
            }
        }
    }

    for (int m = 0; m < ((X + Y) - 1); m++) {
        if (locate[m] != locate[m + 1]) {
            count++;
        }
    }

    if ((X == 0) & (Y == 0)) {
        printf("Oh, my keyboard!\n");
    } else if (count == n) {
        printf("I become the guy.\n");
    } else {
        printf("Oh, my keyboard!\n");
    }
    
    return 0;
}
