/*
    int n, m -> 3 <= n, m && n, m <= 50
    n --> Odd number.

    int answer[t] --> Number of ways to distribute exactly n candies between two sisters in a way described in the problem statement. If there is no way to satisfy all the conditions, print 0.
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, m, change;

    scanf("%d %d", &n, &m);


    for (int i = 0; i < n; i++) {
        if ((i % 2) == 0) {
            for (int j = 0; j < m; j++) {
                printf("#");
            }
        } else {
            if ((i % 4) == 3) {
                change = 0;
            } else {
                change = m - 1;
            }

            for (int k = 0; k < m; k++) {
                if (k == change) {
                    printf("#");
                    continue;
                }

                printf(".");
            }
        }

        printf("\n");
    }

    return 0;
}
