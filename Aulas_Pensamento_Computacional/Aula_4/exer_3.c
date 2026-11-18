#include <stdio.h>
#include <math.h>

int main () {

    float num1;
    float num2;
    float num3;
    float media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &num1);
    printf("Digite a segunda nota: ");
    scanf("%f", &num2);
    printf("Digite a terceira nota: ");
    scanf("%f", &num3);

    num1 = num1 * 1;
    num2 = num2 * 2;
    num3 = num3 * 4;
    media = (num1 + num2 + num3)/7;

    printf("A média ponderada é: %.2f", media);

    return 0;
}