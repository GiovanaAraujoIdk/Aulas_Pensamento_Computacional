#include <stdio.h>
int main () {
    int n, m;
    printf("Digite um numero: ");
    scanf("%d",&n);
    for(m = 0; m <= n; m++){
        if(m % 2 == 1){
            printf("Numero impar: %d\n", m);
        }
    }
return 0;
}