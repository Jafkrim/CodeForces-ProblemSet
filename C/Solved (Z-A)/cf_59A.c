/*
    char s[101] -> 1 <= s && s <= 100
    int uppercase, lowercase

    if (uppercase > lowercase) --> Use uppercase. Else
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    char s[100];
    int uppercase = 0, lowercase = 0;

    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++) {
        if ((65 <= s[i]) && (s[i] <= 90)) {
            uppercase++;
        } else {
            lowercase++;
        }
    }

    if (uppercase > lowercase) {
        for (int j = 0; j < strlen(s); j++) {
            if ((97 <= s[j]) && (s[j] <= 122)) {
                s[j] -= 32;
            }
        }
    } else {
        for (int k = 0; k < strlen(s); k++) {
            if ((65 <= s[k]) && (s[k] <= 90)) {
                s[k] += 32;
            }
        }
    }

    printf("%s\n", s);

    return 0;
}
