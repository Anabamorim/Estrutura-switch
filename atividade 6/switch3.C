#include<stdio.h>

int main() {
    int prato, sobremesa, bebida, calorias = 0;

    printf("Escolha o prato: 1 - vegetariano (180 cal), 2 - Peixe (230 cal), 3 - Frango (250 cal), 4 - Carne (350 cal)\n");
    scanf("%d", &prato);

    switch (prato) {
        case 1:
            calorias += 180;
            break;
        case 2:
            calorias += 230;
            break;
        case 3:
            calorias += 250;
            break;
        case 4:
            calorias += 350;
            break;
    }

    printf("Escolha a sobremesa: 1 - Abacaxi (75 cal), 2 - Sorvete diet (110 cal), 3 - Mouse diet (170 cal), 4 - Mouse chocolate (200 cal)\n");
    scanf("%d", &sobremesa);

    switch (sobremesa) {
        case 1:
            calorias += 75;
            break;
        case 2:
            calorias += 110;
            break;
        case 3:
            calorias += 170;
            break;
        case 4:
            calorias += 200;
            break;
    }

    printf("Escolha a bebida: 1 - chá (20 cal), 2 - suco de laranja (70 cal), 3 - suco de melão (100 cal), 4 - refrigerante diet (65 cal)\n");
    scanf("%d", &bebida);

    switch (bebida) {
        case 1:
            calorias += 20;
            break;
        case 2:
            calorias += 70;
            break;
        case 3:
            calorias += 100;
            break;
        case 4:
            calorias += 65;
            break;
    }

    printf("Total de calorias: %d cal\n", calorias);

    return 0;
}
