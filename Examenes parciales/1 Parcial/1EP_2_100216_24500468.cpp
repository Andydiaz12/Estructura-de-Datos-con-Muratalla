/*  José Andrés Díaz Escobar
    10 de Febrero del 2016
    Hacer un programa que imprima una serie de números, deberás solicitarle al cliente el límite
    superior y el limite inferior. El límite superior debe ser mayor al inferior, debes indicar
    cuando no es así y debes utilizar numeros decimales.
    Debes de realizar la impresion tal y como se indica. El decremento debe ser de uno en uno*/
    
#include <stdio.h>
#include <cstdlib>

int main(){
    int x, y, guarda, op;
    float X, Y, guardar;
    
    do{
          printf("Si desea su serie con decimales presionar 1(de .1 en .1)\nSi desea su serie de enteros presionar 2\n");
          scanf("%d",&op);
          
          if(op == 1){
                    do{
                          printf("Ingrese el limite superior:\t");
                          scanf("%f",&X);
                          printf("Ingrese el limite inferior:\t");
                          scanf("%f", &Y);
                                      if(X<Y){
                                               printf("\n\nEl limite superior es menor a el inferior\nIngrese nuevamente los limites\n");
                                               }
                                      else {
                                                    for(X; X>=Y; X=(X-.1)){
                                                           printf("%.1f\t", X);
                                                           }
                                                    }
                          
                          
                    }while(X<(Y-1));
                    }
                          else if(op == 2){
                               do{
                               printf("Ingrese el limite superior:\t");
                               scanf("%d", &x);
                               printf("Ingrese el limite inferior:\t");
                               scanf("%d", &y);
                                               if(x<y){
                                               printf("\n\nEl limite superior es menor a el inferior\nIngrese nuevamente los limites\n");
                                               }
                                               else {
                                                    for(x; x>=y; x--){
                                                           printf("%d\t", x);
                                                           }
                                                    }
                                                    }while(x<(y-1));
                               }
                          else
                          printf("Opcion del menu invalida\n");
       }while(op != 1 && op !=2);
       system("PAUSE");
return 0;
}
