/*
    int n -> 1 <= n && n <= 100000
    char s[n]

    if (A > D) -> "Anton". Else if (A < D) -> "Danik". Else -> "Friendship"
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, A_count = 0, D_count = 0;

    scanf("%d", &n);

    char s[n];

    scanf("%s", s);

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            A_count++;
        } else {
            D_count++;
        }
    }

    if (A_count > D_count) {
        printf("Anton\n");
    } else if (A_count < D_count) {
        printf("Danik\n");
    } else {
        printf("Friendship\n");
    }

    return 0;
}
