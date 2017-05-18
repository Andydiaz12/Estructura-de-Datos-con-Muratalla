/*  José Andrés Díaz Escobar
    16 de Marzo del 2016
    Escribir un programa que presente el sig. menu.
    1.Sumatoria 2.Serie 3. Serie incremental 4.salir*/

#include <stdio.h>
#include <cstdlib>

int validacion_serie(int a, int b){
    if(a<b){
    printf("El %d debe ser mayor que %d\n", a, b);
    return 1;
}
    if(a==b){
    printf("Debe de haber diferencia de unidades entre %d y %d\n", a, b);
    return 1;
}
}

void Serie(int a, int b){
    for(b; b<=a; b++)
    printf("%d\t", b);
    }

int potencia(int a, int b){
    if(b==1)
    return a;
    else
    return a*potencia(a,b-1);
}

int menu(){
    int op;
    printf("1. Sumatoria.\n2. Serie.\n3. Serie Incremental.\n4. Salir\n\tIngrese la opcion que desea:\t");
    do{
               scanf("%d", &op);
               if(op <= 0 || op >= 5)
               printf("Opcion del menu invalida\n\tIngrese la opcion que desee:\t\n");
               }while(op <= 0 || op >= 5);
    return op;
}

int pedir_datos(){
    int x;
    printf("Ingrese un numero entero positivo:\t");
    do{
                    scanf("%d", &x);
                    if(x<1)
                    printf("El numero debe ser positivo\n\tIngrese nuevamente el numero:\t\n");
                    }while(x<1);
return x;
}

int sumatoria(int a){
    if(a == 1)
    return a;
    else
    return a+sumatoria(a-2);
}

void multiplo_tres(int a){
if(a%2 != 1)
printf("El numero debe de ser impar\n");
}

void respuesta(int a){
     printf("El resultado es:\t%d\n", a);
     }
     
void salir(){
     printf("Gracias por usar el menu de Andres Diaz\n");
     }

int main(){
    int SUMATORIA, MENU, DATOS_SUMATORIA, POTENCIA, BASE, OPERACION_POTENCIA, X, Y, v;
    do{
    MENU=menu();
    if(MENU == 1){
            do{
                  DATOS_SUMATORIA=pedir_datos();
                  multiplo_tres(DATOS_SUMATORIA);
               }while(DATOS_SUMATORIA%2 != 1);
               SUMATORIA=sumatoria(DATOS_SUMATORIA);
               respuesta(SUMATORIA);
            }
    if(MENU == 2){
            BASE=pedir_datos();
            POTENCIA=pedir_datos();
            for(int i=1; i<=POTENCIA;i++){
            OPERACION_POTENCIA=potencia(BASE, i);
            respuesta(OPERACION_POTENCIA);
            }
            }
    if(MENU == 3){
            do{
            X=pedir_datos();
            Y=pedir_datos();
            v=validacion_serie(X, Y);
            }while(v==1);
            Serie(X, Y);
            }
    if(MENU == 4){
            salir();
            }
    system("PAUSE");
    system("CLS");
    }while(MENU != 4);
    system("PAUSE");
return 0;
}
