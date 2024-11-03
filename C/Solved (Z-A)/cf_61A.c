/*
    char line[2][101] - > 1 <= line[2][101] && line[2][101] <= 100
    Result --> xor
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    char line[2][101];
    
    for (int i = 0; i < 2; i++) {
        scanf("%s", line[i]);
    }

    for (int j = 0; j < strlen(line[0]); j++) {
        if (line[0][j] != line[1][j]) {
            printf("1");
        } else {
            printf("0");
        }
    }

    printf("\n");

    return 0;
}
