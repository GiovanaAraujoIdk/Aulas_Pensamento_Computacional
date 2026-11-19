#include <stdio.h>

// Funcao que valida a idade
void verificarVoto(int idade) {
    if (idade < 0) {
        printf("Erro: Idade invalida!\n");
        return; // Encerra a funcao IMEDIATAMENTE (nao executa o resto)
    }

    if (idade >= 16) {
        printf("Voce ja pode votar.\n");
    } else {
        printf("Voce ainda nao pode votar.\n");
    }
}

int main() {
    int minhaIdade;

    printf("Digite sua idade: ");
    scanf("%d", &minhaIdade);

    verificarVoto(minhaIdade);

    return 0;
}
