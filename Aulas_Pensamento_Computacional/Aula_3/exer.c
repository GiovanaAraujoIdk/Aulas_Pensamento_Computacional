#include <stdio.h>

int main() {

int  manha;
int  tarde;
int total;

printf("Quantidade recebida pela manha:\n");
scanf("%d", &manha);
printf("Quantidade recebida pela tarde: \n");
scanf("%d", &tarde);

total = manha + tarde;
printf("Total de produtos recebidos: %d\n", total);

return 0;
}