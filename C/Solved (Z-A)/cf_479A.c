/*
    int a, b, c -> 1 <= a, b, c && a, b, c <= 10

    int result --> Maximum value of the expression that you can obtain
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int a, b, c, result = 3, temp;
    
    scanf("%d %d %d", &a, &b, &c);

    temp = a + b + c;

    if (result < temp) {
        result = temp;
    }

    temp = a + b * c;

    if (result < temp) {
        result = temp;
    }

    temp = (a + b) * c;

    if (result < temp) {
        result = temp;
    }

    temp = a * b + c;

    if (result < temp) {
        result = temp;
    }

    temp = a * (b + c);

    if (result < temp) {
        result = temp;
    }

    temp = a * b * c;

    if (result < temp) {
        result = temp;
    }

    printf("%d\n", result);
    
    return 0;
}
