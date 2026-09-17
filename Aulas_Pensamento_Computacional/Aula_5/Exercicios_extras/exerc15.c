#include <stdio.h>
int main (){

    float diaria;
    float valor_com_50;
    float valor_com_80;
    float diferenca;
    float valor_fim_semana;

    printf("Digite o valor da diaria: ");
    scanf("%f", &diaria);

    valor_fim_semana = (diaria * 0.25);
    valor_com_50 = (75 * 0.50) * diaria;
    valor_com_80 = (75 * 0.80) * valor_fim_semana;
    diferenca = (diaria - valor_fim_semana);

    printf("O valor da diaria: %.2f \n", diaria);
    printf("O valor toral arrecadado com 50 por cento de ocupacao e diaria normal: %.2f\n", valor_com_50);
    printf("O valor toral arrecadado com 80 por cento de ocupacao e diaria promocional: %.2f\n", valor_com_80);
    printf("A diferenca: %.2f\n", diferenca);

    return 0;
}