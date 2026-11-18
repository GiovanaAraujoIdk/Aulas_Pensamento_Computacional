#include <stdio.h>
int main () {
    int idade;
    printf("Digite sua idade em dias: ");
    scanf("%d", &idade);

    int anos = idade / 365;
    int resto = idade % 365;
    int meses = resto / 30;
    int dias = resto % 30;

    printf("Sua idade em anos e %d, %d meses e %d dias ", anos, meses, dias);

    return 0;
}