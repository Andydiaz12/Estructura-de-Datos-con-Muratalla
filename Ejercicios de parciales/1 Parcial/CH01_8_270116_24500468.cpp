/* José Andrés Díaz Escobar
   27 de Enero del 2016
   Realizar un programa en C que  muestre en pantalla el siguiente triángulo: 

*
**
***
****
*****
******
*******
********
*********
**********
*/

#include <stdio.h>
#include <cstdlib>

int main (){
 int x;
 printf("Ingrese la altura para el triangulo\n");
 scanf("%d", &x);
 
 for(int i=0; i <= x; i++){
         printf("\n");
         for(int p=0; p<i; p++){
                 printf("*"); 
                 }
                 }
                 system ("PAUSE");
    return 0;
}
