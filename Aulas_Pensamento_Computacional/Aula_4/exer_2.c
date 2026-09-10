#include <stdio.h>
#include <math.h>

int main () {

    float num1;
    float num2;
    float num3;
    float num4;
    float media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &num3);
    printf("Digite o quarto valor: ");
    scanf("%f", &num4);

    media = (num1 + num2 + num3 + num4)/4;

    printf("A media aritmetica e: %.2f\n", media);

    return 0;
}