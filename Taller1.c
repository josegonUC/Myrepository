#include <stdio.h>

#define PB 50.0
#define PT 80.0

int main(){
	int numMB=0, numMT=0, tot_clienDesc=0, num_client, i, typeComp, timeB, timeT, no_desc;
	float tot_desc=0.0, tot_comp=0.0, tot_ingres=0.0;

	printf("ingrese el numero de clientes\n");
	scanf("%d", &num_client);

	for ( i = 1; i <= num_client; ++i){
	
		printf("\nCliente %d\n", i);
		printf("¿Que tipo de maya compro? (1 para beisbol, 2 para tenis): ");
		scanf("%i", &typeComp);

		if(typeComp == 1){
			printf("¿Hace cuantos años compra mayas para beisbol?: \n");
			scanf("%d", &timeB);

			float pCompra = PB;
			if(timeB > 5 && timeB <= 15){

				pCompra *= 0.92;
				tot_clienDesc++;
				tot_desc += 0.08 * PB;

			}else if(timeB > 15){

				pCompra *= 0.7;
				tot_clienDesc++;
				tot_desc += 0.30 * PB;

			}else if(timeB <= 5){
                no_desc++;
            }

			numMB++;
			tot_comp += pCompra;
			tot_ingres += pCompra;

		}else if(typeComp == 2){

			printf("¿Hace cuantos años compra mayas para tenis?\n");
			scanf("%d", &timeT);

			float pCompra = PT;
			if(timeT > 0){

				pCompra *= 0.94;
				tot_clienDesc++;
				tot_desc += 0.06 * PT;
			}else  if(timeT <= 5){
                no_desc++;
            }

			numMT++;
			tot_comp += pCompra;
			tot_ingres += pCompra;
           
		}
	}

	printf("\nResumen de Ventas:\n");
	printf("- Cantidad de mayas para beisbol vendidas: %d\n", numMB);
	printf("- Cantidad de mayas para tenis vendidas: %d\n", numMT);
	printf("- Ingreso total de la empresa: %.2f$\n", tot_ingres);
	printf("- Total de clientes que obtuvieron descuento: %d\n", tot_clienDesc);
	printf("- Total de descuentos: %.2f$\n", tot_desc);
    printf("- Total de personas sin descuento: %d\n", no_desc);
	printf("- Total de Compras: %.2f$\n", tot_comp);
    if(numMB > numMT){
		printf("- Se vendieron mas las mayas de Beisbol\n");
	}else{
		printf("- Se vendieron mas las mayas de Tenis\n");
	}

	return 0;
}