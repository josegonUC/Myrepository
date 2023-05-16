#include<stdio.h>

int main(){

    int cantidad;
    float euro, result;

    printf("por favor ingrese la cantidad en dolares disponibles:\n ");
    scanf("%d", &cantidad);

    euro = cantidad / 1.06;
    printf(" el equivalente de %d dolares en euros es de %g euros\n\n", cantidad, euro);

    return 0;
}