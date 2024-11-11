/*
    char word[101] -> 1 <= word[101] && word[101] <= 100

    Output the correct word.
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    char word[101];
    int isCaps = 1;

    scanf("%s", word);

    for (int i = 1; i < strlen(word); i++) {
        if ((word[i] > 90)) {
            isCaps = 0;
            break;
        }
    }

    if (isCaps == 1) {
        for (int j = 0; j < strlen(word); j++) {
            if ((j == 0) && (word[0] > 90)) {
                word[j] -= 32;
            } else if (j == 0 && (word[0] < 97)) {
                word[j] += 32;
            } else if (j >= 1) {
                if (word[j] < 97) {
                    word[j] += 32;
                }
            }
        }
    }

    printf("%s\n", word);

    return 0;
}
