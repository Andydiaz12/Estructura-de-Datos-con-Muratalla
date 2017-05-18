/*	José Andrés Díaz Escobar
	17 de Febrero de 2016
	Realizar un programa en C que (arch1):
1)	Abra un archivo (prueba.txt) que YA exista, que me diga que ya lo abrió. Si NO existe me debe decir que hubo un error y que no existe.
2)	Que lo cierre.
NOTA: Para que el programa te reconozca el archivo deberás guardar el prueba.txt en la misma carpeta donde esté el .cpp.*/

#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <stdlib.h>

int main(){
	
	FILE *puntero;
	
	puntero= fopen("prueba.txt", "r");
	if(puntero == NULL)
		printf("ERROR, el archivo no existe\n");
	
	else {
		printf("El archivo se ha abierto\n");
	}
		fclose (puntero);
	system("PAUSE");
	return 0;
}
