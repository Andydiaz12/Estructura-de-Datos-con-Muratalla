/*  José Andrés Díaz Escobar
    10 de Febrero de 2016
    Escribir un programa para la administracion de un centro de rentas de peliculas. Deberas solicitar
    para tres peliculas: Nombre, género, año de realizacion y copias disponibles. Posteriormente
    deberas calcular el total de peliculas y el promedio de peliculas que se tiene y finalmente la impresion*/
    
#include <stdio.h>
#include <cstdlib>
#include <string.h>

struct peliculas{
       char nombre[100], genero[100];
       float anio, copias;
       };
       
int main (){
    struct peliculas p[3];
    int i;
    float promedio=0, promediofinal=0;
    for (i=0; i<=2;i++){
    printf("\nIngrese los datos de la pelicula numero %d\n", i+1);
    printf("Nombre de la pelicula:");
    gets(p[i].nombre);
    printf("Genero:");
    gets(p[i].genero);
                                    do{
                                    printf("Anio de publicacion:");
                                    scanf("%f",&p[i].anio);
                                    if(p[i].anio<1927)
                                    printf("\nLa primera pelicula se realizo en 1927\n");
                                    else if( p[i].anio>2016)
                                    printf("\nNo se permite una pelicula posterior al 2016\n");
                                    }while(p[i].anio<1927 || p[i].anio>2016);
                                                                  do{
                                                                             printf("Copias disponibles:");
                                                                             scanf("%f", &p[i].copias);
                                                                             if(p[i].copias<0)
                                                                             printf("\nNo se pueden tener copias negativas\n");
                                                                             }while(p[i].copias<0);
                                                                             getchar();
    promedio=(promedio+p[i].copias);
    }
    promediofinal=(promedio/3);
    
    printf("\n\nNombre\tGenero\tAnio\tCopias disponibles\n");
    printf("------------------------------------------\n");
    for(i=0; i<=2;i++){
             printf("%s\t%s\t%.0f\t%.0f\n", p[i].nombre, p[i].genero, p[i].anio, p[i].copias);
             }
             printf("Total de peliculas: %.0f\t\tPromedio: %.2f\n", promedio, promediofinal);
    system("PAUSE");
return 0;
}
