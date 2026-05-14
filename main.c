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

int main(){

    exibirMenu();
    int opcao;
    do {
    exibirMenu();
    scanf("%d", &opcao);
    } while(opcao != 0);
    printf("Obrigado por usar nosso ATM!\n");
 
    return 0;
}