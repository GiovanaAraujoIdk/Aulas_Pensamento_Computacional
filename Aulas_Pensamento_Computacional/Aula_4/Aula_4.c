#include <stdio.h>

int main() {

    float peso;
    float altura;
    float imc;

    printf("Qual e o peso da pessoa em kg? ");
    scanf("%f", &peso);
    printf("Qual e a altura da pessoa em metros? ");
    scanf("%f", &altura);

    imc = peso/(altura * altura);

    printf("O indice de Massa Corporal e %.2f\n", imc);

    return 0;
}