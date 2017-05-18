/*  José Andrés Díaz Escobar
    8 de Febrero del 2016
    Escribir un programa en C que guarde algunos datos de DOS profesores. 
    Es decir, deberás solicitar su número de profesor (alfanumérico), 
    su nombre completo, el nombre de la materia que imparte, el número de alumnos 
    que tiene y el promedio de calificaciones que tiene en su salón. 
    Debes utilizar un arreglo de estructuras.
Posteriormente deberás imprimir el promedio de los promedios de los 
profesores e imprimir los datos de la siguiente manera:

CLAVE	NOMBRE	MATERIA	NUM. ALUMNOS	PROMEDIO
---------------------------------------------------------------------------
225J	JUAN PEREZ	FISICA		22			7.5
…
---------------------------------------------------------------------------
El promedio es 8.5.*/

#include <stdio.h>
#include <cstdlib>
#include <string.h>

struct profesores {
       char clave[100], nombre[100], materia[100];
       int alumnos;
       float promedio;
       };

int main (){
    struct profesores a[2];
    int i;
    float grupos;
    for(i=0;i<=1;i++){
                      printf("\nIngrese los datos del profesor numero %d\n", i+1);
                      printf("Clave:");
                      gets(a[i].clave);
                      printf("Nombre completo:");
                      gets(a[i].nombre);
                      printf("Materia:");
                      gets(a[i].materia);
                                         do{
                                         printf("Alumnos:");
                                         scanf("%d", &a[i].alumnos);
                                         if (a[i].alumnos < 1)
                                         printf("\nNo se permite tener menos de 1 alumno\n");
                                         }while (a[i].alumnos < 1);
                                         
                                                do{
                                                printf("Promedio del grupo:");
                                                scanf("%f", &a[i].promedio);
                                                if (a[i].promedio < 0 || a[i].promedio>10)
                                                printf("\nEl promedio debe ser entre 0 y 10\n");
                                                }while (a[i].promedio < 0 || a[i].promedio>10);
                                                getchar();
                      }
                      grupos=((a[0].promedio + a[1].promedio)/2);
    printf("CLAVE\tNOMBRE\tMATERIA\tALUMNOS\tPROMEDIO\n");
    printf("------------------------------------------------\n");
    for (i=0; i<=1; i++){
    printf("%s\t%s\t%s\t%d\t%.1f\n",a[i].clave, a[i].nombre, a[i].materia, a[i].alumnos, a[i].promedio);
    }       
    printf("-----------------------------------------------\n");   
    printf("El promedio de los 2 maestros es de: %.1f\n", grupos);   
    system("PAUSE");
return 0;
}
