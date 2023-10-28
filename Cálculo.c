#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // V
    int valorA, valorB, valorC, somaAB, multiplicacaoAB;

    //
    printf("Digite o valor de A: ");
    scanf("%d", &valorA);
    printf("Digite o valor de B: ");
    scanf("%d", &valorB);

    //
    somaAB = (valorA + valorB);
    multiplicacaoAB = (valorA * valorB);

    //
    if (valorA == valorB) {
        valorC == (valorA + valorB);
        printf("\nO valor de C é: %d", somaAB);
    } else {
        valorC == (valorA * valorB);
        printf("\nO valor de C é: %d", multiplicacaoAB);
    }

    return 0;

}