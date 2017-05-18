/*	José Andrés Díaz Escobar
	23 de Febrero del 2016
	Realizar un programa que al ingresar un número, muestre los 3 números anteriores y los 3 números siguientes al número ingresado.

FUNCIÓN 1: que pida el número.
FUNCIÓN 2: que imprima los anteriores.
FUNCIÓN 3: que imprima los siguientes.*/

#include <stdio.h>
#include <cstdlib>
int pedir (){
	int numero;
	printf("Ingrese el numero a evaluar:\t");
	scanf("%d", &numero);
	return numero;
}

void siguientes(int a){
	int b= a+3;
	printf("Los 3 numeros siguientes son:\t");
	for(b; a <= (b-1); a++){
		printf("%d\t", a+1);

	}
	
}

void anteriores(int a){
	int ant=a-3;
	printf("\nLos 3 numeros anteriores son:\t");
	for(ant; ant <= (a-1); ant++ ){
		printf("%d\t", ant);
	}
}

char opcion(){
	char OP;
	printf("\nSi desea evaluar otro numero, presionar 'R'\n\t");
	getchar();
	scanf("%c", &OP);
	return OP;
}
int main(){
	char op;
	int NUM;
	do{
	NUM=pedir();
	siguientes(NUM);
	anteriores(NUM);
	op=opcion();
	system("cls");
}while(op == 'r'|| op == 'R');
	system("PAUSE");
	return 0;
}

