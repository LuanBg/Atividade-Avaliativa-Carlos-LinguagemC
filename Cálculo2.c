#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    // V
    char operacao;
    int valorA, valorB, adicaoAB, subtracaoAB, multiplicacaoAB;
    float divisaoAB;
    //
    printf("Digite o valor de A: ");
    scanf("%d", &valorA);
    printf("Digite o valor de B: ");
    scanf("%d", &valorB);
    printf("Qual operação você deseja aplicar? \n");
    scanf("%s", &operacao);

    //
    adicaoAB = (valorA + valorB);
    subtracaoAB = (valorA - valorB);
    if (valorB != 0) {
        divisaoAB = (float)valorA / valorB;
    } else {
        printf("Erro: divisão por zero!\n");
        return 1;
    }
    multiplicacaoAB = (valorA * valorB);

    //
    switch (operacao)
    {
    case '+':
        printf("\nO resultado é: %d", adicaoAB);
        break;
    case '-':
        printf("\nO resultado é: %d", subtracaoAB);
        break;
    case '/':
        printf("\nO resultado é: %.1f", divisaoAB);
        break;
    case '*':
        printf("\nO resultado é: %d", multiplicacaoAB);
        break;
    default:
        printf("Opção inválida!");
    }

    return 0;
}