/*  Jos� Andr�s D�az Escobar
    22 de Febrero del 2016
    Lea un n�mero de millas que introduzca el usuario y dar su equivalencia en kil�metros (1 milla = 1.54 km).
El usuario realizar� tantas conversiones hasta que desee salir.

FUNCI�N 1: funci�n sin par�metros que solicite las millas y lo regrese al main.
FUNCI�N 2: funci�n que le pasar�n como par�metro las millas y regresar� la conversi�n en kil�metros al main.*/

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

