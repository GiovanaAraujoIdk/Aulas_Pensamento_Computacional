#include <stdio.h>
int main(){

    float salario [6]= {0.0};
    float media;
    float qtdacima = 0;

    media = 0;
    printf("Digite o salario do x funcionario: \nEx.: 1800 2500 2200 3100 1500 2700\n");

    for (int i = 0; i < 6; i++) {
        printf("Digite o %d salario: ", i + 1);
        scanf("%f", &salario[i]);
    }

    printf("    \n");
    for (int i = 0; i < 6; i++){
        media += salario[i];
    }
    media = media / 6;
    printf("A media dos salarios e: %.2f \n", media);
    for (int i = 0; i < 6; i++){
        if (salario[1] <media) {qtdacima += 1;}
    }
    printf("A quantidade de salarios abaixo da media e: %d \n", qtdacima);

    return 0;
}