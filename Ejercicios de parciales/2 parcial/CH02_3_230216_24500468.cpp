/*	José Andrés Díaz Escobar
	23 de Febrero del 2016
Ingrese N números, cree un programa que identifique los números pares e impares ya ingresados.

FUNCIÓN 1: función sin parámetros que solicite el número a analizar y lo regrese al main.
FUNCIÓN 3: función que le pasarán como parámetro el número e imprimirá si se trata de un número par o impar. No regresa nada.*/

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

