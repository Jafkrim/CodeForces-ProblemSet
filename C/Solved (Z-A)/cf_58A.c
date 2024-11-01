/*
    char s[101] -> 1 <= s[101] && s[101] <= 100

    if managed to say hello -> "YES". Else -> "NO"
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    char s[101], helo[5] = {0, 0, 0, 0, 0};

    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++) {
        if ((helo[0] != 1) && (s[i] - 97) == 7) {
            helo[0]++;
        } else if ((helo[0] == 1) && (helo[1] != 1) && ((s[i] - 97) == 4)) {
            helo[1]++;
        } else if ((helo[1] == 1) && (helo[2] != 2) && ((s[i] - 97) == 11)) {
            helo[2]++;
        } else if ((helo[2] == 2) && (helo[3] != 1) && ((s[i] - 97) == 14)) {
            helo[3]++;
        } else {
            helo[4]++;
        }
    }

    if ((strcmp(s, "hello") == 0) || ((helo[0] == 1) && (helo[1] == 1) && (helo[2] == 2) && (helo[3] == 1) && (helo[4] >= 1))) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
