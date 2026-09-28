#include <stdio.h>

int main() {
    int qtdPaes, qtdBroas;
    double totalPaes, totalBroas, totalArrecadado, poupanca;

    printf("Digite a quantidade de paes vendidos: ");
    scanf("%d", &qtdPaes);

    printf("Digite a quantidade de broas vendidas: ");
    scanf("%d", &qtdBroas);

    totalPaes = qtdPaes * 0.80;
    totalBroas = qtdBroas * 2.50;
    totalArrecadado = totalPaes + totalBroas;
    poupanca = totalArrecadado * 0.10;

    printf("\nTotal arrecadado: R$ %.2lf\n", totalArrecadado);
    printf("Guardar na poupanca: R$ %.2lf\n", poupanca);

    return 0;
}