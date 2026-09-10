#include <stdio.h>

int main() {

int hora;
int minuto;
int total_minutos;

printf("Declare o horario abaixo (0-23): ");
scanf("%d", &hora);

printf("Declare os minutos abaixo (0-59): ");
scanf("%d", &minuto);

total_minutos = (hora * 60) + minuto;

printf("Ja se passaram %d minutos desde o inicio do dia", total_minutos);

return 0;
}