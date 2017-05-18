/*	Jos� Andr�s D�az Escobar
	23 de Febrero del 2016
	Crear un programa en C que tenga una funci�n que cambie una cantidad de d�as a su equivalente en horas. 
	Ejemplo 10 d�as equivalen a 240 horas. En el programa se piden la cantidad de d�as y se imprime el equivalente en horas.

FUNCI�N 1: que pida los d�as.
FUNCI�N 2: que haga la transformaci�n.
FUNCI�N 3: que imprima el resultado.*/

#include <stdio.h>
#include <cstdlib>

int pedir(){
	int dias;
	printf("Ingrese la cantidad de dias a evaluar:\t");
	scanf("%d", &dias);
	return dias;
}

int conver(int a){
	int horas;
	horas = a*24;
	return horas;
}

void resultado (int a, int b){
	printf("%d dias son %d horas\n", a, b);
}

char regreso(){
	char OP;
	printf("Si desea evaluar otros datos, hacer click en 'R'\n\t");
	getchar();
	scanf("%c", &OP);
	return OP;
}

int main(){
	int DIAS, HORAS;
	char op;
	do{
	DIAS=pedir();
	HORAS=conver(DIAS);
	resultado(DIAS, HORAS);
	op=regreso();
	system("CLS");
}while(op == 'r' || op == 'R');
	system("PAUSE");
	return 0;
}
