/*	Jos� Andr�s D�az Escobar
	23 de Febrero del 2016
Ingrese N n�meros, cree un programa que identifique los n�meros pares e impares ya ingresados.

FUNCI�N 1: funci�n sin par�metros que solicite el n�mero a analizar y lo regrese al main.
FUNCI�N 3: funci�n que le pasar�n como par�metro el n�mero e imprimir� si se trata de un n�mero par o impar. No regresa nada.*/

#include <stdio.h>
#include <cstdlib>

int numero(){
	int numero;
	printf("Ingrese el numero a evaluar:\t");
	scanf("%d", &numero);
	return numero;
}

void operacion(int b){
	int a;
	if(b%2 == 0)
	printf("El numero es par\n");
	else
	printf("El numero es impar\n");
}

char OPCION (){
	char OP;
	printf("\n\t\nSi desea evaluar otro numero\nHacer click en la letra 'R'\nSi desea salir hacer click en alguna otra letra\n\t");
	getchar();
	scanf("%c", &OP);
	return OP;
}

int main(){
	char op;
	int num, opcion;
	do{
	num=numero();
	operacion(num);
	op = OPCION();
	system("CLS");
	}while(op == 'r' || op == 'R');
	system("PAUSE");
	return 0;
}

