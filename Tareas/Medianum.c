#include<stdio.h>

void main(){
    float a, b, c;
    double media;
    printf("ingrese las notas:\n ");
    scanf("%g %g %g", &a, &b, &c);

    media = (a+b+c)/3;

    printf("la media es: %g\n", media);

    return 0;
}