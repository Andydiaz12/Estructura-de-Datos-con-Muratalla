/*	José Andrés Díaz Escobar
	Relizado el 9 de Febrero del 2016
	Hacer un programa para llevar el valor del inventario de una pequeña empresa. 
	Para esto será necesario capturar un registro local de tantos productos como desee el usuario. 
	Los datos que solicitarás por  producto son: clave (alfanumérica), nombre, cantidad, precio unitario y 
	tú deberás calcular el subtotal de la existencia en el inventario. 
	Deberás seguirle preguntando al usuario si desea agregar otro producto, cuando 
	decida que ya no, deberás imprimir dicha información con el siguiente formato:

Clave	Cantidad	Nombre		P Unitario		Subtotal
-------------------------------------------------------------------------------------------------
X12x	122	yyyyyyyy		$x.xx		$y.yy  ….
-------------------------------------------------------------------------------------------------
						TOTAL:	$i.ii
NOTA: Reserva un espacio para 10 productos. */

#include <stdio.h>
#include <cstdlib>
#include <string.h>

struct inventario {
	char clave [100], nombre[100];
	float unitario, subtotal, cantidad;
};

int main (){
	struct inventario a[10];
	float suma=0;
	int i, op, j;
	
	for (i=0; i<=10; i++){
		printf("\nIngrese los valores del producto numero %d\n", i+1);
		printf("Clave:");
		gets(a[i].clave);
		printf("Nombre:");
		gets(a[i].nombre);
					do{
					printf("Cantidad:");
					scanf("%f", &a[i].cantidad);
					if(a[i].cantidad<0)
					printf("\nNo se puede tener cantidad negativa\n");
					}while (a[i].cantidad<0);
																	do{
																	printf("Precio unitario:");
																	scanf("%f", &a[i].unitario);
																	if(a[i].unitario<1)
																	printf("\nEl precio minimo es 1\n");
																	}while(a[i].unitario<1);
																	a[i].subtotal=(a[i].unitario*a[i].cantidad);
		suma=suma+(a[i].cantidad*a[i].unitario);
do{
printf("\n\nSi desea imprimir otro producto presionar 1\nSi desea imprimir menu presionar 2\n");
scanf("%d", &op);

	if(op == 1){
		if(op == 10)
		printf("\n\nMemoria llena, se imprimiran los resultados\n\n");
	}
	else if (op == 2){
		j=i;
		i=20;
	}
	else
	printf("Opcion del menu invalida\n");
}while(op != 1 && op != 2);
getchar();
	}
	printf("CLAVE\tCANTIDAD\tNOMBRE\tP UNITARIO\tSUBTOTAL\n");
	printf("----------------------------------------------------\n");
	for(i=0; i<=j; i++){
	printf("%s\t%.0f\t%s\t%.2f\t%.2f\n", a[i].clave, a[i].cantidad, a[i].nombre, a[i].unitario, a[i].subtotal );
	}
printf("El total a pagar es:\t%.2f", suma);
system ("PAUSE");
	return 0;
}
