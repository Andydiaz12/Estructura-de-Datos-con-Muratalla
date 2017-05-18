/*  José Andrés Díaz Escobar
    15 de Marzo del 2016
    Escribir un programa que presente el siguiente menú:
1.	Serie A.
2.	Serie B.
3.	Salir.*/

#include <cstdlib>
#include <stdio.h>
void seriee(float a, float b){
     printf("El resultado de la serie(%.0f) es %.4f\n\n", a, b );
}


float multiplicacion(float a){
      a=1/a;
      return a;
      }

float seriea(float a){
    if(a == 0)
    return 1;
    else
    return 2*seriea(a-1);
}
float serieb(float a){
    if(a == 0)
    return 1;
    else
    return 3*serieb(a-1);
}

float pedir_dato_flotante(){
      float flotante;
      do{
      printf("Ingrese un numero mayor a 0:\t");
      scanf("%f", &flotante);
      if(flotante < 0)
      printf("El numero debe ser positivo\n");
      }while(flotante < 0);
      return flotante;
      }

int menu(){
    int op;
    do{
        printf("1.	Serie A.\n2.	Serie B.\n3.	Salir\n\n");
    printf("\n\tIngrese la opcion que se desee realizar:\t");
    scanf("%d", &op);
    if(op < 1 || op > 3)
    printf("Valor ingresado fuera de rango\n");
    }while(op < 1 || op > 3);
return op;
}

void gracias(){
     printf("Gracias por usar el menu de Andres Diaz:\n");
     }
     
int main(){
    int MENU;
    float SERIEA, SERIEB, DATO, MULTIPLICACION;
    char OPCION;
    do{
    MENU=menu();
    if (MENU == 1){
            
                   DATO=pedir_dato_flotante();
             SERIEA=serieb(DATO);
             MULTIPLICACION=multiplicacion(SERIEA);
             seriee(DATO, MULTIPLICACION);
             
             
             }
    if(MENU == 2){
            DATO=pedir_dato_flotante();
            SERIEB=seriea(DATO);
            MULTIPLICACION=multiplicacion(SERIEB);
            seriee(DATO, MULTIPLICACION);
            }
            system("PAUSE");
            system("CLS");
            
            }while(MENU != 3);
    gracias();
    
    system("PAUSE");
return 0;
}
