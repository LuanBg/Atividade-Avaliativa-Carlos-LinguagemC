#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // V
    char nome [200];
    float rendamensal, emprestimo, prestacoes, emprestimomaximo, prestacaomaxima;

    //
    printf("Digite seu nome completo: ");
    gets(nome);
    printf("Digite sua renda mensal: R$");
    scanf("%f", &rendamensal);
    printf("Digite o valor do empr�stimo: R$");
    scanf("%f", &emprestimo);
    printf("Digite o valor das presta��es: R$");
    scanf("%f", &prestacoes);

    //
    emprestimomaximo = (10 * rendamensal);
    prestacaomaxima = (0.30 * rendamensal);

    //
    if (emprestimo <= emprestimomaximo && prestacoes >= prestacaomaxima) {
        printf("\nParab�ns, seu empr�stimo foi aprovado!");
    } else {
        printf("\nInfelizmente, n�o atende aos nossos requisitos!");
    }

    //
    printf("\nNome: %s \n", nome);
    printf("Valor do empr�stimo: R$%.2f \n", emprestimo);
    printf("Valor das presta��es: R$%.2f \n", prestacoes);
    printf("Renda mensal: R$%.2f \n", rendamensal);

    return 0;

}