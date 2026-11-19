#include <stdio.h>
int main () {
    int num, i, cont = 0;

    for (i = 1;i <= 10; i++)
    {
        printf("Digite o %d valor, positivo ou negativo: \n", i);
        scanf("%d", &num);
            if (num < 0){
                cont++;
            }
    }
    printf("A qntd de numero negativo e: %d", cont);
    return 0;
}
