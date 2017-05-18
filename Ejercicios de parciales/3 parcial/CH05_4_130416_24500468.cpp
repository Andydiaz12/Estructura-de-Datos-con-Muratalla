/*  José Andrés Díaz Escobar
    13 de Abril del 2016
    Programar las primitivas de la cola y guardarlas en una librería llamada COLA_INICIALES.h. Utilizar estas funciones en un programa con el siguiente menú:
a.	Deberás inicializar el arreglo en -1.
b.	Mostrarás el siguiente menú:
1)	Agregar dato.
2)	Eliminar dato.
3)	Imprimir cola.
4)	Salir.
c.	Recuerda que:
i.	Ya no podrás agregar datos si la cola está llena.
ii.	Y no podrás eliminar datos si la cola está vacía.
iii.	La cola la llenaras con decimales y será de tamaño 10.*/
#include <stdio.h>
#include <cstdlib>

#include "COLA_INICIALES.h"

int menu(){
    int x;
    printf("1\tAgregar dato.\n2\tEliminar dato.\n3\tImprimir cola.\n4\tSalir.\n\t");
    do{
    scanf("%d", &x);
    if(x<1 || x>4)
    printf("Valor de menu invalido.\n\tIngrese nuevamente una opcion:\t");
}while(x<1 || x>4);
return x;
}


int main(){
    float arr[10];
    int FRENTE=0, MENU;
inicializar(&arr);
do{
MENU=menu();

if(MENU == 1){
                  isFull(FRENTE);
                  if(isFull(FRENTE) == 0)
                  FRENTE=insert(&arr, FRENTE);
                  else
                  error_lleno();
                  }
if(MENU == 2){
                  isEmpty(FRENTE);
                  if(isEmpty(FRENTE) == 0)
                  error_vacio();
                  else
                  FRENTE=remove(&arr, FRENTE);
                  }
if(MENU == 3){
                  imprimir(&arr, FRENTE);
                  }
                  }while(MENU != 4);

                  system("PAUSE");
                  return 0;
}
