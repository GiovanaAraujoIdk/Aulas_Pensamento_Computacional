#include <stdio.h>
int main() {

    int numero;

    printf("Digite seu numero: ");
    scanf("%d", &numero);

    if (numero % 7 == 0) {
        printf("Esse numero eh multiplo de 7");
    }
    else {
        printf("Esse numero nao eh multiplo de 7");
    }

}