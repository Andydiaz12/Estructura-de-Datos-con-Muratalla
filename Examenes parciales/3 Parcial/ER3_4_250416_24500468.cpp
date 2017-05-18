/*  José Andrés Díaz Escobar
    25 de Abril del 2016
    Programa que haga lo sig. con 10 enteros.*/
    
#include <cstdlib>
#include <stdio.h>
#include "PILA_INICIALES.h"

int menu(){
int x;
do{
printf("1.\tPop.\n2.\tPush.\n3\tEliminar especifico.\n4\tBuscar numero.\n5\tStackTop.\n6\tImprimir listado.\n7\tSalir.\n");
scanf("%d", &x);
if(x < 1 || x > 7){
printf("\n\nOpcion del menu invalida.\n");
system("PAUSE");
system("CLS");
}
}while(x < 1 || x > 7);
return x;
}

int dato(){
int x;
printf("Ingrese dato:\t");
scanf("%d", &x);
return x;
}

int main(){
    int MENU, TOPE=0, arr[10], LLENO, VACIO, DATO;
    
    
    do{
    MENU=menu();
switch(MENU){
             case 1:
                  VACIO=vacio(TOPE);
                  if(VACIO == 0)
                           TOPE=pop(&arr, TOPE);
                           
                  break;
             case 2:
                  LLENO=lleno(TOPE);
                  if(LLENO == 0){
                           DATO=dato();
                  TOPE=push(DATO, &arr, TOPE);
                  }
                  break;
             case 3:
                  VACIO=vacio(TOPE);
                  if(VACIO == 0){
                           DATO=dato();
                           TOPE=eliminar_dato(DATO, &arr, TOPE);
                           }
                  break;
             case 4:
                  VACIO=vacio(TOPE);
                  if(VACIO == 0){
                           DATO=dato();
                           buscar(DATO, &arr, TOPE);
                           }
                  break;
             case 5:
                  printf("No recuerdo que era stack stop maestra jeje\n");
                  break;
             case 6:
                  VACIO=vacio(TOPE);
                  if(VACIO == 0)
                           recorrido(&arr, TOPE);
                  break;
             }
             system("PAUSE");
             system("CLS");
    }while(MENU != 7);
    system("PAUSE");
return 0;
}
