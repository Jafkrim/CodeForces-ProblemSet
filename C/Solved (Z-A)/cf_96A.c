/*
    char player[101] -> 1 <= player[101] && player[101] <= 100

    if (count >= 7) -> "YES". Else -> "NO"
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    char player[101];
    int count = 1;

    scanf("%s", player);

    for (int i = 1; i < strlen(player); i++) {
        if (player[i - 1] == player[i]) {
            count++;
        } else {
            count = 1;
        }

        if (count >= 7) {
            printf("YES\n");

            return 0;
        }
    }

    printf("NO\n");

    return 0;
}
