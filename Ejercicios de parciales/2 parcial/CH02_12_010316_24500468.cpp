/*	José Andrés Díaz Escobar
	01 de Marzo del 2016
	12.	Programa una función recursiva para calcular la operación:  . Considere que a es positiva y que b puede ser positiva o negativa. */
	
#include <stdio.h>
#include <cstdlib>

float a(){
	float base;
	do{
		printf("Ingrese la base:\t");
		scanf("%f", &base);
		if(base<=0)
		printf("La base debe de ser positiva\n");
	}while(base<=0);
	return base;
}

float b(){
	float potencia;
		printf("Ingrese la potencia:\t");
		scanf("%f", &potencia);
	return potencia;
}

float operacion(float a, float b){
	if (b==1){
		return a;
	}
	else if(b==0){
		return 1;
	}
	else if(b<0){
		b=b*(-1);
	return operacion(a,b);
	}
	else {
	return a*operacion(a, b-1);
	}
	 
	
}

float conversion(float a){
	a=1/a;
	return a;
}

void impresiona(float a){
	printf("El resultado es %.0f\n", a);
}
void impresion(float a){
	printf("El resultado es %f\n", a);
}
int main(){
	float A, B, OPERACION, CONVERSION;
	
	A=a();
	B=b();
	if(B<0){
		OPERACION=operacion(A,B);
		CONVERSION=conversion(OPERACION);
	impresion(CONVERSION);
	}
	else{
	OPERACION=operacion(A, B);
	impresiona(OPERACION);
}
	
	
	system("PAUSE");
	return 0;
}
