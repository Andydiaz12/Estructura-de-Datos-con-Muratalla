/*	José Andrés Díaz Escobar
	01 de Marzo del 2016
	Programa una función recursiva para calcular la operación:  . Considere que a, b son positivos.*/
	
#include <stdio.h>
#include <cstdlib>

int a(){
	int base;
	do{
	printf("Ingrese la base:\t");
	scanf("%d",&base);
	if(base<0)
	printf("\nEl numero debe de ser mayor a 0\n");
	}while(base<=0);
	return base;
}

int b(){
	int potencia;
		do{
	printf("Ingrese la potencia:\t");
	scanf("%d", &potencia);
	if(potencia<=0)
	printf("\nLa potencia debe de ser mayor a 0\n");
		}while(potencia<=0);
	return potencia;
}

int operacion(int a, int b){
	if(b==1)
	return a;
	else
	return a*operacion(a,b-1);
}
void impresion(int a){
	printf("El resultado es:\t%d\n", a);
}
int main(){
int BASE, POTENCIA, OPERACION;
BASE=a();
POTENCIA=b();
OPERACION=operacion(BASE, POTENCIA);
impresion(OPERACION);
	system("PAUSE");
	return 0;
}
