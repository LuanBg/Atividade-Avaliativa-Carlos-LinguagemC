#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // V
    char produto [1000];
    float desconto, preco, precofinal;
    int quantidade;

    //
    printf("Qual produto voc� deseja? \n");
    gets(produto);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    printf("Digite o pre�o do produto: ");
    scanf("%f", &preco);

    //
    if (quantidade <= 5) {
        desconto = (preco * 0.02);
    } else if (quantidade > 5 && quantidade <=10) {
        desconto = (preco * 0.03);
    } else {
        desconto = (preco * 0.05);
    }

    precofinal = (preco - desconto);

    //
    printf("\nProduto: %s \n", produto);
    printf("Quantidade: %d \n", quantidade);
    printf("Pre�o sem desconto: %.2f \n", preco);
    printf("Pre�o com des conto: %.2f", precofinal);

    return 0;

}