/*	José Andrés Díaz Escobar
	5 de Marzo del 2016
	Hacer un programa que llevará la relación de supervisores y obreros de la empresa Z. 
	Para esto deberás guardar los siguientes datos de tres supervisores: clave de empleado, 
	área, nombre completo, número de empleados a su cargo, turnos que administra.
Para dos obreros deberás solicitar: clave del empleado, área, turno en el que trabaja y máquina que utiliza.
Posteriormente imprimirás los datos de la siguiente manera:

SUPERVISORES DE LA EMPRESA Z.
--------------------------------------------------------------------------------------------------------
CLAVE	ÁREA		NOMBRE		NO. EMPLEADOS		TURNOS
--------------------------------------------------------------------------------------------------------
25J9		CORTE		JUAN LOPEZ	5			2
…
--------------------------------------------------------------------------------------------------------
PROMEDIO DE EMPLEADOS: 6


OBREROS DE LA EMPRESA Z.
--------------------------------------------------------------------------------------------------------
CLAVE	ÁREA		NOMBRE		TURNO		MÁQUINA
--------------------------------------------------------------------------------------------------------
25J9	9	CORTE		PEPE ZAPATA	1		BROTHER 360
…
--------------------------------------------------------------------------------------------------------

NOTA: Debes hacer dos estructuras una para supervisores y otra para obreros.
Solo existen 3 turnos: el 1º, 2º y 3er

"	Hacer  una función para llenar los datos del supervisor y otra para los obreros.
"	Hacer una función para imprimir la tabla supervisor y otra para los obreros.
"	Hacer una función para obtener el promedio de empleados por supervisor.*/

#include <cstdlib>
#include <stdio.h>

struct supervisor{
	char clave[50], area[50], nombre[50];
	int empleados, turnos;
};

struct obreros{
	char clave[50], area[50], maquina[50], nombre[50];
	int turno;
};

void promedio(supervisor(*a)[3]){
	int suma=0, x=0, promedio;
	for(x; x<3; x++){
		suma=(suma+(*a)[x].empleados);
	}
	promedio=suma/3;
	printf("\nEl promedio de empleados por obreros es de %d\n", promedio);
}

void tabla_supervisores(supervisor(*a)[3]){
	printf("Los datos de los supervisores son:\n");
	printf("Clave\tArea\tNombre\tEmpleados\tTurnos\n");
	printf("-----------------------------------------\n");
	for(int i=0; i<3; i++){
	printf("%s\t%s\t%s\t%d\t%d\n", (*a)[i].clave, (*a)[i].area, (*a)[i].nombre, (*a)[i].empleados, (*a)[i].turnos);
}
}

void tabla_obreros(obreros(*a)[2]){
	printf("Los datos de los obreros son:\t");
	printf("Clave\tArea\tNombre\tTurno\tMaquina\n");
	printf("------------------------------------------\n");
	for(int i=0; i<2; i++){
		printf("%s\t%s\t%s\t%d\t%s\n", (*a)[i].clave, (*a)[i].area, (*a)[i].nombre, (*a)[i].turno, (*a)[i].maquina);
	}
}

void llenado_supervisor(supervisor(*a)[3]){
	for(int i=0; i<3; i++){
		printf("Ingrese los datos del supervisor numero %d\n",i+1);
		printf("Clave:\t");
		gets((*a)[i].clave);
		printf("Area:\t");
		gets((*a)[i].area);
		printf("Nombre:\t");
		gets((*a)[i].nombre);
		do{
			printf("Empleados:\t");
			scanf("%d", &(*a)[i].empleados);
			if((*a)[i].empleados<0)
			printf("El numero de empleados debe de ser positivo\n");
		}while((*a)[i].empleados<0);
		do{
			printf("Turnos:\t");
			scanf("%d", &(*a)[i].turnos);
			if((*a)[i].turnos<1 || (*a)[i].turnos > 3)
			printf("El numero debe de ser entre 1 y 3\n");
		}while((*a)[i].turnos < 1 || (*a)[i].turnos > 3);
		getchar();
	}
}

void llenado_obreros(obreros(*a)[2]){
	for (int i=0; i<2; i++){
		printf("Ingrese los valores del obrero numero %d\n", i+1);
		printf("Clave:\t");
		gets((*a)[i].clave);
		printf("Area:\t");
		gets((*a)[i].area);
		do{
		printf("Turno:\t");
		scanf("%d", &(*a)[i].turno);
		if((*a)[i].turno<1 || (*a)[i].turno > 3)
		printf("El turno debe ser entre 1 y 3\n");
	}while((*a)[i].turno<1 || (*a)[i].turno > 3);
	getchar();
		printf("Maquina:\t");
		gets((*a)[i].maquina);
	}
}

int main(){
	struct obreros o[2];
	struct supervisor s[3]; 
	llenado_obreros(&o);
	llenado_supervisor(&s);
	tabla_supervisores(&s);
	tabla_obreros(&o);
	promedio(&s);
	system("Pause");
	return 0;
}
