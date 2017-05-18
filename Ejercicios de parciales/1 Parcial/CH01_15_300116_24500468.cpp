/*	Jos� Andr�s D�az Escobar
	Realizado el 30 de Enero del 2016
	Capturar un registro local de un producto, deber�s solicitar los siguientes datos: clave (alfanum�rica), nombre, 
	cantidad, precio unitario y t� deber�s calcular el subtotal de la existencia en el inventario. 
	Posteriormente deber� imprimir dicha informaci�n con el siguiente formato:

Clave	Cantidad	Nombre		P Unitario		Subtotal
---------------------------------------------------------------------------------------------------
X12x	122	yyyyyyyy		$x.xx		$y.yy
---------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <cstdlib>
#include <string.h>

struct PRODUCTO{
	char clave[100], nombre[100];
	float unitaro, subtotal, cantidad;
};

int main (){
	struct PRODUCTO p;
	printf("Ingrese la clave del producto:");
	gets(p.clave);
	
	printf("Ingrese nombre del producto:");
	gets(p.nombre);
	
	do{
	printf("Ingrese cantidad de producto:");
	scanf("%f", &p.cantidad);
	if(p.cantidad<0)
	printf("No se puede tener una cantidad negativa\n");
	}while(p.cantidad<0);
	
	do{
	printf("Ingrese precio unitario:");
	scanf("%f", &p.unitaro);
	if(p.unitaro<0)
	printf("No se aceptan precios negativos\n");
	}while(p.unitaro<0);
		
	p.subtotal=(p.cantidad*p.unitaro);
	
	printf("Clave\tCantidad\tNombre\tP. Unitario\tSubtotal\n-----------------------------------------------------------\n%s\t\t%.2f\t\t%s\t\t%.2f\t\t%.2f\n", p.clave, p.cantidad,p.nombre,p.unitaro,p.subtotal);
	system("PAUSE");
	return 0;
}


