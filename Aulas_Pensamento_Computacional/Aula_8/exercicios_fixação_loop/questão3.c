
#include <stdio.h>
int main () {
    int i = 10;

    do {
        printf("Contagem regressiva: %d\n", i);
        i--;
    } while (i > 0);

    printf("Fim da contagem regressiva!\n");
    
    return 0;
}