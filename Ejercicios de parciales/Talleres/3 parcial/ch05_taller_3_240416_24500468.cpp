/*	José Andrés Díaz Escobar
	24 de Abril del 2016
	3.	Realizar un programa en C que guarde los datos de 5 personas (nombre completo, edad e ingreso).
Vas a hacer las siguientes funciones:
"	Agregar: que solicitará los datos de las 5 personas. DEBES UTILIZAR UN APUNTADOR A LA ESTRUCTURA.
"	Imprimir: que imprimirá los datos de las 5 personas en forma de TABLA. DEBES UTILIZAR UN APUNTADOR A LA ESTRUCTURA.
"	Promedio: que calculará el promedio de los ingresos de las 5 personas. DEBES UTILIZAR UN APUNTADOR A LA ESTRUCTURA*/

#include <cstdlib>
#include <stdio.h>

struct personas{
	char nombre[50];
	int edad;
	float ingreso;
};

int datos(personas (*a)[5]){
	float x=0;
	for(int i=0; i<5; i++){
		printf("\nIngrese los datos de la persona numero %d\n", i+1);
		printf("Nombre:\t");
		gets((*a)[i].nombre);
						do{
						printf("Edad:\t");
						scanf("%d", &(*a)[i].edad);
						if((*a)[i].edad<=0)
						printf("Edad invalida, ingrese el valor nuevamente\n\n");
					}while((*a)[i].edad<=0);
					do{
						
				
												printf("Ingreso:\t");
												scanf("%f", &(*a)[i].ingreso);
												if((*a)[i].ingreso<0)
												printf("El ingreso no puede ser negativo, ingrese nuevamente\n\n");
	}while((*a)[i].ingreso < 0);
	x=x+(*a)[i].ingreso;
	getchar();
	}
	return (x/5);
	
}

void impresion(personas (*a)[5], float ingre){
	printf("Nombre\t\tEdad\t\tIngreso\n");
	printf("--------------------------------------------\n");
	for(int i=0; i<5; i++){
		printf("%s\t\t%d\t\t%.2f\n", (*a)[i].nombre, (*a)[i].edad, (*a)[i].ingreso);
	}
	printf("\n\n\tEl ingreso promedio es de:\t%.2f\n", ingre);
}

int main(){
	struct personas p[5];
	float INGRESO;
	
	INGRESO=datos(&p);
	impresion(&p, INGRESO);
	system("PAUSE");
	return 0;
}
