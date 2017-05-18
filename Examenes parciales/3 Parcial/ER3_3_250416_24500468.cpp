/*  José Andrés Díaz Escobar
    25 de Abril del 2016
    Hacer un programa en C para ordenar un arreglo*/
    
#include <cstdlib>
#include <stdio.h>
#include "libreria.h"

void COPIA(int (*a)[10], int (*b)[10]){
     for (int i=0; i<10; i++)
     (*b)[i]=(*a)[i];
     }

int menu(){
    int x;
    do{
    printf("1.\tOrdenar por Quicksort.\n2.\tOrdenar por burbuja.\n3.\tBusqueda binaria.\n4.\tSalir.\n");
    
                        printf("\n\n\tIngrese la opcion del menu deseada:\t");
                        scanf("%d", &x);
                        if(x < 1 || x > 4){
                             printf("\nOpcion del menu invalida\n\n");
                             system("PAUSE");
                             system("CLS");
                             }
                        }while(x < 1 || x > 4);
return x;
}

void datos(){
     printf("Ingrese los datos:\n\n");
     }
     
void viejo(){
     printf("\n\nLos datos viejos son:\n\n");
     }

int pedir_dato(){
int x;
printf("\n\n\tIngrese el valor a buscar:\t");
scanf("%d", &x);
return x;
}

int main(){
int arr[10], copia[10];
int MENU, DATO;

inicializar_arreglo(&arr);
do{
                          MENU=menu();

switch(MENU){
             case 1:
                  datos();
                  llenado_arreglo(&arr);
                  COPIA(&arr, &copia);
                  quicksort(&arr, 0, 9);
                  imprimir(&arr);
                  viejo();
                  imprimir(&copia);
                  break;
             case 2:
                  datos();
                  llenado_arreglo(&arr);
                  COPIA(&arr, &copia);
                  burbuja(&arr);
                  imprimir(&arr);
                  viejo();
                  imprimir(&copia);
                  break;
             case 3:
                  datos();
                  llenado_arreglo(&arr);
                  COPIA(&arr, &copia);
                  quicksort(&arr, 0, 9);
                  DATO=pedir_dato();
                  busquedabinaria(&arr, DATO);
                  imprimir(&arr);
                  viejo();
                  imprimir(&copia);
                  break;
                  

             }
                               system("PAUSE");
                  system("CLS");
}while(MENU != 4);
system("PAUSE");
return 0;
}
