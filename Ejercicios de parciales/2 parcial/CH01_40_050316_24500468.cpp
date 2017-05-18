/*	José Andrés Díaz Escobar
	5 de Marzo del 2016
	Realizar un programa en el que se abra el archivo SH_eng.txt (bajarlo del BB) y lo 
	van a copiar en un archivo llamado CopySH_eng.txt en el que van a escribir un enter ('\n') 
	en lugar del 5º espacio encontrado. Vas a realizar esta acción en TODO el archivo hasta que llegues al final (arch13).*/
	
#include <stdio.h>
#include <cstdlib>

int main(){
	FILE*puntero;
	FILE*segundo;
	char signo;
	int c=0;
	
	puntero=fopen("SH_eng.txt", "r");
	
	if(puntero== NULL)
	printf("El archivo no existe\n");
	else{
		segundo=fopen("CopySH_eng.txt", "w");
		while (feof(puntero) == 0){
		signo=fgetc(puntero);
			fputc(signo, segundo);
		if(signo == ' '){
			c++;
			if(c == 5){
			fputc('\n', segundo);
			c=0;
		}
		}	
		}
	}
	fclose(segundo);
	fclose(puntero);
	system("PAUSE");
	return 0;
}
