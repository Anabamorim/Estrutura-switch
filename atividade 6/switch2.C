#include <stdio.h>
#include <string.h>

int main() {
    int codigo, opcao = 1; 
    float precoUnitario = 0, valorTotal = 0; 

    char cachorro_quente[] = "cachorro quente";
    char bauru_simples[] = "bauru simples";
    char bauru_com_ovo[] = "bauru com ovo";
    char hamburger[] = "hamburger";
    char cheeseburger[] = "cheeseburger";

    do {
        printf("Opcoes de lanches: \n");
        printf("100 - Cachorro Quente (R$10.10)\n");
        printf("101 - Bauru Simples (R$8.30)\n");
        printf("102 - Bauru com Ovo (R$8.50)\n");
        printf("103 - Hamburger (R$12.50)\n");
        printf("104 - Cheeseburger (R$13.25)\n");

        scanf("%d", &codigo);

        switch (codigo) {
            case 100:
                precoUnitario = 10.10;
                valorTotal += precoUnitario;
                printf("Pedido: %s\n", cachorro_quente);
                break;

            case 101:
                precoUnitario = 8.30;
                valorTotal += precoUnitario;
                printf("Pedido: %s\n", bauru_simples);
                break;

            case 102:
                precoUnitario = 8.50;
                valorTotal += precoUnitario;
                printf("Pedido: %s\n", bauru_com_ovo);
                break;

            case 103:
                precoUnitario = 12.50;
                valorTotal += precoUnitario;
                printf("Pedido: %s\n", hamburger);
                break;

            case 104:
                precoUnitario = 13.25;
                valorTotal += precoUnitario;
                printf("Pedido: %s\n", cheeseburger);
                break;
        }

        printf("Deseja fazer um novo pedido?\n");
        printf("1 - Sim\n0 - Nao\n");
        scanf("%d", &opcao);

    } while (opcao != 0);

    printf("Valor total : R$%.2f\n", valorTotal);

    return 0;
}
