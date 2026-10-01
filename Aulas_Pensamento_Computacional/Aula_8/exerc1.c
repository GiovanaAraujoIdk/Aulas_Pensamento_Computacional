#include <stdio.h>

int main() {
      float salarios[4] = {10.0, 20.0, 30.0, 40.0};

      for (int i = 0; i < 4; i++){
        printf("Digite o salario do %d", i + 1);
        printf("\tfuncionario: ");
        scanf("%f", &salarios[i]);
      }
      printf("     \n");
      for (int i = 0; i < 4; i++) {
        printf("\nFuncionario %d:", i + 1);
        printf("\t%.2f", salarios[i]);
      }
      return 0;
}