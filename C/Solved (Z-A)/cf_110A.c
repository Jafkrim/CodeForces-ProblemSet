/*
    long long n -> 1 <= n && n <= 10^18

    if (n == nearly number) -> "YES". Else -> "NO"
*/

#include <stdio.h>

int check = 0;

void check_near(long long num);

// https://github.com/Jafkrim
int main() {
    long long n;

    scanf("%lld", &n);

    check_near(n);

    if ((check == 4) || (check == 7)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}

// Checks whether the number is nearly lucky number or not.
void check_near(long long num) {
    if ((num / 10) == 0) {
        if (((num % 10) == 4) || ((num % 10) == 7)) {
            check++;
            
            return;
        } else {
            return;
        }
    }

    if (((num % 10) == 4) || ((num % 10) == 7)) {
        check++;
    }

    return check_near((num) / 10);
}
