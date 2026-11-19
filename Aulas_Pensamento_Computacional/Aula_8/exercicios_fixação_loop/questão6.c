#include <stdio.h>
int main () {
    int i = 1, soma = 0, valor;

    while (i <= 10)
    {   
        printf("Digite o %d valor: ", i++);
        scanf("%d", &valor);
        soma += valor;
        valor++;
    }
    printf("A soma total e: %d\n", soma);

    return 0;
}