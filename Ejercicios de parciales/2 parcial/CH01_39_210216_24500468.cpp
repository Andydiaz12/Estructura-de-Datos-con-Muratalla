/*	Jos� Andr�s D�az Escobar
	21 de Febrero del 2016
	39.	Realizar un programa en C que contar� cuantas llaves tienes en un programa. 
	Para esto deber� existir un archivo llamado programa.txt (en el que tendr�s el c�digo del programa 38). 
	Tu programa deber� abrir el archivo, contar cuantas llaves que abren y cuantas llaves que cierran tiene tu programa e imprimirlo en pantalla.*/
	
#include<stdio.h>
#include<cstdlib>

int main(){
	FILE *puntero;
	char signo;
	int a=0, b=0;
	puntero=fopen("programa.txt", "r");
	if(puntero == NULL)
	printf("El archivo no existe\n");
	
	else{
		while(feof(puntero)== 0){
		
		signo=fgetc(puntero);
		if(signo == '{')
		a++;
		else if (signo == '}')
		b++;
		}
		printf("Hay %d signos de {\nHay %d signos de }", a, b);
		
			
	}
	fclose(puntero);
system("PAUSE");
return 0;
}
