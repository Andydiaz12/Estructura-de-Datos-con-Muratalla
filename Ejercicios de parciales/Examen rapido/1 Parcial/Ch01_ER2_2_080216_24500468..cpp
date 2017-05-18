/*  José Andrés Díaz Escobar
    8 de Febrero del 2016
    Escribir un programa que solicite los datos de un profesor, deberás solicitar su número de profesor (alfanumérico), 
    su nombre completo, el nombre de la materia que imparte, el número de alumnos que tiene y el promedio de 
    calificaciones que tiene en su salón. Además deberás solicitar los datos de un alumno, los datos a pedir son 
    ID (entero), nombre, carrera, materia, parcial 1, parcial 2 y parcial 3, 
    deberás calcular el promedio de los tres parciales. La impresión debe ser como sigue:

DATOS DEL PROFESOR:
CLAVE	NOMBRE	MATERIA	NUM. ALUMNOS	PROMEDIO
---------------------------------------------------------------------------
225J	JUAN PEREZ	FISICA		22			7.5
---------------------------------------------------------------------------

DATOS DEL PROFESOR:
ID	NOMBRE	MATERIA	PACIAL 1	PARCIAL 2	PARCIAL 3	PROM
---------------------------------------------------------------------------------------------
89387	JUAN LOPEZ	FISICA		10		9		8		9
---------------------------------------------------------------------------------------------

NOTA: Debes utilizar estructuras.
*/

#include <stdio.h>
#include <string.h>
#include <cstdlib>

struct profesor {
       char clave[100], nombre[100], materia[100];
       int alumnos;
       float promedio;
       };
       
struct alumno {
       int matricula;
       char nombre[100], materia[100], carrera[100];
       float parcial[3];
       };
       
                     int main (){
                     struct profesor p;
                     struct alumno a;
                     int i;
                     float promedio=0;
    
                     printf("Ingrese los datos del profesor\n");
                     printf("Clave:");
                     gets(p.clave);
                     printf("Nombre:");
                     gets(p.nombre);
                     printf("Materia:");
                     gets(p.materia);
                                    do{
                                    printf("Alumnos:");
                                    scanf("%d", &p.alumnos);
                                    if(p.alumnos<1)
                                    printf("\nNo se permite tener menos de 1 alumno\n");
                                    }while(p.alumnos<1);
                                                        do{
                                                        printf("Promedio del grupo:");
                                                        scanf("%f",&p.promedio);
                                                        if(p.promedio < 0 || p.promedio >10)
                                                        printf("\nEl promedio es de 0 a 10\n");
                                                        }while(p.promedio < 0 || p.promedio >10);
                                                        
                     printf("\nIngrese los datos de 1 alumno\n");
                                       do{
                                       printf("Matricula:");
                                       scanf("%d", &a.matricula);
                                       if(a.matricula < 1)
                                       printf("\nLa matricula es un numero mayor a 1\n");
                                       }while(a.matricula < 1);
                                       getchar();
                                       
                     printf("Nombre:");
                     gets(a.nombre);
                     printf("Carrera:");
                     gets(a.carrera);
                     printf("Materia:");
                     gets(a.materia);
                     
                     for(i=0; i<=2; i++){
                             do{
                             printf("Ingrese la calificacion del parcial numero %d\n", i+1);
                             scanf("%f", &a.parcial[i]);
                             if(a.parcial[i] < 0 || a.parcial[i] >10)
                             printf("\nLa calificacion es de 0 a 10\n");
                             }while(a.parcial[i] < 0 || a.parcial[i] >10);
                             }
                     for(i=0; i <=2 ; i++){
                              promedio=promedio+a.parcial[i];
                              }
                              promedio=(promedio/3);
                              
                                                             printf("\nDATOS DEL PROFESOR\n");
                                                             printf("CLAVE\tNOMBRE\tMATERIA\tALUMNOS\tPROMEDIO\n");
                                                             printf("---------------------------------------------\n");
                                                             printf("%s\t%s\t%s\t%d\t%.1f\n", p.clave, p.nombre, p.materia, p.alumnos, p.promedio);
                                                             
                                                             printf("\nDATOS DEL ALUMNO\n");
                                                             printf("MATRICULA\tNOMBRE\tCARRERA\tMATERIA\tP1\tP2\tP3\tPROMEDIO\n");
                                                             printf("---------------------------------------------\n");
                                                             printf("%d\t%s\t%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\n", a.matricula, a.nombre, a.carrera, a.materia, a.parcial[0], a.parcial[1], a.parcial[2], promedio);
                             
system("PAUSE");                                                        
return 0;
}
