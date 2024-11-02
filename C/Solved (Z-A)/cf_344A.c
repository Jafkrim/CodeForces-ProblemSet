/*
    int n -> 1 <= n && n <= 100000
    char line[n][2]
    int result --> Number of groups of magnets
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, i = 1, result = 1;

    scanf("%d", &n);

    char line[n][2], temp;

    scanf("%s", line[0]);
    
    temp = line[0];

    while (i < n) {
        scanf("%s", line[i]);
        if (line[i - 1][0] != line[i][0]) {
            result++;
            temp = line[i];
        }

        i++;
    }

    printf("%d\n", result);

    return 0;
}
