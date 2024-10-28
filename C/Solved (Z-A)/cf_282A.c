/*
    int n -> 1 <= n && n <= 150
    string statement[3] --> increment or decrement command
    int final_value --> result from {statement[3]}. Initial (0)
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, final_value = 0;
    char statement[3];

    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        scanf("%s", statement);

        if (statement[1] == '+') {
            final_value++;
        } else if (statement[1] == '-') {
            final_value --;
        }
    }

    printf("%d\n", final_value);

    return 0;
}
