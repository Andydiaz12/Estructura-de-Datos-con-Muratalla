/*  José Andrés Díaz Escobar
    22 de Febrero del 2016
    Lea un número de millas que introduzca el usuario y dar su equivalencia en kilómetros (1 milla = 1.54 km).
El usuario realizará tantas conversiones hasta que desee salir.

FUNCIÓN 1: función sin parámetros que solicite las millas y lo regrese al main.
FUNCIÓN 2: función que le pasarán como parámetro las millas y regresará la conversión en kilómetros al main.*/

#include <stdio.h>
#include <cstdlib>

float millas(){
      float millas;
      do{
      printf("\nIngrese el numero de millas:\t");
      scanf("%f", &millas);
      if(millas < 0)
      printf("No son validas millas negativas\n");
      }while(millas < 0);
      return millas;
      }
      
float conversion (float a){
      
      float kilometros;
      kilometros= a*1.54;
      return kilometros;
      }



int main(){
char op;
float kilometro, milla;
do{
milla=millas();
kilometro= conversion(milla);
printf("%.2f millas son %.2f kilometros\n", milla, kilometro);
printf("Si desea hacer otra conversion, presionar 'o'\n");
getchar();
scanf("%c", &op);
system("CLS");
}while(op == 'o' || op == 'O');
system("PAUSE");
return 0;
}

