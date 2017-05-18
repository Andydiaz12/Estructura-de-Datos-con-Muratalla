/*	José Andrés Díaz Escobar
	Realizado el 7 de Febrero del 2016
	Hacer un programa que llevará la relación de supervisores y obreros de la empresa Z. 
	Para esto deberás guardar los siguientes datos de TRES supervisores: 
	clave de empleado, área, nombre completo, número de empleados a su cargo, turnos que administra.
	Para CINCO obreros deberás solicitar: clave del empleado, área, turno en el que trabaja y máquina que utiliza.
	Deberás preguntarle al usuario si desea agregar los datos de un supervisor o de un obrero. Si desea agregar alguno en 
	el que ya no tengas espacio deberás indicarlo. Si te dice que ya no desea agregar ningún dato calcularas: 
	el total de empleados manejados por TODOS los supervisores e indicarás cuantos trabajadores trabajan en el 1er, 2do y 3er turno.
	Finalmente imprimirás los datos de la siguiente manera:

SUPERVISORES DE LA EMPRESA Z.
--------------------------------------------------------------------------------------------------------
CLAVE	ÁREA		NOMBRE		NO. EMPLEADOS		TURNOS
--------------------------------------------------------------------------------------------------------
25J9		CORTE		JUAN LOPEZ	5			2
…
--------------------------------------------------------------------------------------------------------
TOTAL DE EMPLEADOS: 25

OBREROS DE LA EMPRESA Z.
--------------------------------------------------------------------------------------------------------
CLAVE	ÁREA		NOMBRE		TURNO		MÁQUINA
--------------------------------------------------------------------------------------------------------
25J9	9	CORTE		PEPE ZAPATA	1		BROTHER 360
…
--------------------------------------------------------------------------------------------------------
3 EMPLEADOS TRABAJAN EN EL 1ER TURNO.
2 EMPLEADOS TRABAJAN EN EL 2DO TURNO.
0 EMPLEADOS TRABAJAN EN EL 3ER TURNO.

NOTA: Debes hacer dos estructuras una para supervisores y otra para obreros.
Solo existen 3 turnos: el 1º, 2º y 3er.*/

#include <stdio.h>
#include <cstdlib>
#include <string.h>

struct supervisores{
	char clave[100], area[100], nombre[100];
	int empleados, turnos;	
};
struct empleados{
	char clave[100], area[100], maquina[100], nombre[100];
	int turno;
};

int main(){

	struct supervisores s[3];
	struct empleados e[5];
	int i, op, j, J, empleados=0, suma, uno=0, dos=0, tres=0;
	
	for (i=0; i<=2; i++){
		printf("\nIngrese los datos del supervisor numero %d\n", i+1);
		printf("Clave:");
		gets(s[i].clave);
		printf("Area:");
		gets(s[i].area);
		printf("Nombre:");
		gets(s[i].nombre);
				do{
				printf("Empleados:");
				scanf("%d", &s[i].empleados);
				if(s[i].empleados<1)
				printf("\nSe debe de tener al menos 1 empleado\n");
				}while(s[i].empleados<1);
										do{
										printf("Turnos a cargo:");
										scanf("%d", &s[i].turnos);
										if(s[i].turnos<1 || s[i].turnos>3)
										printf("\nLos turnos son 1, 2 o 3\n");
										}while(s[i].turnos<1 || s[i].turnos>3);
																					do{
																					printf("\nSi desea ingresar otro supervisor presionar 1\nSi desea pasar al obrero, presionar 2\n");
																					scanf("%d", &op);
																					if(op == 1){
																						if(i == 2)
																						printf("No se permiten poner mas de 3 obreros\n");
																						}
																					else if (op == 2){
																						j=i;
																						i=3;
																					}
																					else 
																					printf("Opcion no valida\n");
																						
																					}while(op != 1 && op != 2);
																					getchar();
	}
	
	for(i=0;i<=4;i++){
		printf("Ingrese los datos del empleado numero %d\n", i+1);
		printf("Clave:");
		gets(e[i].clave);
		printf("Area:");
		gets(e[i].area);
									do{
									printf("Turno:");
									scanf("%d", &e[i].turno);
									if(e[i].turno == 1)
										uno=uno+1;
									else if (e[i].turno ==2)
										dos=dos+1;
									else if(e[i].turno ==3)
										tres=tres+1;
									else if(e[i].turno<1 || e[i].turno>3)
									printf("\nLos turnos son 1 2 o 3\n");
									}while(e[i].turno<1 || e[i].turno>3);
									getchar();
		printf("Maquina:");
		gets(e[i].maquina);
																				do{
																				printf("\nSi desea agregar a otro obrero presionar 1\nSi desea imprimir tabla presionar 2\n");
																				scanf("%d", &op);
																				if(op == 1){
																					if(i == 4)
																					printf("No hay espacio en la memoria\nSe imprimiran los resultados\n");
																				}
																				else if (op == 2){
																					J=i;
																					i=5;
																				}
																				}while (op != 1 && op !=2);
getchar();																			}
																				
	for (i=0; i<=j; i++){
		empleados=empleados+s[i].empleados;
	}
	
	printf("SUPERVISORES\n");
	printf("CLAVE\tAREA\tNOMBRE\tEMPLEADOS\tTURNOS\n");
	printf("------------------------------------------------------\n");
	for(i=0; i<=j; i++){
	printf("%s\t%s\t%s\t%d\t%d\n",s[i].clave, s[i].area, s[i].nombre, s[i].empleados, s[i].turnos);
}
printf("\nTotal de empleados de los obreros:\t%d\n", empleados);
printf("\n\nEMPLEADOS\n");
printf("CLAVE\tAREA\tTURNO\tMAQUINA\n");
printf("--------------------------------------------------\n");
		
	for(i=0; i<=J; i++){
printf("%s\t%s\t%d\t%s\n", e[i].clave, e[i].area, e[i].turno, e[i].maquina);		
	}
	printf("%d empleados del turno numero 1\n", uno);
	printf("%d empleados del turno numero 2\n", dos);
	printf("%d empleados del turno numero 3\n", tres);
	system ("PAUSE");
	return 0;
}

