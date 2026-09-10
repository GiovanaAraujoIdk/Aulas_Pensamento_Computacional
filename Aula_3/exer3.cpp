#include <stdio.h>

int main() {

    int x;
    int y;
    int soma;
    int subtracao;
    int multiplicacao;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    soma = x + y;
    subtracao = x - y;
    multiplicacao = x * y;

    printf("Soma : %d\n", soma);
    printf("Subtracao : %d\n", subtracao);
    printf("Multiplicacao : %d\n", multiplicacao);

    return 0;
}
