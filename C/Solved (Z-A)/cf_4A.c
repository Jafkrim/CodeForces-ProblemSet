/*
    int w -> 1 <= w && w <= 100
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int w;
    
    scanf("%d", &w);

    ((w > 2) && (w % 2 == 0)) ? printf("YES\n") : printf("NO\n");

    return 0;
}
