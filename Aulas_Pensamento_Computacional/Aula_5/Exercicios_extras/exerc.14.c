#include <stdio.h>

int main(){

    int idades;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idades);
    if (idades < 5); {
        printf("Idade nao reconhecida"); 
    }
        switch (idades)
    {
    case 5:
    case 6:
    case 7: printf("Pre - Mirim"); break;
    case 8:
    case 9:
    case 10: printf("Mirim"); break;
    case 11:
    case 12:
    case 13: printf("Infantil"); break;
    case 14:
    case 15:
    case 16:
    case 17: printf("Infanto - Juvenil"); break;
    case 18:
    case 19:
    case 20: printf("Juvenil"); break;
    default: printf("Adulto"); 
    }
    return 0;
}