/*	José Andrés Díaz Escobar
	27 de Enero del 2016
	Escribe un programa en C que presente el siguiente menú:

1)	Obtener la tabla de multiplicar.
2)	Obtener la sumatoria de números enteros. 
3)	Obtener la multiplicación de números enteros.
4)	Salir.
*/

#include <stdio.h>
#include <cstdlib>

int main (){
	int multi1, multi2, opcion, numero1, numero2, contador, producto=1;
	float tabla, multi;
	do{
	printf("Elija la opcion que desee\n1)	Obtener la tabla de multiplicar.\n2)	Obtener la sumatoria de numeros enteros.\n3)	Obtener la multiplicacion de numeros enteros.\n4)	Salir.\n");
	scanf("%d", &opcion);
	
	switch (opcion){
		case 1:
			printf("Ingrese el numero para saber su tabla de multiplicar (Con o sin decimales)\n");
			scanf("%f", &tabla);
			
			for(int i=0; i<=10; i++){
				multi= i*tabla;
				printf("%d x %.2f = %.2f\n", i, tabla, multi);
			}
			system("PAUSE");
			system("CLS");
			break;
			
		case 2: 
			contador = 0;
			printf("Ingrese 2 numeros enteros\n");
			scanf("%d %d", &numero1, &numero2);
			if(numero1<numero2){
				for (int n1=numero1; n1<= numero2; n1++){
					contador=contador+n1;
				}
				printf("La suma de los numeros entre %d y %d es %d\n", numero1, numero2, contador);
			}else if(numero1 > numero2){
				for (int n= numero2; n<=numero1; n++){
					contador=contador+n;
				}
				printf("La suma de los numeros entre %d y %d es %d\n", numero1, numero2, contador);
		}
		else
		printf("Los numeros son iguales\n");
			system("PAUSE");
			system("CLS");
			break;	
	
		
		case 3:
			producto=1;	
			printf("Ingrese 2 numeros enteros\n");
			scanf("%d %d", &multi1, &multi2);
			if(multi1 < multi2){
				for(int m1= multi1; m1<=multi2; m1++ ){
					producto=producto*m1;
				}
				printf("La multiplicacion de los numeros entre %d y %d es %d", multi1, multi2, producto);
			}
			else if(multi1 > multi2){
				for(int m2= multi2; m2<=multi1; m2++ ){
					producto=producto*m2;
				}
				printf("La multiplicacion de los numeros entre %d y %d es %d", multi2, multi1, producto);
			}
			else
			printf("Los numeros son iguales\n");
			system("PAUSE");
			system("CLS");
			break;
			
			case 4:
				printf("Gracias por usar el menu de Andres Diaz\n");
			break;
			default: 
			printf("Valor del menu invalido\n");
			system("PAUSE");
			system("CLS");
			}

		
	}while (opcion != 4);
	system("PAUSE");
	return 0;
	}
