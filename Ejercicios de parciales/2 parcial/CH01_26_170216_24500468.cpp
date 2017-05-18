/*	José Andrés Díaz Escobar
	17 de Febrero del 2016
	26.	Realizar un programa en C que (arch2):
1)	Abra un archivo (pruebacreada.txt), el cual no es necesario que exista, que me diga que ya lo creó de ser necesario. 
2)	Que lo cierre.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>

int main(){
	FILE *puntero;
	
	puntero = fopen("pruebacreada.txt", "r");
	if (puntero == NULL){
		puntero = fopen("pruebacreada.txt", "w");
		printf("El archivo ha sido creado\n");
	}
	else{
		printf("El archivo ya exisitia\n");
	}
	fclose(puntero);
	system("PAUSE");
	return 0;
}

