
#include <stdio.h>
int main () {
    int i = 0, soma = 0;
        printf("Digite o valor: ");
        scanf("%d", &i);
    while (i != 0) {
        printf("Digite o valor: ");
        scanf("%d", &i);
        soma += i;
    }
    printf("A soma dos numeros e: %d\n", soma);
return 0;
}