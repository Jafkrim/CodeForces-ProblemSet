/*
    char line[1001] -> 1 <= line[1001] && line[1001] <= 1000

    int count --> The number of distinct letters in Anton's set
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    char line[1001];
    int store_alp[26], count = 0;

    for (int i = 0; i < 26; i++) {
        store_alp[i] = 0;
    }

    gets(line);

    for (int j = 0; j < strlen(line); j++) {
        if ((store_alp[line[j] - 97] == 0) && (line[j] != '{') && (line[j] != 32) && (line[j] != ',') && (line[j] != '}')) {
            count++;
            store_alp[line[j] - 97]++;
        }
    }

    printf("%d\n", count);

    return 0;
}
