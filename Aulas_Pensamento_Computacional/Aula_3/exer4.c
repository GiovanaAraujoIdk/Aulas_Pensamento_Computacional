#include <stdio.h>

int main() {

    int watts;
    int horas;
    int dias;
    double consumo;

    printf("Potencia do equipamento (w): ");
    scanf("%d", &watts);

    printf("horas por uso dia? ");
    scanf("%d", &horas);

    consumo = (watts * horas * 30)/1000.0;

    printf("Consumo mensal:  %.2f \n", consumo);

    return 0;
}
