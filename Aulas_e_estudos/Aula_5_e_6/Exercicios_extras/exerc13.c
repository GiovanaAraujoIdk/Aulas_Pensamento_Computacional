#include <stdio.h>
int main (){

    char a, d, g;
    float litro;
    printf("Escolha alguma das opcoes: \n a - Alcool \n d - Diesel \n g - Gasolina: ");
    scanf("%c", &a,d,g);
    printf("Quantos litros voce usou: ");
    scanf("%f", &litro);


    if(litro == 'a')
        printf("Valor a ser pago: %.2f", (litro * 1.7997));
    else if("litro == d")
        printf("Valor a ser pago: %.2f", (litro * 0.9798));
    else printf("Valor a ser pago: %.2f",(litro * 2.1009));
    return 0;

}