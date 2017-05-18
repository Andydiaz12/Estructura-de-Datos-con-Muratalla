/*  José Andrés Díaz Escobar
    18 de Abril del 2016
    Hacer un programa en C que implemente la primitiva insert de una lista ligada. 
    Lo que harás es crear una lista ligada de 10 elementos enteros y posteriormente imprimirás los datos de la lista en pantalla.
    PARA IMPRIMIR: lo que deberás hacer es un recorrido en la lista ligada, 
    para esto es necesario que tengas un nodo auxiliar, 
    el cual colocarás en el nodo raíz y te vas a seguir moviendo en la lista hasta que llegues a NULL en sig ya que significa que llegaste al final de la lista.*/
    
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include "NODO_INICIALES.h"



int main(){
    raiz=NULL;
    last=NULL;
    int i, a, vacio, b;
    for(i=0; i<10; i++){
             a=datos();
             vacio = isEmpty();
             if(vacio == 1)
             primer_nodo(a);
             else
             cualquier_nodo(a);
             b+=a;
             }
    recorrido();
    impresion(b);
    
    system("PAUSE");
    return 0;
}
