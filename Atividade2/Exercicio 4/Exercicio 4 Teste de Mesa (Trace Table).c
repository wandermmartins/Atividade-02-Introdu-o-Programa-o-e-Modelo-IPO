#include <stdio.h>

int main() {
    int x, y, z;

    x = 10;
    y = 4;
    z = x + y * 2;
    x = z - 6;
    y = x % 5;
    z = z + y - x;

    printf("Valores finais na memoria:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n\n", z);
    printf("Saida combinada: %d %d %d\n", x, y, z);

    return 0;
}