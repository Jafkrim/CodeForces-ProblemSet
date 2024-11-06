/*
    int n -> 1 <= n && n <= 10^9
    int min_bill --> Minimum number of bills that Allen could receive
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, temp, min_bill = 0;
    
    scanf("%d",&n);

    min_bill = n / 100;
    n %= 100;
    min_bill += n / 20;
    n %= 20;
    min_bill += n / 10;
    n %= 10;
    min_bill += n / 5;
    n %= 5;
    min_bill += n / 1;
    n %= 1;

    printf("%d\n", min_bill);

    return 0;
}
