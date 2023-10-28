#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // V
    int valorA, valorB, valorC, somaAB;

    //
    printf("Digite o valor de A: ");
    scanf("%d", &valorA);
    printf("Digite o valor de B: ");
    scanf("%d", &valorB);
    printf("Digite o valor de C: ");
    scanf("%d", &valorC);

    somaAB = (valorA + valorB);

    printf("\nA soma de A e B é: %d\n", somaAB);
    printf("O valor de C é: %d ", valorC);

    if (somaAB > valorC) {
        printf("\nA+B é maior que C");
    } else if (somaAB == valorC) {
        printf("\nSoma de A e B é igual a C");
    } else {
        printf("\nA+B é menor que C");
    }
    return 0;

}