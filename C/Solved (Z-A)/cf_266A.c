/*
    int n -> 1 <= n && n <= 50
    char s[n] --> Represent the colors of the stones
    int count --> Number of stones to take from the table
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, count = 0;

    scanf("%d", &n);

    char s[n];

    scanf("%s", s);

    for (int i = 0; i < (n - 1); i++) {
        if (s[i] == s[i + 1]) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
