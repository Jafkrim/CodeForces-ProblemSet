/*
    int s[4] - > 1 <= s[4] && s[4] <= 10^9
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int s[4], temp, result = 0;

    scanf("%d %d %d %d", &s[0], &s[1], &s[2], &s[3]);

    for (int i = 0; i < 3; i++) {
        for (int j = (i + 1); j < 4; j++) {
            if (s[i] > s[j]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for (int k = 0; k < 3; k++) {
        if (s[k] == s[k + 1]) {
            result++;
        }
    }

    printf("%d\n", result);

    return 0;
}
