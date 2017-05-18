/*  José Andrés Díaz Escobar
    07 de Marzo del 2016
    Hacer un programa que presente el siguiente menú:
1)	Suma.
2)	Resta.
3)	Multiplicación.
4)	Factorial.
5)	Potencia.
6)	División.
7)	Salir.
Deberás REUTILIZAR tu librería llamada "DATOS_INICIALES.h" en la cual YA está la función para pedir los datos enteros. YA NO DEBES MODIFICAR ÉSTA LIBRERÍA.
Deberás hacer las funciones suma, resta, multiplicación, factorial y división y agregarlas en tu librería llamada "OPERACIONES_INICIALES.h" 
en la cual YA tenías la función llamada potencia.*/

#include <stdio.h>
#include <cstdlib>
#include "DATOS_INICIALES.h"
#include "OPERACIONES_INICIALES.h"

int menu(){
    int x;
    do{
    printf("Ingrese la opcion que desee realizar:\n1)	Suma.\n2)	Resta.\n3)	Multiplicación.\n4)	Factorial.\n5)	Potencia.\n6)	División.\n7)	Salir.\n\nOPCION:\t");
    scanf("%d", &x);
    if(x<1 || x>7){
    printf("OPCION INVALIDA\n");
    system("PAUSE");
    system("CLS");   
}
}while(x<1 || x>7);
return x;
}

int main(){
    char operacion[100];
    int SUMA[3], RESTA[3], MULTIPLICACION[3], MENU, i, FACTORIAL[2], POTENCIA[3], DIVISION[3];
    char op;
    
    do{
    MENU=menu();
    
    switch(MENU){
                 case 1:
                      for(i=0; i<2; i++){
                      SUMA[i]=pedir();
                      }
                      SUMA[2]=suma(SUMA[0], SUMA[1]);
                      salida(SUMA[2]);
                      break;  
                 case 2:
                                          for(i=0; i<2; i++){
                                          RESTA[i]=pedir();
                                                            }
                                                            RESTA[2]=resta(RESTA[0], RESTA[1]);
                                                            salida(RESTA[2]);
                                                            break;
                case 3:
                                                                                 for(i=0; i<2; i++){
                                                                                 MULTIPLICACION[i]=pedir();
                                                                                 }
                                                                                 MULTIPLICACION[2]=multiplicacion(MULTIPLICACION[0], MULTIPLICACION[1]);
                                                                                 salida(MULTIPLICACION[2]);
                                                                                 break;
                                                                                                          case 4:
                                                                                                               do{
                                                                                                               FACTORIAL[0]=pedir();
                                                                                                               if(FACTORIAL[0]<0)
                                                                                                               printf("El factorial debe ser positivo\n");
                                                                                                               }while(FACTORIAL[0]<0);
                                                                                                               FACTORIAL[1]=factorial(FACTORIAL[0]);
                                                                                                               salida(FACTORIAL[1]);
                                                                                                               break;
                                                                                                                                                 case 5:
                                                                                                                                                      POTENCIA[0]=pedir();
                                                                                                                                                      POTENCIA[1]=pedir();
                                                                                                                                                      POTENCIA[3]=potencia(POTENCIA[0], POTENCIA[1]);
                                                                                                                                                      salida(POTENCIA[3]);
                                                                                                                                                      break;
               case 6:
                    DIVISION[0]=pedir();
                    do{
                    DIVISION[1]=pedir();
                    if((DIVISION[1] == 0))
                    printf("El denominador debe de ser diferente a 0\n");
                       }while(DIVISION[1] == 0);                                                                                                                                                       
                        division(DIVISION[0], DIVISION[1]);   
                        break;                                                                                                                         
           
    case 7:
         salir();
         }
         printf("Si desea repetir, presionar s");
         getchar();
         scanf("%c", &op);
         system("CLS");
         }while(op== 's' || op== 'S');
    system("PAUSE");
    return 0;
}
