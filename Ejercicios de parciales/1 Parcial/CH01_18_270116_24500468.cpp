/*  Jos� Andr�s D�az Escobar
    27 de Enero del 2016
    
Hacer un programa que llevar� la relaci�n de supervisores y obreros de la empresa Z. Para esto deber�s guardar los siguientes datos de un 
supervisor: clave de empleado, �rea, nombre completo, n�mero de empleados a su cargo, turnos que administra.
Para un obrero deber�s solicitar: clave del empleado, �rea, turno en el que trabaja y m�quina que utiliza.
Posteriormente imprimir�s los datos de la siguiente manera:

SUPERVISORES DE LA EMPRESA Z.
--------------------------------------------------------------------------------------------------------
CLAVE	�REA		NOMBRE		NO. EMPLEADOS		TURNOS
--------------------------------------------------------------------------------------------------------
25J9		CORTE		JUAN LOPEZ	5			2
	

OBREROS DE LA EMPRESA Z.
--------------------------------------------------------------------------------------------------------
CLAVE	�REA		NOMBRE		TURNO		M�QUINA
--------------------------------------------------------------------------------------------------------
25J9	9	CORTE		PEPE ZAPATA	1		BROTHER 360*/

#include <stdio.h>
#include <string.h>
#include <cstdlib>

struct supervisor{
       char clave[100] ,area[100], nombre[100];
       int empleados, turnos;
       };
struct obrero{
       char nombre[100], clave[100], area[100], maquina[100];
       int turnos;
       };

int main(){
 struct supervisor JEFE;
 struct obrero TRABAJADOR;
 
 printf("Ingrese los datos del supervisor\n");
 printf("Ingrese clave:");
 gets(JEFE.clave);

 printf("Ingrese area:");
 gets(JEFE.area);

 printf("Ingrese nombre:");
 gets(JEFE.nombre);
do{printf("Ingrese numero de empleados:");
 scanf("%d", &JEFE.empleados);
 if(JEFE.empleados<0)
 printf("No se pueden tener empleados negativos\n");
}while(JEFE.empleados<0);
 do{
 printf("Ingrese el turno que administra:");
 scanf("%d", &JEFE.turnos);

 }while(JEFE.turnos<=0 || JEFE.turnos>=4);

getchar();
printf("\n\nIngrese los datos del empleado\n");
printf("Ingrese la clave del empleado:");
gets(TRABAJADOR.clave);

printf("Ingrese el area:");
gets(TRABAJADOR.area);

printf("Ingrese nombre del empleado:");
gets(TRABAJADOR.nombre);

do{
printf("Ingrese turno en el que trabaja:");
scanf("%d", &TRABAJADOR.turnos);
}while(TRABAJADOR.turnos>3 || TRABAJADOR.turnos<=0);

getchar();
printf("Ingrese maquina que trabaja:");
gets(TRABAJADOR.maquina);

printf("\n\nSUPERVISOR DE LA EMPRESA Z\n--------------------------------------------------------------------------\nCLAVE        AREA                NOMBRE       NO. EMPLEADOS       TURNOS       \n--------------------------------------------------------------------------\n%s       %s       %s       %d       %d\n", JEFE.clave, JEFE.area, JEFE.nombre, JEFE.empleados, JEFE.turnos);
printf("\n\nOBRERO DE LA EMPRESA Z\n--------------------------------------------------------------------------\nCLAVE        AREA              NOMBRE         TURNOS       MAQUINA\n--------------------------------------------------------------------------\n%s       %s       %s       %d       %s\n", TRABAJADOR.clave, TRABAJADOR.area, TRABAJADOR.nombre, TRABAJADOR.turnos, TRABAJADOR.maquina);
 system("PAUSE");
    return 0;
}

