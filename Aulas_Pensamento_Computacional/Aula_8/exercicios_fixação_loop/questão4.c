#include <stdio.h>
int main () {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    for (int i = 0; i <= 10; i++) {
        printf("O tabuada do %d x %d e: %d\n", i, num, num * i);
    }
    return 0;
}