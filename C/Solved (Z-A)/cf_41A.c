/*
    char s[101] -> 1 <= s[101] && s[101] <= 100
    char t[101] -> 1 <= t[101] && t[101] <= 100

    if (s[i] == t[i - n]) -> "YES". Else "NO"
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    char s[101], t[101];

    scanf("%s %s", s, t);

    if (strlen(s) != strlen(t)) {
        printf("NO\n");

        return 0;
    }

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != t[(strlen(s) - 1) - i]) {
            printf("NO\n");

            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
