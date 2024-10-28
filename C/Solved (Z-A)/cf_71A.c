/*
    int n -> 1 <= n && n <= 100
    string word -> 1 <= word && word <= 100

    if (strlen(word) > 10) --> Replace with special abbr ("localization" -> "l10n") 
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    int n;
    char word[101];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", word);

        if (strlen(word) <= 10) {
            printf("%s\n", word);
        } else {
            printf("%c%d%c\n", word[0], (strlen(word) - 2), word[strlen(word) - 1]);
        }
    }

    return 0;
}
