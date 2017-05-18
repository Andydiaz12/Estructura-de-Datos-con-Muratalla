/*	José Andrés Díaz Escobar
	25 de Enero del 2016
	En un determinado comercio, se realiza un descuento dependiendo del precio de cada producto.
	Si el precio es inferior a $1000, no se hace descuento; si es mayor o igual a $1000 y menor que $10000,
	se hace un 5% de descuento, y si es mayor o igual a $10000, se hace un 10% de descuento. 
	Hacer un programa que lee el precio de un producto y nos calcula y escribe su precio final.*/
	
#include <stdio.h>
#include <cstdlib>

int main(){
	float x;
	char p='%';
	printf("Ingrese el precio del producto\n");
	scanf("%f", &x);
	
	if(x<1000)
	printf("No entra en descuento, el precio permanece en %.2f pesos\n", x);
	if(x>=1000 && x<10000)
	printf("El producto tiene 5%c de descuento, baja de %.2f a %.2f\n", p, x,  x*.95);
	else
	printf("El producto tiene un 10%c de descuento, baja de %.2f a %.2f\n", p, x, x*.9);
	system ("PAUSE");
	return 0;
}

