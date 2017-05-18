/*	José Andrés Díaz Escobar
	Realizado el 9 de Febrero del 2016
	Escribir un programa que solicite los datos para el registro del IFE de cinco personas. 
	Deberán solicitarle al usuario: Nombre completo, dirección, ciudad, CP (entero), 
	años que ha vivido en dicho domicilio (entero) y registrar el comprobante domiciliario que presentó. 
	Deberás preguntarle al usuario si desea continuar o desea salir.

La impresión será de la siguiente manera:

NOMBRE	DIRECCIÓN	CIUDAD	CP 	ANIOS		COMPROBANTE
------------------------------------------------------------------------------------------
JUAN PEREZ	22 SUR #8	PUEBLA	72000	20		LUZ
…
------------------------------------------------------------------------------------------
Promedio de anios 21.*/

#include <stdio.h>
#include <cstdlib>
#include <string.h>

struct IFE{
	char nombre [100], direccion[100], ciudad[100], comprobante[100];
	int anios, codigo;
};

int main(){
	struct IFE p[5];
	int i;
	float promedio = 0.0;
	for(i=0; i<=4;i++){
	printf("Ingrese los valores de la persona numero %d\n", i+1);
	printf("Nombre completo:");
	gets(p[i].nombre);
	printf("Direccion:");
	gets(p[i].direccion);
	printf("Ciudad:");
	gets(p[i].ciudad);
							do{
							printf("Codigo postal:");
							scanf("%d", &p[i].codigo);
							if(p[i].codigo < 1)
							printf("\nEl codigo debe ser mayor a uno\n");
							}while(p[i].codigo < 1);
																				do{
																				printf("Anios en el domicilio:");
																				scanf("%d", &p[i].anios);
																				if(p[i].anios<0)
																				printf("\nNo se pueden tener anios negativos\n");
																			}while(p[i].anios<0);
	getchar();
	printf("Comprobante:");
	gets(p[i].comprobante);
	promedio=promedio + p[i].anios;
	if (i == 4)
	printf("\n\nDatos completos, se imprimira la tabla\n\n\n\n");
}
promedio=(promedio/5);
printf("NOMBRE\tDIRECCION\tCIUDAD\tCP\tANIOS\tCOMPROBANTE\n");
printf("------------------------------------------------------\n");
for (i=0; i<=4; i++){
	printf("%s\t%s\t%s\t%d\t%d\t%s\n", p[i].nombre, p[i].direccion, p[i].ciudad, p[i].codigo, p[i].anios, p[i].comprobante);
}
printf("El promedio de anios es de %.1f", promedio);
	return 0;
}
