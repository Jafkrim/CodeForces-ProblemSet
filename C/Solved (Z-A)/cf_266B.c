/*
    int n, t -> 1 <= n, t && n, t <= 50
    char s[n]
    char a[n]
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    int n, t;

    scanf("%d %d", &n, &t);

    char s[n], a[n], temp;

    scanf("%s", s);

    for (int i = 0; i < t; i++) {
        for (int j = n; j > 0; j--) {
            if (s[j] > s[j - 1]) {
                temp = s[j];
                s[j] = s[j - 1];
                s[j - 1] = temp;
                j--;
            }
        }
    }

    strcpy(a, s);

    printf("%s\n", a);

    return 0;
}
