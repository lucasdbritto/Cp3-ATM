#include <stdio.h>

int main() {
    int opcao = 0;
    float saldo = 0;

    do {
        printf("\n=============================\n");
        printf("       CAIXA ELETRONICO      \n");
        printf("=============================\n");
        printf("1 - Consultar Saldo\n");
        printf("2 - Realizar Saque\n");
        printf("3 - Realizar Deposito\n");
        printf("0 - Sair\n");
        printf("=============================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        while (getchar() != '\n');

        switch (opcao) {
            case 1:
                printf("\nSaldo atual: R$ %.2f\n", saldo);
                break;

            case 2: {
                float Saque;
                printf("\nDigite o valor do saque: ");
                scanf("%f", &Saque);
                if (Saque <= 0) {
                    printf("Valor invalido!\n");
                } else if (Saque > saldo) {
                    printf("Saldo insuficiente! Saldo atual: R$ %.2f\n", saldo);
                } else {
                    saldo = (saldo - Saque);
                    printf("Saque de realizado!\n");
                }
                break;
            }

            case 3: {
                float Deposito;
                printf("\nDigite o valor do deposito: ");
                scanf("%f", &Deposito);
                if (Deposito <= 0) {
                    printf("Valor invalido!\n");
                } else {
                    saldo = (saldo + Deposito);
                    printf("Deposito realizado!\n");
                }
                break;
            }

            case 0:
                printf("\nSaindo...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}