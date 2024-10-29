/*
    char word[1001] -> 1 <= word[1001] && world[1001] <= 1000
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    char word[1001];

    scanf("%s", word);

    if(word[0] >= 97) {
        word[0] -= 32;
    }

    printf("%s\n", word);

    return 0;
}
