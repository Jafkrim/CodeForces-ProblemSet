/*
    int matrix[5][5]

    24 (0) and 1(1). Put (1) on the middle {matrix[3][3]}-
*/

#include <stdio.h>
#include <stdlib.h>

// https://github.com/Jafkrim
int main() {
    int matrix[5][5], row_1, column_1, result;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] == 1) {
                row_1 = i;
                column_1 = j;
            }
        }
    }

    printf("%d\n", (abs((2 - row_1)) + (abs(2 - column_1))));

    return 0;
}
