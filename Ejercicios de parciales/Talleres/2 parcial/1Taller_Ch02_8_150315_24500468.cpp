/*	Jos� Andr�s D�az Escobar
	15 de Marzo del 2016
	Har�s un programa en C que abrir� el archivo SH_id.txt y al final vas a escribir los datos de 5 alumnos 
	(nombre, matr�cula, parcial 1, parcial 2, parcial 3, promedio -> t� debes calcularlo) que almacenar�s en una estructura de datos y se los pedir�s al usuario.*/
	
#include <stdio.h>
#include <cstdlib>

struct alumnos{
	int matricula;
	char Nombre[100];
	float parcial[3], promedio;
};

int matricula(){
	int x;
		printf("Ingresar matricula:\t");
		do{
		scanf("%d", &x);
		if(x<=0)
		printf("La matricula es un numero mayor a 0\nIngrese matricula:\t\n");
	}while(x<=0);
	return x;
}

float parciales(int a){
	float x;
	printf("Ingrese calificacion del %d parcial:\t", a+1);
	do{
		scanf("%f", &x);
		if(x<0 || x>10)
		printf("Las calificaciones son entre 0 y 10\n\tIngrese la calificacion:\t\n");
	}while(x<0 || x>10);
	return x;
}



float promedio(float a, float b, float c){
	float prom;
	prom=(a+b+c)/3;
	return prom;
}

int main(){
	FILE *puntero;
	struct alumnos DATOS[5];
	int i;
	char N[100];
	
	puntero=fopen("SH_id.txt", "w");
	if (puntero == NULL)
	printf("Archivo no encontrado\n");
	else{
		while(feof(puntero) == 0){
			for(i=0;i<=4;i++){
				
				for(int p=0; p<4; p++){
					DATOS[i].parcial[p]=parciales(p);
				}
				getchar();
				DATOS[i].promedio=promedio(DATOS[i].parcial[0], DATOS[i].parcial[1], DATOS[i].parcial[2]);
			}
			fprintf(puntero, "MATRICULA\tPARCIAL 1\tPARCIAL 2\tPARCIAL 3\tPROMEDIO\n");
						for(i=0;i<=4; i++){
							fprintf(puntero, "%d\t%.2f\t%.2f\t.2f\t.2f\n", DATOS[i].matricula, DATOS[i].parcial[0], DATOS[i].parcial[1], DATOS[i].parcial[2], DATOS[i].promedio[i]);
						}
		}
	}
	fclose(puntero);
	system("PAUSE");
	return 0;
}
