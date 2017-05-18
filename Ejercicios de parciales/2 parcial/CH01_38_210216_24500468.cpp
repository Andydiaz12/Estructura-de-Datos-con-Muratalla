/*	José Andrés Díaz Escobar
	21 de Febrero del 2016
	38.	Realizar un programa en C que guarde la nómina de la empresa Embotelladora de Puebla AC. 
	Por lo que deberás guardar (usando un arreglo de estructuras) los datos de 2 supervisores 
	(nombre completo, antigüedad, área y sueldo) y de 3 obreros (nombre completo, antigüedad, área y sueldo) y 
	además deberás calcular el total de sueldos. Estos datos deberás guardarlos en forma de tabla 
	en un archivo que se llame ejercicio29.txt. */
	
#include <stdio.h>
#include <cstdlib>
	
struct obreros {
	char nombre[100], area[100];
	int antiguedad;
	float sueldo;
};

struct supervisor{
	char nombre[100], area[100];
	int antiguedad;
	float sueldo;
};

int main(){
	struct obreros o[3];
	struct supervisor s[2];
	int i;
	FILE *puntero;
	
	puntero=fopen("ejercicio29.txt", "w");
	for (i=0; i<2; i++){
		printf("Ingrese los datos del supervisor numero %d\n", i+1);
							printf("Nombre:\t");
							gets(s[i].nombre);
							do{
							printf("Antiguedad:\t");
							scanf("%d", &s[i].antiguedad);
							if(s[i].antiguedad<0)
							printf("Antiguedad menor a 0 anios invalida\n");
						}while(s[i].antiguedad<0);
						getchar();
						printf("Area:\t");
						gets(s[i].area);
						do{
						printf("Sueldo:\t");
						scanf("%f", &s[i].sueldo);
						if (s[i].sueldo < 0)
						printf("Sueldo menor a 0 invalido\n");
					}while(s[i].sueldo < 0);
					getchar();
	}
		for (i=0; i<3; i++){
		printf("Ingrese los datos del obrero numero %d\n", i+1);
							printf("Nombre:\t");
							gets(o[i].nombre);
							do{
							printf("Antiguedad:\t");
							scanf("%d", &o[i].antiguedad);
							if(o[i].antiguedad<0)
							printf("Antiguedad menor a 0 anios invalida\n");
						}while(o[i].antiguedad<0);
						getchar();
						printf("Area:\t");
						gets(o[i].area);
						do{
						printf("Sueldo:\t");
						scanf("%f", &o[i].sueldo);
						if (o[i].sueldo < 0)
						printf("Sueldo menor a 0 invalido\n");
					}while(o[i].sueldo < 0);
					getchar();
	}
	
				fprintf(puntero, "Supervisores\n");
				fprintf(puntero, "Nombre\t Antiguedad\t Area\t Sueldo\n");
			fprintf(puntero, "--------------------------------------------------\n");
		for (i=0; i<2; i++){
fprintf(puntero, "%s\t %d\t %s\t %.2f\n", s[i].nombre, s[i].antiguedad, s[i].area, s[i].sueldo);
		}
		fprintf(puntero, "Obreros\n");
				fprintf(puntero, "Nombre\t Antiguedad\t Area\t Sueldo\n");
			fprintf(puntero, "--------------------------------------------------\n");
		for (i=0; i<3; i++){
fprintf(puntero, "%s\t %d\t %s\t %.2f\n", o[i].nombre, o[i].antiguedad, o[i].area, o[i].sueldo);
		}
	
	printf("Datos vaciados en notepad\n");
	system("PAUSE");
	return 0;
}
