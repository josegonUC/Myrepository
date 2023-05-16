#include<stdio.h>

int main(){

    float aris;
    double cube;
    printf("ingrese un valor de la arista:\n ");
    scanf("%g", &aris);

    cube = (aris*aris*aris);

    printf("el volumen del cubo es de: %g\n", cube);

    return 0;
}