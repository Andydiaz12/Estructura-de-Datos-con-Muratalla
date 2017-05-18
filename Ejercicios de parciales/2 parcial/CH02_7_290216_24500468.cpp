/*	Jos� Andr�s D�az Escobar
	28 de Febrero del 2016
7.	Programa que calcule con base a la opci�n seleccionada por el usuario:
1)	�rea de un c�rculo.
2)	Per�metro de un c�rculo.
3)	�rea de un cuadrado.
4)	Per�metro de un cuadrado.
5)	Salir.
Recuerda indicar si el usuario introduce una opci�n err�nea y el programa no terminar� hasta que el usuario desee salir.

FUNCI�N 1: que solicite el radio.
FUNCI�N 2: que solicite el lado.
FUNCI�N 3: que calcule el �rea del c�rculo.
FUNCI�N 4: que calcule el per�metro del c�rculo.
FUNCI�N 5: que calcule el �rea del cuadrado.
FUNCI�N 6: que calcule el per�metro del cuadrado.
FUNCI�N 7: que imprima el men� y solicite la opci�n (la regrese). */

#include <stdio.h>
#include <cstdlib>

void area (float a){
	printf("\nEl area del cuadrado es %.2f\n", (a*a));
}

void perimetro(float a){
	float perimetro;
	perimetro=(4*a);
	printf("\nEl perimetro del cuadrado es %.2f\n", perimetro);
}

void areaa(float a){
	float area;
	area= (3.1416*(a*a));
	printf("El area del circulo es %.2f\n", area);
}
void peri(float a){
	float perimetro;
	perimetro=(3.1416*(2*a));
	printf("El perimetro del circulo es %.2f\n", perimetro);
}

int decision(){
	int decision;
	do{
	printf("\nSeleccione una opcion del menu\n1)	Area de un circulo.\n2)	Perimetro de un circulo.\n3)	Area de un cuadrado.\n4)	Perimetro de un cuadrado.\n5)	Salir.\n\n\t");
	scanf("%d", &decision);
	if (decision<=0 || decision >=6)
	printf("\nOpcion del menu invalido\n");
    }while(decision<=0 || decision >=6);	
return decision;
}

float lado(){
	float lado;
	do{
		printf("\nIngrese el lado:\t");
		scanf("%f", &lado);
		if(lado <= 0)
		printf("\nEl lado debe de ser mayor a 0\n");
	}while(lado <= 0);	
	return lado;
}

float radio(){
	float radio;
	do{
	printf("\nIngrese el radio del circulo:\t");
	scanf("%f", &radio);
	if (radio <= 0)
	printf("\t\nEl radio debe ser mayor que 0\n");
	}while(radio <= 0);
	return radio;
}

int main(){
	int op;
	float RADIO, PERIMETRO;
do{	
op=decision();
	if(op == 1){
	RADIO=radio();
	areaa(RADIO);
}
	else if(op == 2){
	RADIO=radio();
	peri(RADIO);
}
	else if (op == 3){
		PERIMETRO=lado();
		area(PERIMETRO);
	}
	
	else if (op == 4){
		PERIMETRO=lado();
		perimetro(PERIMETRO);
	}
	else if (op == 5)
	printf("Gracias por usar el menu de Andres Diaz\n");
	system("PAUSE");
	system("CLS");
}while(op != 5);
	system("PAUSE");
	return 0;
}

