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
    printf("Qual a cor do CD voc� deseja? \n");
    fgets(cd, sizeof(cd), stdin);

    //
    cd[strcspn(cd, "\n")] = '\0';

    //
    if (strcmp(cd, "Verde") == 0) {
        printf("\nO pre�o desse CD � R$10,00");
    } else if (strcmp(cd, "Azul") == 0) {
        printf("\nO pre�o desse CD � R$20,00");
    } else if (strcmp(cd, "Amarelo") == 0) {
        printf("\nO pre�o desse CD � R$30,00");
    } else if (strcmp(cd, "Vermelho") == 0) {
        printf("\nO pre�o desse CD � R$40,00");
    } else {
        printf("Op��o inv�lida!");
    }

    return 0;

}