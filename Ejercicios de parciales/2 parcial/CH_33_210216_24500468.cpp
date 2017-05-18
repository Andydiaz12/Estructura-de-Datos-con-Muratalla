/*	José Andrés Díaz Escobar
	21 de Febrero del 2016
	Realizar un programa en C que abra el archivo RJ.txt y me diga cuantas líneas tiene. (arch8).*/
	
#include <stdio.h>
#include <cstdlib>

int main (){
	FILE *puntero;
	char espacio;
	int contador=0;
	puntero= fopen("RJ.txt", "r");
	if(puntero == NULL)
	printf("El archivo no existe\n");
	
	else{
		while(feof(puntero) == 0){
			espacio = fgetc(puntero);
			if(espacio == '\n')
			contador++;
		}
		printf("El archivo tien %d lineas\n", contador);
	}
	fclose(puntero);
	system("PAUSE");
	return 0;
}
