/*	José Andrés Díaz Escobar
	9 de Febrero del 2016
	5.	Programa que solicita a un maestro introducir el nombre, la carrera y la edad de 5 de sus alumnos y 
	mostrará en pantalla el promedio de ellas. Debe preguntarle al usuario si desea introducir otro alumno o ya no. 
	También solicitarás los datos del maestro (nombre, edad, materia que imparte, dirección y teléfono). 
	Formato para la impresión de resultados (ningún decimal en las edades y dos decimales en el promedio) y 
	deberás imprimirlo en forma de tabla. Debes usar un arreglo de estructuras para los alumnos y otra estructura para el maestro.*/
	
#include <stdio.h>
#include <cstdlib>
#include <string.h>

struct alumnos{
	char nombre[100], carrera[100];
	int edad;
};

struct maestro {
	char nombre[100], materia[100], direccion[100];
	long edad, telefono;
};

int main (){
	struct alumnos a[5];
	struct maestro m;
	int i, op, j, promedio=0;
	
	printf("Ingrese los valores de los alumnos\n");
	for (i=0; i<=5; i++){
		printf("Alumno numero %d\n", i+1);
		printf("Nombre:");
		gets(a[i].nombre);
		printf("Carrera:");
		gets(a[i].carrera);
		do{
		printf("Edad:");
		scanf("%d", &a[i].edad);
		if(a[i].edad<1)
		printf("\nEdad minima de 1\n");
		}while(a[i].edad<1);
										do{
										
										printf("\nSi desea agregar otro alumno presionar 1\nPara pasar al profesor presionar 2\n");
										scanf("%d", &op);
										if(op == 1){
											if(i == 5){
												printf("\nSe permiten maximo 5 alumnos\n");
											}
										}
										else if (op == 2){
											j=i;
											i=7;
										}
										else
										printf("Opcion del menu invalida\n");
										}while (op != 1 && op != 2);
										getchar();
										promedio=(promedio+a[i].edad);
	}
	promedio=(promedio/(j+1));
	printf("Ingrese el valor del maestro\n");
	printf("Nombre:");
	gets(m.nombre);
do{
	printf("Edad:");
	scanf("%d", &m.edad);
	if(m.edad<1)
	printf("\nEdad invalida\n");
	}while(m.edad<1);
	getchar();
	printf("Materia:");
	gets(m.materia);
	printf("Direccion:");
	gets(m.direccion);
do{
	printf("Telefono:");
	scanf("%ld", &m.telefono);
	if(m.telefono<1)
	printf("\nEl numero debe ser mayor a 1\n");
	}while(m.telefono<1);
	
	printf("Alumnos\n");
	printf("NOMBRE\tCARRERA\tEDAD\n");
	for (i=0; i<=j; i++){
		printf("%s\t%s\t%d", a[i].nombre, a[i].nombre, a[i].edad);
	}
	printf("\n\nMaestro\n");
	printf("NOMBRE\nEDAD\tMATERIA\tDIRECCION\tTELEFONO\n");
	printf("%s\t%d\t%s\t%s\t%s\n", m.nombre, m.edad, m.materia, m.direccion, m.direccion);
	
	printf("El promedio de la edad es: %d", promedio);
	system ("PAUSE");
	return 0;
}
