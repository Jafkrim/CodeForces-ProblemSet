/*
    int n -> 1 <= n && n <= 200000
    char text[n][13]

    if "Tetrahedron" --> count + 4
    if "Cube" --> count + 6
    if "Octahedron" --> count + 8
    if "Dodecahedron" --> count + 12
    if "Icosahedron" --> count + 20

    int count --> Total number of faces in all the polyhedrons in Anton's collection
*/

#include <stdio.h>
#include <string.h>

// https://github.com/Jafkrim
int main() {
    int n, count = 0;

    scanf("%d", &n);

    char text[n][13];

    for (int i = 0; i < n; i++) {
        scanf("%s", text[i]);

        if (strcmp(text[i], "Tetrahedron") == 0) {
            count += 4;
        } else if (strcmp(text[i], "Cube") == 0) {
            count += 6;
        } else if (strcmp(text[i], "Octahedron") == 0) {
            count += 8;
        } else if (strcmp(text[i], "Dodecahedron") == 0) {
            count += 12;
        } else {
            count += 20;
        }
    }

    printf("%d\n", count);

    return 0;
}
