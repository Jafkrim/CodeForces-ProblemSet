/*
    char gue[101], res[101], lett[201] -> 1 <= gue[101], res[101], lett[201] && gue[101], res[101], lett[201] <= 100

    If the letters in the pile could be permuted to make the names -> "YES". Else -> "NO"
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    char gue[101], res[101], lett[201];
    int sum_alp[2][26], same = 1;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 26; j++) {
            sum_alp[i][j] = 0;
        }
    }

    scanf("%s %s %s", gue, res, lett);

    if (strlen(lett) != (strlen(gue) + strlen(res))) {
        printf("NO\n");

        return 0;
    }

    for (int k = 0; k < strlen(lett); k++) {
        if (k < strlen(gue)) {
            sum_alp[0][gue[k] - 65]++;
        }

        if (k < strlen(res)) {
            sum_alp[0][res[k] - 65]++;
        }

        sum_alp[1][lett[k] - 65]++;
    }

    for (int l = 0; l < 26; l++) {
        if (sum_alp[0][l] != sum_alp[1][l]) {
            same = 0;
            break;
        }
    }

    switch (same) {
        case 1 :    printf("YES\n");
                    break;
        case 0 :    printf("NO\n");
                    break;
    }

    return 0;
}
