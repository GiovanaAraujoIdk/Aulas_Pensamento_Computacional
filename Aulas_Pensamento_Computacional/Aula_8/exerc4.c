#include <stdio.h>

int main() {
    int opcao;

    while (1) { // Loop infinito
        printf("\n--- MENU ---\n");
        printf("1 - Ver Saldo\n");
        printf("2 - Sacar\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo do sistema... Ate logo!\n");
            break; // Quebra o loop infinito imediatamente
        } else if (opcao == 1) {
            printf("Seu saldo eh R$ 500,00\n");
        } else if (opcao == 2) {
            printf("Saque realizado com sucesso.\n");
        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }
    }

    printf("Codigo fora do loop executado.\n");
    return 0;
}
