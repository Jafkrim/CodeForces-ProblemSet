/*
    int n -> 2 <= n && n <= 100
    int soldier[n] -> 1 <= n && n <= 100

    soldier[0] --> Highest
    soldier[n - 1] --> Lowest

    int output --> Minimum number of second the colonel will need to form a line-up the general will like
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, val_min, val_max, temp, count = 0;

    scanf("%d", &n);

    int soldier[n];

    scanf("%d", &soldier[0]);

    val_min = soldier[0];
    val_max = soldier[0];

    for (int i = 1; i < n; i++) {
        scanf("%d", &soldier[i]);

        if (val_min > soldier[i]) {
            val_min = soldier[i];
        }

        if (val_max < soldier[i]) {
            val_max = soldier[i];
        }
    }

    while (soldier[0] != val_max) {
        for (int j = 1; j < n; j++) {
            if (soldier[j] == val_max) {
                temp = soldier[j - 1];
                soldier[j - 1] = soldier[j];
                soldier[j] = temp;
                count++;
                break;
            }
        }
    }

    while (soldier[n - 1] != val_min) {
        for (int k = (n - 2); k >= 0; k--) {
            if (soldier[k] == val_min) {
                temp = soldier[k + 1];
                soldier[k + 1] = soldier[k];
                soldier[k] = temp;
                count++;
                break;
            }
        }
    }

    printf("%d\n", count);
    
    return 0;
}
