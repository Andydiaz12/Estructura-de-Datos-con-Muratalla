/*	José Andrés Díaz Escobar
	Realizado el dia 29 de Enero del 2016
	Hacer un programa que solicite el nombre de un empleado, su puesto, su sueldo mensual y los años que ha trabajado en la empresa. 
	Si el empleado ha trabajado al menos 10 años de la empresa recibirá un aumento del 20% en su sueldo. Deberás calcular este nuevo sueldo 
	e imprimir los datos de la siguiente manera:

Nombre	Puesto		Sueldo		Antigüedad	Nuevo Sueldo
----------------------------------------------------------------------------------------------------------------------
Xxxxxxxx	yyyyyy		$z.zz		w anios		$a.aa
----------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <cstdlib>
#include <string.h>

struct TRABAJADOR{
	char nombre[100],  puesto[100];
	int tiempo;
	float saldo, nuevosaldo;
};

int main(){
	char a='%';
	struct TRABAJADOR trabajador;
	printf("Ingrese nombre del empleado:");
	gets(trabajador.nombre);
	printf("Ingrese puesto que tiene:");
	gets(trabajador.puesto);
	do {
		printf("Ingrese su sueldo mensual:");
	scanf("%f", &trabajador.saldo);
	if(trabajador.saldo<0)
	printf("No se puede tener un saldo negativo\n");
	}while(trabajador.saldo<0);
	do{
	printf("Ingrese los anios que ha trabajado en la empresa:");
	scanf("%d", &trabajador.tiempo);
	if(trabajador.saldo<0)
	printf("No puede tener años negativos\n");
	}while(trabajador.saldo<0);
	
	if(trabajador.saldo>=10)
		trabajador.nuevosaldo=(trabajador.saldo*1.2);
	
	printf("\n\nNombre\tPuesto\t\tSueldo\t\tAntiguedad\tSaldo Final\n-------------------------------------------------\n%s\t%s\t%.2f\t\t%d anio\t\t%.2f\n-------------------------------------------------\n\n\n\n",trabajador.nombre, trabajador.puesto, trabajador.saldo, trabajador.tiempo, trabajador.nuevosaldo, a);
	system("PAUSE");
	
	return 0;
}
