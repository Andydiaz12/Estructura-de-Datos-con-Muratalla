/*  José Andrés Díaz Escobar
    13 de Abril del 2016
    En  el main() del programa se solicitará al usuario 10 números decimales que se 
    guardarán en la cola y después los imprimirá en pantalla en el orden como salen de la cola. 
    Posteriormente aplicarás lo visto en clase de "una cola con prioridad". 
    Es decir una vez que haya sido llenada la cola harán una cola con prioridad ascendente, 
    en pocas palabras agregarás mindelete(). 
    Debes de imprimir la cola llena y la impresión de la cola cada vez que eliminas un dato hasta que quede vacía.*/
    
#include <stdio.h>
#include <cstdlib>
#include "COLA_INICIALES.h"

int main(){
    float arr[10];
    int FRENTE=0, i, min, quitar_datos=0;
    inicializar(&arr);
    
    for(i=0; i<10; i++){
            FRENTE=insert(&arr, FRENTE);
            }
             imprimir(&arr, FRENTE);
             system("PAUSE");
             
   while(FRENTE > 0){
		   FRENTE = mindelete(&arr, FRENTE);
		   imprimir(&arr, FRENTE);
           } 
                  
             
             
             system("pause");
             return 0;
}
