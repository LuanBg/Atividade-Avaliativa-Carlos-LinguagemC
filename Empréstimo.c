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
    printf("Digite o valor do empréstimo: R$");
    scanf("%f", &emprestimo);
    printf("Digite o valor das prestações: R$");
    scanf("%f", &prestacoes);

    //
    emprestimomaximo = (10 * rendamensal);
    prestacaomaxima = (0.30 * rendamensal);

    //
    if (emprestimo <= emprestimomaximo && prestacoes >= prestacaomaxima) {
        printf("\nParabéns, seu empréstimo foi aprovado!");
    } else {
        printf("\nInfelizmente, não atende aos nossos requisitos!");
    }

    //
    printf("\nNome: %s \n", nome);
    printf("Valor do empréstimo: R$%.2f \n", emprestimo);
    printf("Valor das prestações: R$%.2f \n", prestacoes);
    printf("Renda mensal: R$%.2f \n", rendamensal);

    return 0;

}