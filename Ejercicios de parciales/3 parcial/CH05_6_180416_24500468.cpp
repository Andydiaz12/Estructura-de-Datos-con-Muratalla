/*	José Andrés Díaz Escobar
	18 de Abril del 2016
	Modificarás el ejercicio anterior y harás una cola con prioridad descendente, 
	en pocas palabras agregarás maxdelete().Debes de imprimir la cola llena y la 
	impresión de la cola cada vez que eliminas un dato hasta que quede vacía.*/
	
#include <cstdlib>
#include <stdio.h>
#include "COLA_INICIALES.h"

int main(){
    float arr[10];
    int FRENTE=0, i, max, quitar_datos=0;
    inicializar(&arr);
    
    for(i=0; i<10; i++){
            FRENTE=insert(&arr, FRENTE);
            }
             imprimir(&arr, FRENTE);
             system("PAUSE");
             
   while(FRENTE > 0){
		   FRENTE = maxdelete(&arr, FRENTE);
		   imprimir(&arr, FRENTE);
           } 
                  
             
             
             system("pause");
             return 0;
}
