/*  Jos� Andr�s D�az Escobar
    8 de Febrero del 2016
    3.	Escribir un programa que solicite 3 n�meros enteros positivos:
"	Si el primer n�mero es par, calcular�n la suma de los 3 n�meros. 
"	Si no, imprimir�n la multiplicaci�n de los 3 n�meros.
"	Pero si llega a meter n�meros negativos debe aparecer un error y solicitar nuevamente los 
   n�meros, es decir ustedes realizaran las operaciones mencionadas hasta que el usuario introduzca 
   3 n�meros positivos, mientras tanto se deben seguir pidi�ndolos.*/
   
#include <stdio.h>
#include <cstdlib>

int main(){
    int x[3], suma, producto;
    
    do{
        printf("Ingrese 3 numero positivos\n");
        for(int i=0; i<=2; i++){
        scanf("%d", &x[i]);
        }
         if(x[0]<0 || x[1]<0 || x[2]<0){
         printf("ERROR, se deben de meter todos los valores nuevamente\n");  
         } else { if(x[0]%2==0){
                  suma=x[0]+x[1]+x[2];    
                  printf("La suma de los numeros es %d\n", suma);
                  }
        else{
            producto=x[0]*x[1]*x[2];
                                    printf("El producto de los 3 numeros es %d\n",producto);
                                    }
                                    }
        
        
    }while(x[0]<0 || x[1]<0 || x[2]<0);
    
    system ("PAUSE");
return 0;
}

