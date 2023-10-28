#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    // V
    char cd [100];

    //
    printf("Qual a cor do CD você deseja? \n");
    fgets(cd, sizeof(cd), stdin);

    //
    cd[strcspn(cd, "\n")] = '\0';

    //
    if (strcmp(cd, "Verde") == 0) {
        printf("\nO preço desse CD é R$10,00");
    } else if (strcmp(cd, "Azul") == 0) {
        printf("\nO preço desse CD é R$20,00");
    } else if (strcmp(cd, "Amarelo") == 0) {
        printf("\nO preço desse CD é R$30,00");
    } else if (strcmp(cd, "Vermelho") == 0) {
        printf("\nO preço desse CD é R$40,00");
    } else {
        printf("Opção inválida!");
    }

    return 0;

}