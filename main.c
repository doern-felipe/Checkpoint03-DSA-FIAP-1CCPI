#include <stdio.h>

void exibirMenu() {
printf("\n-------------------------\n");
printf(" CAIXA ELETRONICO \n");
printf("---------------------------\n");
printf("0 - Sair\n");
printf("1 - Consultar Saldo\n");
printf("2 - Realizar Saque\n");
printf("3 - Realizar Deposito\n");
printf("---------------------------\n");
printf("Escolha uma opcao: ");
}

void consultarSaldo(float money) {
    printf("\nSaldo atual: R$ %.2f\n", money);
}

float realizarDeposito(float money) {
    float valor;

    printf("Digite o valor do deposito: ");
    scanf("%f", &valor);

    if(valor > 0) {
        money += valor;
        printf("Deposito realizado!\n");
    } else {

        printf("Valor invalido!\n");
    }

    return money;
}

float realizarSaque(float money) {

    float valor;

    printf("Digite o valor do saque: ");
    scanf("%f", &valor);
    if(valor > 0 && valor <= money) {

        money -= valor;
        printf("Saque realizado!\n");

    } else {

        printf("Saldo insuficiente ou valor invalido!\n");
    }
    
    return money;
}

int main(){
    float saldo = 0.0;
    int opcao;

    do {

        exibirMenu();
        scanf("%d", &opcao);

        switch(opcao) {

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
                printf("Encerrando sistema...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    printf("Obrigado por usar nosso ATM!\n");
    return 0;

}