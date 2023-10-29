#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // V
    float totalcompra, kgmorango, kgmaca, comprasd;
    int morango, maca, totalkg;

    //
    printf("Informe a quantidade em Kg de morangos: ");
    scanf("%d", &morango);
    printf("Informe a quantidade em Kg de maçãs: ");
    scanf("%d", &maca);

    //
    if (morango <= 5) {
        kgmorango = (2.50 * morango);
    } else {
        kgmorango = (2.20 * morango);
    }

    totalkg = (morango + maca);

    //
    if (maca <= 5) {
        kgmaca = (1.80 * maca);
    } else {
        kgmaca = (1.50 * maca);
    }

    comprasd = (kgmorango + kgmaca);

    //
    if (totalkg > 8 || totalcompra > 25) {
        totalcompra = (comprasd - (comprasd * 0.1));
    } else {
        totalcompra = comprasd;
    }

    //
    printf("\nQuantidade de morangos: %dKg \n", morango);
    printf("Quantidade de maçãs: %dKg \n", maca);
    printf("Quantidade total: %dKg \n", totalkg);
    printf("Valor das compras: R$%.2f \n", comprasd);
    printf("Valor das compras com desconto: R$%.2f \n", totalcompra);

    return 0;

}