/*
    int n -> 1 <= n && n <= 100
    char string[n]

    If string is pangram (all alphabets appear at least once) -> "YES". Else -> "NO"
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, count_each[26];

    for (int i = 0; i < 26; i++) {
        count_each[i] = 0;
    }

    scanf("%d", &n);

    char string[n];

    scanf("%s", string);

    if (n < 26) {
        printf("NO\n");

        return 0;
    }

    for (int j = 0; j < n; j++) {
        for (int k = 0; k < 26; k++) {
            if ((count_each[k] == 0) && ((string[j] == (k + 65)) || (string[j] == (k + 97)))) {
                count_each[k]++;
            }
        }
    }

    for (int l = 0; l < 26; l++) {
        if (count_each[l] == 0) {
            printf("NO\n");

            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
