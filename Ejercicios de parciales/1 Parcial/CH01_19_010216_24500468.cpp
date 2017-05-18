/*	José Andrés Díaz Escobar
	Realizado el 1 de Febrero del 2016
	Hacer un programa que solicite la matrícula, el nombre completo (apellido y nombre), calificación del 1er, 
	2do y 3er parcial y que calcule el promedio PARA DOS ALUMNOS.  También deberás imprimir el promedio de los 
	promedios de los alumnos. Posteriormente deberá imprimir dicha información con el siguiente formato:

APELLIDO	NOMBRE	 	MATRÍCULA	NOTA 1	NOTA 2	NOTA 3	PROMEDIO
-----------------------------------------------------------------------------------------------------------------------------------------
Juarez		Pepito		9879980		10.00	8.00	8.00	8.60
Perez		Pepito		9879981		10.00	10.00	7.00	9.00
-----------------------------------------------------------------------------------------------------------------------------------------
PROMEDIO: 8.80*/

#include <stdio.h>
#include <string.h>
#include <cstdlib>

struct estudiantes{
	char a[100], n[100];
	int mat;
	float n1, n2, n3, promedio;
};

int main (){
	struct estudiantes a,b;
	float prom;
	do{
		printf("Ingrese matricula del 1er alumno:");
		scanf("%d", &a.mat);
		if(a.mat<=0)
		printf("La matricula debe de ser un numero mayor a 0\n");			
	}while (a.mat<=0);
	
	printf("Ingrese apellido del 1er alumno:");
	scanf("%s", &a.a);
	
	printf("Ingrese nombre del 1er alumno:");
	scanf("%s", &a.n);
	
	do{
		printf("Ingrese la 1ra nota del 1er alumno:");
		scanf("%f", &a.n1);
		if(a.n1<0 || a.n1>10)
		printf("\nLa calificacion debe ser entre 0 y 10\n");
	}while (a.n1<0 || a.n1>10);
	do{
		printf("Ingrese la 2da nota del 1er alumno:");
		scanf("%f", &a.n2);
		if(a.n2<0 || a.n2>10)
		printf("\nLa calificacion debe ser entre 0 y 10\n");
	}while (a.n2<0 || a.n2>10);
	
	do{
		printf("Ingrese la 3ra nota del 1er alumno:");
		scanf("%f", &a.n3);
		if(a.n3<0 || a.n3>10)
		printf("\nLa calificacion debe ser entre 0 y 10\n");
	}while(a.n3<0 || a.n3>10);
	
	a.promedio=(a.n1+a.n2+a.n3)/3;
	
	
	do{
		printf("\n\nIngrese matricula del 2do alumno:");
		scanf("%d", &b.mat);
		if(b.mat<=0)
		printf("La matricula debe de ser un numero mayor a 0\n");			
	}while (b.mat<=0);
	
	printf("Ingrese apellido del 2do alumno:");
	scanf("%s", &b.a);
	
	printf("Ingrese nombre del 2do alumno:");
	scanf("%s", &b.n);
	
	do{
		printf("Ingrese la 1ra nota del 2do alumno:");
		scanf("%f", &b.n1);
		if(b.n1<0 || b.n1>10)
		printf("\nLa calificacion debe ser entre 0 y 10\n");
	}while (b.n1<0 || b.n1>10);
	do{
		printf("Ingrese la 2da nota del 2do alumno:");
		scanf("%f", &b.n2);
		if(b.n2<0 || b.n2>10)
		printf("\nLa calificacion debe ser entre 0 y 10\n");
	}while (b.n2<0 || b.n2>10);
	
	do{
		printf("Ingrese la 3ra nota del 1er alumno:");
		scanf("%f", &b.n3);
		if(b.n3<0 || b.n3>10)
		printf("\nLa calificacion debe ser entre 0 y 10\n");
	}while(b.n3<0 || b.n3>10);
	
	b.promedio=((b.n1+b.n2+b.n3)/3);	
	prom=((a.promedio+b.promedio)/2);
	printf("APELLIDO\tNOMBRE\tMATRICULA\tNOTA 1\tNOTA 2\tNOTA 3\tPROMEDIO\n");
	printf("----------------------------------------------------------------------\n");
	printf("%s\t%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n", a.n, a.a, a.mat, a.n1, a.n2, a.n3, a.promedio);
	printf("%s\t%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n", b.n, b.a, b.mat, b.n1, b.n2, b.n3, b.promedio);
	printf("---------------------------------------------------------------------\n");
	printf("Promedio de los alumnos: %.2f", prom);
	system("PAUSE");
	return 0;
}
