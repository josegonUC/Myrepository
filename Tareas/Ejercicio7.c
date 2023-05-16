#include<stdio.h>

int main(){
    int n;

    printf("Por favor ingrese un número entero\n\n");
    scanf("%d", &n);

    if ((n%2) == 0)
    {
        printf("el número %d es PAR.\n", n);
    }else{
        printf("el número %d es IMPAR.\n", n);
    }
    
    return 0;
}