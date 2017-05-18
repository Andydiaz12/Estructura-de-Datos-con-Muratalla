/*  José Andrés Díaz Escobar
    16 de Marzo del 2016
    Escribir un programa que abra el archivo War.txt y copiarlo, de la siguiente manera: en lugar de las ',' (comas) vas a escribir en el archivo
    ... (tres puntos) y me diran cuantos cambios hubo tanto en la pantalla negra como en el final del archivo (es decir, no debe de haber
    una sola como en el archivo, en su lugar habrá tres puntos)*/

#include <cstdlib>
#include <stdio.h>

int main(){
    FILE *puntero;
    FILE *copia;
    char x;
    int contador=0;
    
    puntero=fopen("War.txt", "r");
    if(puntero == NULL)
    printf("El archivo no existe o no fue encontrado\n");
    
    else{
         copia=fopen("copy_War.txt", "a");   
         while(feof(puntero) == 0){
                          
                             x=getc(puntero);
                             if(x == ','){
                                  fputs("...", copia); 
                                  contador++;
                                  }
                                  else{
                                       fputc(x, copia);
                                       }
                             }
                             printf("Hubo %d cambios\n", contador);
                             fprintf(copia, "Hubo %d cambios\n", contador);
        
        fclose(copia);
    fclose(puntero);
     }
    
    system("PAUSE");
return 0;
}
