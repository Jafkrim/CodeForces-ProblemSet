/*
    char string_line[2] -> 1 <= string_line[2] && string_line[2] <= 100
    int range --> substract from {string_line[0]} - {string_line[1]}
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    char string_line[2][101], range;

    for (int i = 0; i < 2; i++) {
        scanf("%s", string_line[i]);

        for (int j = 0; j < strlen(string_line[0]); j++) {
            if ('A' <= string_line[i][j] && string_line[i][j] <= 'Z') {
                string_line[i][j] += 32;
            }
        }
    }

    range = strcmp(string_line[0], string_line[1]);

    if (range < 0) {
        printf("-1\n");
    } else if (range > 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
