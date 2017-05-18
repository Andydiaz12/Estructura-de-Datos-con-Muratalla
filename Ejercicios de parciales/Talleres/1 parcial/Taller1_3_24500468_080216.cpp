/*  José Andrés Díaz Escobar
    8 de Febrero del 2016
    3.	Escribir un programa que solicite 3 números enteros positivos:
"	Si el primer número es par, calcularán la suma de los 3 números. 
"	Si no, imprimirán la multiplicación de los 3 números.
"	Pero si llega a meter números negativos debe aparecer un error y solicitar nuevamente los 
   números, es decir ustedes realizaran las operaciones mencionadas hasta que el usuario introduzca 
   3 números positivos, mientras tanto se deben seguir pidiéndolos.*/
   
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

