#include<stdio.h>

int main(){
    float Sugar=3.0, Coffe=0.72, dolar;

    printf("ingrese su cantidad de dolares disponibles: ");
    scanf("\n\n %g", &dolar);

    printf("Con %g dolares se pudo comprar %f kilos de azucar",dolar, ((dolar/2)/Sugar));
    printf(" y se pudo comprar %g kilos de café,\n", ((dolar/2)/3/Coffe));
    printf("del resto quedaron %g\n\n", (dolar/2)- ((dolar/2)/3));

    return 0;
}