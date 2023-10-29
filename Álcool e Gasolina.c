#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // V
    float litros, precoalcool = 3.79, precogasolina = 6.59, valortotala, valortotalg;
    char combustivel;

    //
    printf("Quantos litros voc� deseja? \n");
    scanf("%f", &litros);
    printf("Qual combustivel voc� deseja? \nA-�lcool ou G-Gasolina \nResposta: ");
    scanf("%s", &combustivel);

    //
    if (litros <= 25) {
        valortotala = litros * (precoalcool - (precoalcool * 0.02));
    } else {
        valortotala = litros * (precoalcool - (precoalcool * 0.04));
    }

    //
    if (litros <= 25) {
        valortotalg = litros * (precogasolina - (precogasolina * 0.03));
    } else {
        valortotalg = litros * (precogasolina - (precogasolina * 0.05));
    }

    //
    printf("\nPre�o por litro do �lcool: %.2f \n", precoalcool);
    printf("Pre�o por litro da gasolina: %.2f \n", precogasolina);
    printf("\nCombust�vel escolhido: %c \n", combustivel);

    if (combustivel == 'A' || combustivel == 'a') {
        printf("Litros de �lcool vendido: %.2f \n", litros);
        printf("Valor do �lcool com desconto: %.2f \n", valortotala);
    } else if (combustivel == 'G' || combustivel == 'g') {
        printf("Litros de gasolina vendido: %.2f \n", litros);
        printf("Valor da gasolina com desconto: %.2f \n", valortotalg);
    } else {
        printf("Op��o inv�lida!");
    }

    return 0;

}