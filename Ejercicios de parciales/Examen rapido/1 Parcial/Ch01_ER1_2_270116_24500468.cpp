/*  Jos� Andr�s D�az Escobar
    27 de Enero del 2016
    Escribir un programa en C que muestre al usuario el siguiente men� 1) Evaluar si es par. 2) Evaluar si m�ltiplo de 3. 3) Salir. 
    Le mostrar�s el men� al usuario y una vez que haya seleccionado lo que desea le solicitar�s un n�mero entero y le dir�s si es m�ltiplo o no.
    Debes realizar las impresiones en pantalla como se muestra a continuaci�n:

Ejemplo 1:
	Selecciona opci�n: 1
	Dame el n�mero a evaluar: 5
	El 5 NO es m�ltiplo de 2.

Ejemplo 2:
	Selecciona opci�n: 2
	Dame el n�mero a evaluar: 5
	El 5 NO es m�ltiplo de 3.

	
Ejemplo 3:
Selecciona opci�n: 3
	Imprimir en pantalla salir.
	Se termina la ejecuci�n.*/
	
#include <stdio.h>
#include <cstdlib>

int main (){
    int numero, opcion;
    do{
        numero =0;
        opcion=0;
    do{

                  printf("Ingrese la opcion que desee realizar del menu\n1) Evaluar si es par.\n2) Evaluar si multiplo de 3.\n3) Salir.\n");
                    scanf("%d", &opcion);
                    if(opcion <= 0 || opcion >=4){
                    printf("Opcion del menu invalido\n");
                    system ("PAUSE");
                    system("CLS");
                    }
                    }while(opcion <= 0 || opcion >=4);
    switch (opcion){
           case 1:
              printf("Ingrese el numero a evaluar:\n");
              scanf("%d", &numero);
              if(numero%2==0)
                            printf("El numero SI es multiplo de 2\n");
              
              else
              printf("El numero NO es multiplo de 2\n");
                           system("PAUSE");
                            system ("CLS");
                            break;
           case 2:
                printf("Ingrese el numero a evaluar:\n");
                scanf("%d", &numero);
           if(numero%3==0)
           printf("El numero SI es multiplo del 3\n");
           else
           printf("El numero NO es multiplo del 3\n");
            system("PAUSE");
                            system ("CLS");
           break;
           
           case 3:
                printf("Gracias por usar el menu de Andres Diaz\n");
   

} 
}while(opcion != 3);  
   system("PAUSE");
    return 0;
}
