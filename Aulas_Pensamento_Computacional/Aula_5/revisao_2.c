#include <stdio.h>
int main (){

  float valor_total;
  float comissao;
  float bonus;

  printf("Digite o valor da venda: ");
  scanf("%f", &valor_total);

  if("\nvalor_total < 50000 => %f ", valor_total) {
    bonus = valor_total * 0.015;
      comissao = valor_total * 0.03;
      printf("O valor do bonus e: %.1f\n", bonus);
      printf("O valor da comissao e: %.1f\n", comissao);
  }

  else if ("\nvalor_total >= 50000 => %f", valor_total) {
     bonus = valor_total * 0.025;
        comissao = valor_total * 0.05;
        printf("O valor do bonus e: %.1f\n", bonus);
        printf("O valor da comissao e: %.1f\n", comissao);
  }
        return 0;

}