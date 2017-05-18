/*	José Andrés Díaz Escobar
	01 de Marzo del 2016
	Escriba una función en c que reciba los catetos de un triángulo rectángulo y por medio del teorema de Pitágoras determine la hipotenusa de dicho triangulo. 
	La función main() deberá pedir los catetos del triangulo y con la ayuda de la función pitágoras() imprimir en pantalla la hipotenusa.
NOTA: Deberás utilizar la función sqrt() de la biblioteca math.h para que funcione bien.*/

#include <stdio.h>
#include <cstdlib>
#include <math.h>

float catetos (){
	float catetoa;
	do{
	printf("Ingrese la medida de un cateto:\t");
	scanf("%f", &catetoa);
	if(catetoa<=0)
	printf("\nValor del cateto invalido\n");
}while(catetoa<=0);

	return catetoa;
}

float catetob(){
	float catetob;
do{
	printf("Ingrese la medida del otro cateto:\t");
	scanf("%f", &catetob);
	if(catetob<=0)
	printf("\nValor del cateto invalido\n");
}while(catetob<=0);
return catetob;
}

float pitagoras(float a, float b){
	float hipotenusa;
	hipotenusa=sqrt((a*a)+(b*b));
	return hipotenusa;
}

void resultado (float a){
	printf("El valor de la hipotenusa es %.2f\n", a);
}

int main(){

	float CATETOA, CATETOB, PITAGORAS;
	CATETOA=catetos();
	CATETOB=catetob();
	PITAGORAS=pitagoras(CATETOA, CATETOB);
	resultado(PITAGORAS);	
	system("PAUSE");
	return 0;
}
