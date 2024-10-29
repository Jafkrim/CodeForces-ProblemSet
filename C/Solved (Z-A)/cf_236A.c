/*
    char name[101] -> 1 <= name[101] && name[101] <= 100
    int alp_check --> Result from {char[101]}

    if ((int)name[i] % 2 == 0) --> Female
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    char name[101];
    int stop_check[26], alp_check = 0;

    for (int i = 0; i < 26; i++) {
        stop_check[i] = 0;
    }

    scanf("%s", name);

    for (int j = 0; j < 26; j++) {
        for (int k = 0; k < strlen(name); k++) {
            if ((stop_check[j] == 0) && ((name[k] - 97) == j)) {
                alp_check++;
                stop_check[j]++;
            }
        }
    }

    if (alp_check % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}
