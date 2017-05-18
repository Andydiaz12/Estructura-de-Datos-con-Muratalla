/*  José Andrés Díaz Escobar
    11 de Abril del 2016
    Programar las primitivas de la pila y guardarlas en una librería llamada PILA_INICIALES.h. Utilizar estas funciones en un programa con el siguiente menú:
1.	Recorrido.
2.	Búsqueda.
3.	Push.
4.	Pop.
5.	Eliminar dato.
6.	Salir.
NOTAS:
 	Recorrido: Deseo la impresión del orden de salida.
Orden de Salida: x,y,z…w
 	Búsqueda: Si se encuentra el dato debes de decir que fue encontrado y en que posición. Si no lo encuentra deberás decir que el dato no fue encontrado.
 	Push: En ésta función solo guardas UN dato en la pila, mas NO la llenas toda.
 	Pop: Esta función remueve el último dato, más NO vacías la pila. Es decir cada vez que llamas la función remueves un dato.
 	Eliminar: Si se encuentra el dato debes de decir que fue encontrado y eliminado. 
     Si no lo encuentra deberás decir que el dato no fue encontrado y por lo tanto no se eliminó nada de la pila. 
     Una vez que elimines el dato deberás recorrer el resto de los datos ya que no puede haber una posición vacía.
 	Considera un arreglo de flotantes de tamaño 10.
*/

#include <stdio.h>
#include <cstdlib>
#include "PILA_INICIALES.h"

float pedir_datos(){
float x;
printf("Ingrese un dato:\t");
scanf("%f", &x);
return x;
}

int menu(){
int x;
do{
printf("1.\tRecorrido.\n2.\tBusqueda\n3.\tPush\n4.\tPop\n5.\tEliminar dato\n6.\tSalir\n");
printf("\n\tIngrese la opcion que desee realizar:\t");
scanf("%d", &x);
if(x<1 || x>6){
printf("Opcion del menu invalida\n");
system("PAUSE");
system("CLS");
}
}while(x<1 || x>6);
return x;
}

int main(){
int MENU, TOPE=0, LLENO, VACIO;
float arr[10], PUSH=0, x;
inicializar_arreglo(&arr);
do{
MENU=menu();
if(MENU == 1){
        recorrido(&arr, TOPE);
        }
else if(MENU == 2){
		x=pedir_datos();
        buscar(x, &arr, TOPE);
        }
else if(MENU == 3){
	LLENO=lleno(TOPE);
	if(LLENO == 0){
	x=pedir_datos();
        TOPE=push(x, &arr, TOPE);
    }
		}
		
else if(MENU == 4){
	VACIO=vacio(TOPE);
	if(VACIO == 0)
	TOPE=pop(&arr, TOPE);
}
        
else if(MENU == 5){
	x=pedir_datos();
	TOPE=eliminar_dato(x, &arr, TOPE);
}
system("PAUSE");
system("CLS");
}while(MENU != 6);
system("PAUSE");
return 0;
}
