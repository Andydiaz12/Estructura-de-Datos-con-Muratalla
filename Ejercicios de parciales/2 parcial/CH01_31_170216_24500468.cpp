/*	José Andrés Díaz Escobar
	17 de Febrero del 2016
	31.	Realizar un programa en C que (arch6):
1)	Abra un archivo o que lo cree si es necesario (ejercicio26.txt), que me diga que ya lo abrió. 
2)	Que me guarde en el archivo el siguiente triángulo (utiliza sentencias de repetición):
*
**
***
****
*****
******
*******
********
*********
**********
3)	Que lo cierre.*/

#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <stdlib.h>

int main (){
	FILE *puntero;
	char asterisco[100];
	int x;
	puntero = fopen("ejercicio26.txt", "w");


		printf("El archivo ha sido abierto\n");
		 printf("\n\nIngrese la altura para el triangulo\n");
 scanf("%d", &x);
 
 for(int i=0; i <= x; i++){
         fprintf(puntero, "\n");
         for(int p=0; p<i; p++){
                 fprintf(puntero, "*"); 
                 }
                 }
	
	
	system ("PAUSE");
	return 0;
}

