/*
    char p[101] - > 1  <= p[n] && p[n] <= 100
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    char p[101];

    scanf("%s", p);

    for (int i = 0; i < strlen(p); i++) {
        if ((p[i] == 72) || (p[i] == 81) || (p[i] == 57)) {
            printf("YES\n");

            return 0;
        }
    }

    printf("NO\n");

    return 0;
}
