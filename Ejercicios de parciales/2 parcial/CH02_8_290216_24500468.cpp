/*	Jos� Andr�s D�az Escobar
	29 de Febrero del 2016
	Escriba una funci�n en c que reciba una temperatura en grados fahrenheint y regrese su equivalente en grados cent�grados. 
	Escriba otra funci�n que reciba una temperatura en cent�grados y regrese su equivalente en fahrenheint. 
	Deber�s escribir otra funci�n que se llame men� donde se pregunte al usuario que opci�n desea y la regrese. 
	En el main() deber�s pedir la cantidad a convertir.*/
	
#include <stdio.h>
#include <cstdlib>
int menu(){
	int op;
	do{
	printf("Seleccione la opcion del menu\n\n1)	Para pasar de Farenheint a Centigrados\n2)	Para pasar de Centigrados a Farenheint\n3)	Salir\n\t");
	scanf("%d", &op);
	if(op<1 || op>3)
	printf("\nOpcion del menu invalida\n");
}while(op<1 || op>3);
	return op;
}


float centi(){
	float centigrados;
	printf("Ingrese la temperatura en centigrados:\t");
	scanf("%f", &centigrados);
	return centigrados;
}

float faren(){
	float faren;
	printf("\nIngrese la temperatura en farenheint:\t");
	scanf("%f", &faren);
	return faren;
}

void faren_a_centi(float a){
	float c;
	c=(a-32)+(5/9);
	printf("%.2f Fahrenheint son %.2f Centigrados\n", a, c);
}

void centi_a_faren(float a){
	float f;
	f=((9/5)*a)+32;
	printf("%.2f Centigrados son %.2f Fahtenheint\n", a, f);
}

int main(){
	int op;
	float FAREN, CENTI;
	do{
		op=menu();
		if(op == 1){
			FAREN=faren();
			faren_a_centi(FAREN);
		}
		else if(op == 2){
			CENTI=centi();
			centi_a_faren(CENTI);
		}
		else
		printf("\nGracias por usar el menu de Andres Diaz\n");
		system("PAUSE");
		system("CLS");
	}while(op != 3);
	
	system("PAUSE");
	return 0;
}
