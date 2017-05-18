/*	José Andrés Díaz Escobar
	17 de Febrero del 2016
	Realizar un programa en C que (arch7):
1)	Abra un archivo que YA exista (War.txt), que me diga que ya lo abrió. Si NO existe me debe decir que hubo un error y que no existe.
2)	Que me diga cuantos ' ' (espacios) hay en el archivo.
3)	Que lo cierre.*/

#include <stdio.h>
#include <string.h>
#include <cstdlib>

int main(){
	
	FILE *puntero;
	char cadena;
	int contador=0;
	
	puntero =fopen("war.txt", "r");
	if(puntero == NULL){
		printf("ERROR, el archivo NO existe\n");
	}
	else{
		while(feof(puntero) == 0){
			cadena = fgetc(puntero);
			if(cadena == ' ')
			contador= contador +1;
		}
		printf("Hay %d espacios\n", contador);
	}
	
	fclose(puntero);
	system ("PAUSE");
	return 0;
}
