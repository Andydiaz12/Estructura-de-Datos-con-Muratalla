/*  José Andrés Díaz Escobar
    4 de Mayo del 2016
    Vas hacer un programa para administrar una pequeña tienda, vas a pedir: id del producto, nombre, precio unitario, piezas.
Tú vas a calcular el total por producto, el iva y total de la cuenta.
1.	Agregar producto.
2.	Eliminar producto específico.
3.	Imprimir el producto con más piezas vendidas.
4.	Imprimir el producto con menos piezas vendidas.
5.	Imprimir el listado de todos los productos comprados.
6.	Obtener el total de la cuenta y calcular el cambio.
7.	Limpiar la cuenta.
8.	Buscar producto.
9.	Salir.

NOTAS:
"	No olvides hacer tus validaciones.
"	En el total de la cuenta vas a calcular el iva y el total de la cuenta. También preguntarás con cuanto van a cambiar y el cambio.
"	En limpiar la cuenta borraras todos los nodos.*/

#include <stdio.h>
#include <cstdlib>
#include "NODO_INICIALES1.h"

int menu(){
int x;
do{
    printf("1\tAgregar producto.\n2\tEliminar producto espefico.\n3\tImprimir el producto con mas piezas vendidas.\n4\tImprimir el producto con menos piezas vendidas.\n5.\tImprimir el listado de todos los productos comprados.\n6\tObtener el total de la cuenta y calcular el cambio.\n7\tLimpiar la cuenta.\n8\tBuscar producto.\n9\tSalir.");
    printf("\n\n\tIngrese la opcion deseada:\t");
    scanf("%d", &x);
    if(x<1 || x>9){
    printf("Opcion del menu invalido\n");
    system("pause");
    system("cls");
}
}while(x<1 || x>9);
return x;
}

int main(){
    int MENU, VACIO, Error;
    do{
    MENU=menu();
    switch(MENU){
                 case 1:
                      VACIO=isEmpty();
                      if(VACIO == 1)
                      primer_nodo();
                      else
                      cualquier_nodo();
                      break;
                 case 2:
                      VACIO=isEmpty();
                      if(VACIO != 1)
                      eliminar_int();
                      break;
                 case 3:
                      mas_piezas();
                      break;
                 case 4:
                      break;
                 case 5:
                      VACIO=isEmpty();
                      if(VACIO == 0)
                      recorrido();
                      break;
                 case 6:
                      break;
                 case 7:
                      limpiar();
                      break;
                 case 8:
                      VACIO=isEmpty();
                      if(VACIO == 0)
                      buscar();
                      break;
                 }
                 system("PAUSE");
                 system("cls");
    }while(MENU != 9);
    system("Pause");
return 0;
}
