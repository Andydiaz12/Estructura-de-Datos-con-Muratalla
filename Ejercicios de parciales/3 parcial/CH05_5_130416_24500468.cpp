/*  Jos� Andr�s D�az Escobar
    13 de Abril del 2016
    En  el main() del programa se solicitar� al usuario 10 n�meros decimales que se 
    guardar�n en la cola y despu�s los imprimir� en pantalla en el orden como salen de la cola. 
    Posteriormente aplicar�s lo visto en clase de "una cola con prioridad". 
    Es decir una vez que haya sido llenada la cola har�n una cola con prioridad ascendente, 
    en pocas palabras agregar�s mindelete(). 
    Debes de imprimir la cola llena y la impresi�n de la cola cada vez que eliminas un dato hasta que quede vac�a.*/
    
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
