#include<stdio.h>

int main(){
    int hora,hh,mm,ss;

    printf("Por favor, ingrese la hora: (hh:mm:ss)\n\n");
    scanf("%d %d %d", &hh, &mm, &ss);

    hora = hh * 3600 + mm * 60 + ss;
    printf("Desde las 0:0:0 horas han pasado %d segundos", hora);

    return 0;
}