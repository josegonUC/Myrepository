#include<stdio.h>

int main(){
    
    int a,b;
    int v1,v2;

    printf("por favor, ingrese dos números enteros.\n\n");
    scanf("\n\n %d %d", &a, &b);

    v1=b;
    v2=a;
    printf("La orden de los numeros ha cambiado: %d %d\n\n", v1, v2);
    return 0;

}