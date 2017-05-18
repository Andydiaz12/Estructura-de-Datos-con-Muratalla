/*	José Andrés Díaz Escobar
	Realizado el 7 de Febrero del 2016
	1Programa que solicita los siguientes datos de un producto: clave (alfa numérica), 
	nombre, su precio e imprime su precio total (agregándole el IVA 16%). El resultado 
	se presentará de la siguiente manera:

CLAVE		PRODUCTO	PRECIO		IVA	PRECIO FINAL
-----------------------------------------------------------------------------------------------------------------------------------------
9HJ09		Tornillo		$1.00		$0.16	$1.16*/

#include <stdio.h>
#include <string.h>
#include <cstdlib>

struct producto{
	char clave[100], producto[100];
	float precio, final;
};

int main(){
	struct producto a;
	float iva;
	printf("Ingrese la sig informacion del producto\n");
	printf("CLAVE:");
	gets(a.clave);
	printf("NOMBRE:");
	gets(a.producto);

	do{
	printf("PRECIO:");
	scanf("%f", &a.precio);
	if(a.precio<0)
	printf("Precio negativo invalido, ingrese otro precio\n");
	}while (a.precio<0);

	iva=a.precio*.16;
	a.final=(a.precio+iva);
	
	printf("CLAVE\tPRODUCTO\tPRECIO\tIVA\tPRECIO FINAL\n");
	printf("-------------------------------------------------------------------\n");
	printf("%s\t\t%s\t\t%.2f\t\t%.2f\t\t%.2f\n", a.clave, a.producto, a.precio, iva, a.final);
	system ("PAUSE");
	return 0;
}
