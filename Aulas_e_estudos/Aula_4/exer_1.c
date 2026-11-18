#include <stdio.h>
#include <math.h>

int main() {
    
    float largura;
    float comprimento;
    float area;
    float valor;
    float caixa;
    float preco;

    printf("Qual e a largura da area (em metros)? ");
    scanf("%f", &largura);

    printf("Qual e o comprimento da area em metros? ");
    scanf("%f", &comprimento);

    printf("Qual e o valor de cada caixa? ");
    scanf("%f", &valor);

    area = largura * comprimento;
    printf("Area total a ser revestido: %.2f\n", area);

    caixa = area / 2.5;

    printf("Quantidade de caixas necessarias: %.2f\n", caixa);

    preco = valor * caixa;

    printf("Custo total da compra: %.2f\n", preco);

    return 0;
}