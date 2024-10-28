/*
    int n -> 1 <= n && n <= 1000
    int lines[n] --> First is Petya, second is Vasya, third is Tonya. Sure or not sure (0 or 1)
    int total_problem --> Number of problems those will implement
    
    if ({result} lines[n] >= 2) -> total_problem++
*/

#include <stdio.h>

// https://github.com/Jafkrim
int main() {
    int n, pet, vas, ton, count_temp = 0, total_problem = 0;

    scanf("%d", &n);

    int lines[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &pet, &vas, &ton);

        count_temp = 0;

        if (pet == 1) {
            count_temp++;
        }

        if (vas == 1) {
            count_temp++;
        }

        if (ton == 1) {
            count_temp++;
        }

        if (count_temp >= 2) {
            total_problem++;
        }
    }

    printf("%d", total_problem);

    return 0;
}
