#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 5, b = 8, c = 12;
    bool d = true;

    bool exp1 = (a + b > c) && (d == true);
    bool exp2 = (c - a == b) || (b > c);
    bool exp3 = !(a * 2 > b) && (c > a + b);
    bool exp4 = (b % 2 == 0) && ((a > 10) || (c / 2 == 6));

    printf("Resultado Expressao 1: %d\n", exp1);
    printf("Resultado Expressao 2: %d\n", exp2);
    printf("Resultado Expressao 3: %d\n", exp3);
    printf("Resultado Expressao 4: %d\n", exp4);

    return 0;
}