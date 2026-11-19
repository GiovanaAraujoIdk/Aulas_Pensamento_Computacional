#include <stdio.h>
int main () {
    int num, soma; 
    printf("Digite um limite para soma: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        soma += i;
        printf("A soma total e: %d\n", soma);
    }
    return 0;
}
