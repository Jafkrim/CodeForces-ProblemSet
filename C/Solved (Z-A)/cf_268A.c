/*
    int n -> 2 <= n && n <= 30
    int h[n], a[n] -> 1 <= h[n], a[n] && h[n], a[n] <= 100

    game -> n * (n - 1)

    int ho_wear_gue --> Number of games where the host team is going to play in the guest uniform.
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, ho_wear_gue = 0;
    
    scanf("%d", &n);

    int h[n], a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &h[i], &a[i]);
    }

    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            if (j == k) {
                continue;
            }

            if (h[j] == a[k]) {
                ho_wear_gue++;
            }
        }
    }

    printf("%d\n", ho_wear_gue);

    return 0;
}
