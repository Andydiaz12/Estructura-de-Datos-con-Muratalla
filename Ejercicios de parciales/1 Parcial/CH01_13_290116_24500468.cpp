/*	José Andrés Díaz Escobar
	Realizado el dia 29 de Enero del 2016
	Hacer un programa que solicite la matrícula, el nombre completo (apellido y nombre), calificación del 1er, 2do y 3er parcial y que calcule el promedio de dicho alumno. Posteriormente deberá imprimir dicha información con el siguiente formato:

APELLIDO	NOMBRE	 	MATRÍCULA	NOTA 1	NOTA 2	NOTA 3	PROMEDIO
-----------------------------------------------------------------------------------------------------------------------------------------
Juarez		Pepito		9879980		10.00	8.00	8.00	8.60

NOTA: Las calificaciones y el promedio deberán ser impresos en pantalla dos decimales.*/

#include <stdio.h>
#include <cstdlib>
#include <string.h>

struct alumno{
	char nombre[100], apellido [100];
	float primer, segundo, tercero, promedio;
	int matricula;
};

int main (){
	struct alumno ALUMNO;
	
	do{
	printf("Ingrese la matricula del alumno:");
	scanf("%d", &ALUMNO.matricula);
	if(ALUMNO.matricula<=0)
	printf("La matricula debe ser mayor a 0");
	}while (ALUMNO.matricula<=0);
	
	getchar();
	printf("Ingrese apellido paterno:");
	gets(ALUMNO.apellido);
	printf("Ingrese nombre:");
	gets(ALUMNO.nombre);
	
	do{
	printf("Ingrese calificacion del 1er parcial:");
	scanf("%f", &ALUMNO.primer);
	if(ALUMNO.primer<0 || ALUMNO.primer>10)
	printf("\nLa calificacion debe ser entre 0 y 10\n");
	
	}while(ALUMNO.primer<0 || ALUMNO.primer>10);
	
	do{
	printf("Ingrese calificacion del 2do parcial:");
	scanf("%f", &ALUMNO.segundo);
	if(ALUMNO.segundo<0 || ALUMNO.segundo>10)
	printf("\nLa calificacion debe ser entre 0 y 10\n");
	}while(ALUMNO.segundo<0 || ALUMNO.segundo>10);
	
	do{
	printf("Ingrese calificacion del 3er parcial:");
	scanf("%f", &ALUMNO.tercero);
		if(ALUMNO.tercero<0 || ALUMNO.tercero>10)
	printf("\nLa calificacion debe ser entre 0 y 10\n");
	}while(ALUMNO.tercero<0 || ALUMNO.tercero>10);
	
	ALUMNO.promedio=(ALUMNO.primer+ALUMNO.segundo+ALUMNO.tercero)/(3);
	printf("\n\nAPELLIDO     NOMBRE     MATRICULA     NOTA1     NOTA2     NOTA3     PROMEDIO\n-----------------------------------------------------------------------------\n%s      %s      %d      %.2f        %.2f        %.2f        %.2f\n",ALUMNO.apellido, ALUMNO.nombre, ALUMNO.matricula, ALUMNO.primer, ALUMNO.segundo, ALUMNO.tercero, ALUMNO.promedio);
	system("PAUSE");
	return 0;
}
