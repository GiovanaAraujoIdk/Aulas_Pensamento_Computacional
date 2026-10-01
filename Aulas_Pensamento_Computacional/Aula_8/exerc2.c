#include <stdio.h>
int main() {
    float valor [8] = {0.0};
    float media;
    int qtdacima = 0;
    for (int i = 0; i < 8; i++){
        printf("Digite o %d valor: ", i + 1);
        scanf("%f", &valor[i]);
    }
    printf("   \n");

    for (int i = 0; i < 8; i++) {
        media += valor[i];
    }
    media /= 8;
    printf("\nMedia: %.2f", media);
    for (int i = 0; i < 8; i++){
        if (valor[i] > media) {qtdacima += 1;}
    }
    printf("\nValores acima da media: %d ", qtdacima);

    return 0;
}