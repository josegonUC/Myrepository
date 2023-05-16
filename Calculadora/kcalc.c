#include<stdio.h>

float suma(int num1, int num2);
float resta(int num1, int num2);
float multipli(int num1, int num2);
void division(float num1, float num2);
void menu();

float num1, num2;

int main(){
  char op;
  float Menu;

  menu();

  return 0;
}

void menu(){

  char operador, rp;
  float num1, num2;

  do{
    do{
      printf("\n\nBienvenido a la calculadora de facyt en su versión (Alpha) elija una de las siguientes opciones según su requerimiento:\n\n - A. Suma\n - B. Resta\n - C. Multiplicación\n - D. División\n\n");
      scanf("\t%c", &operador);

      printf("Ingrese los numeros que va a operar: \n\n");
      scanf("\t%f %f", &num1, &num2);

      switch (operador){
      case 'a':
        suma(num1,num2);
        printf("El resultado de la suma es: %.2f\n", suma(num1,num2));
        break;

      case 'b':
        resta(num1,num2);
        printf("El resultado de la resta es: %.2f\n", resta(num1,num2));
        break;

      case 'c':
        multipli(num1,num2);
        printf("El resultado de la multiplicación es: %.2f\n", multipli(num1,num2));
        break;

      case 'd':
        division(num1,num2);
        break;
    
      default:
        printf("\n\n ERROR ¡La operación es Invalida! ");
        break;
      }
    }while((operador != 'a') && (operador != 'b') && (operador != 'c') && (operador != 'd'));

    printf("¿ Desea continuar la opración ? (S) Si - (N) No\n");
    scanf("\t%c", &rp);
  } while (rp == 's');

  printf("Ha finalizado la operación\n");
}

float suma(int num1, int num2){

  int sum;

  sum = num1 + num2;

  return sum;
}

float resta(int num1, int num2){

  int rest;

  rest = num1 - num2;

  return rest;
}

float multipli(int num1, int num2){

  int multi;

  multi = num1 * num2;

  return multi;
}

void division(float num1, float num2){

  float div;

  if(num2 != 0){
    div = num1 / num2;
    printf("El resultado de la división es: %.2f\n", div);
  }else{
    printf("NO SE PUEDE DIVIDIR ENTRE 0\n");
  }
  //no
}
