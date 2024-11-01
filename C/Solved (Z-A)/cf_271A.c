/*
    int y -> 1000 <= y && y <= 9000
    
    result --> Minimum year number that is strictly larger than y and all it's digits are distinct
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int y, d1, d2, d3, d4, result;

    scanf("%d", &y);

    do {
        y++;
        d1 = y / 1000;
        d2 = (y % 1000) / 100;
        d3 = (y % 100) / 10;
        d4 = y % 10;
    } while ((d1 == d2) || (d1 == d3) || (d1 == d4) ||
             (d2 == d3) || (d2 == d4) ||
             (d3 == d4));

    printf("%d\n", y);

    return 0;
}
