#include <stdio.h>
#include <stdbool.h>

int main() {
    int numeroFilhos = 2;
    double precoGasolina = 5.89;
    char placaVeiculo[] = "BRA2E19";
    bool lampadaLigada = true;
    int distanciaTerraLua = 384400;
    char letraInicial = 'R';

    printf("Numero de filhos: %d\n", numeroFilhos);
    printf("Preco da gasolina: R$ %.2lf\n", precoGasolina);
    printf("Placa do veiculo: %s\n", placaVeiculo);
    printf("Lampada esta ligada? %d\n", lampadaLigada);
    printf("Distancia Terra-Lua: %d km\n", distanciaTerraLua);
    printf("Inicial do nome: %c\n", letraInicial);

    return 0;
}