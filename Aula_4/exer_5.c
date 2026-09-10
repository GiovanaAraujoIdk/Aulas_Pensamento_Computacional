#include <stdio.h> 
#include <math.h>

int main (){

    double x1;
    double x2;
    double y1;
    double y2;
    double potencia_x;
    double potencia_y;
    double distancia;

    printf("Digite a coordenada x do 1 ponto: ");
    scanf("%lf", &x1);
    printf("Digite a coordenada y do 1 ponto: ");
    scanf("%lf", &y1);
    printf("Digite a coordenada x do 2 ponto: ");
    scanf("%lf", &x2);
    printf("Digite a coordenada y do 2 ponto: ");
    scanf("%lf", &y2);

    potencia_x = pow(x2 - x1, 2);
    potencia_y = pow(y2 - y1, 2);

    distancia = sqrt (potencia_x + potencia_y);

    printf("A distancia entre os pontos e %.2f", distancia);

    return 0;
}