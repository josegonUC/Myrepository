#include<stdio.h>
#include<math.h>


// Este programa se Encarga de hacer la sumatoria del factorial de un numero dado.
int main(){

    // Aquí se declaran las variables para el funcionamiento del programa.
    int n,k=0,l,num,sum,fac,div;
    float sumatoria=0,res=0;

    // Se le pide por pantalla al usuario que ingrese un numero, en este caso de tipo entero.
    printf("Por favor ingrese un número entero:\n ");
    // Donde dice "scanf" se encarga de leer el numero ingresado y guardarlo en la variable "n".
    scanf("%d",&n);

    // Aquí está lo importante, se escribe un cíclo que es el encargado de realizar la sumatoria, éste empieza a contar desde el 2.
    for(k=2;k<=n;k++){

        fac=1;

        /* Éste otro ciclo se encarga de realizar el facotrial, la variable "fac" (de factorial) 
            empieza valiendo uno ya que se va a multiplicar de 1 en 1 veces e incrementando (este incrementa segun el 
                valor de "k")*/
        for(l=1;l<=k;l++){
            fac = fac * l;
        }

        /*finalmente, por cada vez que se termine el ciclo del factorial su resultado se multiplicará 
            por 3 veces el valor de k (su valor actual) + 1*/
        num = fac * (3*(k+1));

        // Aquí se guarda en la variable división "div" el resultado de (k-1) al cubo.
        div = ((k-1) * (k-1) * (k-1));

        //al final, se guarda en la variable sumatoria la división de "num" / "div".
        // ¿Por qué se coloca dos veces la variable sumatoria? por que vale 0 y le vamos a ir sumando de 1 en 1 en resultado de la división.
        // cada vez que se repita el ciclo
        sumatoria = sumatoria + (num/div);
    }

    // finalmente se multiplica el resultado total por 5, se guarda en la variable "res" (de respuesta) y se enseña el resultado enpantalla.
    res = sumatoria*5;
    printf("El resultado es: %.2f\n", res);
}
