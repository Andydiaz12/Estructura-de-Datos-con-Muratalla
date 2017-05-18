/*	José Andrés Díaz Escobar
	Realizado el 6 de febrero del 2016
	Hacer el programa para llevar la nómina de la empresa privada X. Para esto es necesario que pidas los 
	datos de los empleados (considera que es una pequeña empresa por lo que reserva 10 espacios): nombre, 
	apellido paterno, apellido materno, clave, antigüedad, departamento y sueldo.
	Deberás preguntarle al usuario si desea agregar empleado e indicarle si ya no tienes espacio. 
	En el momento que ya no desee agregar datos o se haya llenado la memoria deberás imprimir la 
	información como se muestra a continuación y obtener el total de la nómina y el sueldo promedio, 
	así como los datos del empleado que más gana y el que menos gana.

CLAVE	DEPTO	AP PATERNO	AP MATERNO	NOMBRE		ANTIG		SUELDO
--------------------------------------------------------------------------------------------------------------------------------------------------
…
--------------------------------------------------------------------------------------------------------------------------------------------------
TOTAL DE LA NÓMINA: $X.XX
SUELDO PROMEDIO: $Y.YY
EL EMPLEADO QUE MAS GANA: 	Juan Perez Perez 	$60,000.00
EL EMPLEADO QUE MAS GANA: 	José Lopez Lopez 	$6,000.00 */

#include <stdio.h>
#include <cstdlib>
#include <string.h>

struct empresa {
	char nom[100], pat[100], mat[100], clave[100], dep[100];
	int tiempo;
	float sueldo;
};

int main (){
	int i, j, op, p=0, m=0;
	float mayor=0.0, menor=10000000000000000000000.0, total, promedio, antemenor;
	struct empresa arr[10];
	char X= '$';
	for(i=0; i<=9; i++){
		printf("\nIngrese los datos del empleado numero %d\n", i+1);
		printf("Nombre:");
		gets(arr[i].nom);
		printf("Apellido paterno:");
		gets(arr[i].pat);
		printf("Apellido materno:");
		gets(arr[i].mat);
		printf("Clave:");
		gets(arr[i].clave);
			do{
			printf("Antiguedad:");
			scanf("%d", &arr[i].tiempo);
			if(arr[i].tiempo<0)
			printf("Tiempo negativo invalido\n");
			}while(arr[i].tiempo<0);
		getchar();
		printf("Departamento:");
		gets(arr[i].dep);
		
			do{
			printf("Sueldo:");
			scanf("%f",&arr[i].sueldo);
			if(arr[i].sueldo>mayor){
				mayor=arr[i].sueldo;
				m=i;
			}
				else if(arr[i].sueldo<arr[i-1].sueldo) {
				antemenor=arr[i].sueldo;
		
																					if(antemenor<menor)
																					menor=antemenor;
																					p=i;
																								
			}
			if (arr[i].sueldo<0)
			printf("Sueldo negativo invalido\n");
			}while(arr[i].sueldo<0);
				
			total= total + arr[i].sueldo;
	do{
	printf("\nSi desea ingresar a otro empleado presionar 1\nSi desea ver la tabla de empleados presionar 2\n");
	scanf("%d", &op);
	if (op == 2){
		j=i;
		i=10;
	}
	else if (op == 1){
		if (i == 9)
		printf("Memoria llena, se imprimiran los resultados\n");
	}
	else
	printf("Opcion no valida\n");
	}while(op != 1 && op!= 2);
	getchar();
}

promedio= (total/(j+1));
	
	printf("CLAVE\t\tDPTO\tAP PATERNO\tAP MATERNO\tNOMBRE\tANTIG\tSUELDO\n");
	printf("--------------------------------------------------------------------------------\n");
	for(i=0; i<=j; i++){
		printf("%s\t%s\t%s\t%s\t%s\t%d\t%.2f\n", arr[i].clave, arr[i].dep, arr[i].pat, arr[i].mat, arr[i].nom, arr[i].tiempo, arr[i].sueldo);
	}
	printf("--------------------------------------------------------------------------------\n");
	printf("\nTotal de la nomina: %c%.2f", X, total);
	printf("\nSueldo promedio: %c%.2f",X, promedio);

	printf("\nEl empleado que mas gana es: %s %s %s --- %c%.2f", arr[m].nom, arr[m].pat, arr[m].mat, X, mayor);
	printf("\nEl empleado que menos gana es: %s %s %s --- %c%.2f", arr[p].nom, arr[p].pat, arr[p].mat, X, menor);
	system ("PAUSE");
	return 0;
}
