/*
    char string[101] -> 1 <= string[101] && string[101] <= 100
    
    Delete all the vowels, replace uppercase with corresponding lowercase
    vowels -> 'A', 'O', 'Y', 'E', 'U', 'I'

    print ".{i}"
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    char string[101];

    scanf("%s", string);

    for (int i = 0; i < strlen(string); i++) {
        if (string[i] < 97) {
            string[i] += 32;
        }

        if ((string[i] != 'a') && (string[i] != 'o') && (string[i] != 'y') && (string[i] != 'e') && (string[i] != 'u') && (string[i] != 'i')) {
            printf(".%c", string[i]);
        }
    }

    printf("\n");

    return 0;
}
