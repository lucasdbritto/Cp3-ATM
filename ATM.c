#include <stdio.h>

void exibirMenu() {
    printf("\n=============================\n");
    printf("       CAIXA ELETRONICO      \n");
    printf("=============================\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Saque\n");
    printf("3 - Realizar Deposito\n");
    printf("0 - Sair\n");
    printf("=============================\n");
    printf("Escolha uma opcao: ");
}

void consultarSaldo(float saldo) {
    printf("\nSaldo atual: R$ %.2f\n", saldo);
}

float realizarSaque(float saldo) {
    float saque;

    printf("\nDigite o valor do saque: ");
    scanf("%f", &saque);

    if (saque <= 0) {
        printf("Valor invalido!\n");
    } else if (saque > saldo) {
        printf("Saldo insuficiente! Saldo atual: R$ %.2f\n", saldo);
    } else {
        saldo -= saque;
        printf("Saque realizado!\n");
    }

    return saldo;
}

float realizarDeposito(float saldo) {
    float deposito;

    printf("\nDigite o valor do deposito: ");
    scanf("%f", &deposito);

    if (deposito <= 0) {
        printf("Valor invalido!\n");
    } else {
        saldo += deposito;
        printf("Deposito realizado!\n");
    }

    return saldo;
}

int main() {
    int opcao = 0;
    float saldo = 0;

    do {
        exibirMenu();
        scanf("%d", &opcao);
        while (getchar() != '\n');

        switch (opcao) {
            case 1:
                consultarSaldo(saldo);
                break;

            case 2:
                saldo = realizarSaque(saldo);
                break;

            case 3:
                saldo = realizarDeposito(saldo);
                break;

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
