/*	José Andrés Díaz Escobar
	5 de Marzo del 2016
	Hacer un programa en C que solicite los datos de 5 productos (clave -alfanumérica-, nombre, cantidad, precio unitario y subtotal). 
	Deberás calcular tú el subtotal y el total (es decir, la suma de los subtotales).
	Deberás utilizar una función para solicitar los datos, otra para la impresión de los mismos y otra para calcular el total (debes usar apuntadores)*/
	
#include <stdio.h>
#include <cstdlib>

struct datos{
	char clave[50], nombre[50];
	int cantidad;
	float unitario, subtotal;
};

void llenado(datos(*a)[5]){
	
	for(int i=0; i<5; i++){
		
		printf("\nIngrese los datos del producto numero %d\n", i+1);
		printf("Clave:\t");
		gets((*a)[i].clave);
		printf("Nombre:\t");
		gets((*a)[i].nombre);
		printf("Cantidad:\t");
		scanf("%d", &(*a)[i].cantidad);
		do{
			printf("Precio Unitario:\t");
			scanf("%f", &(*a)[i].unitario);
			if((*a)[i].unitario<0)
			printf("El precio debe de ser positivo\n");
		}while((*a)[i].unitario<0);
		(*a)[i].subtotal=((*a)[i].cantidad)*((*a)[i].unitario);
		getchar();
	}
}

void subtotal(datos(*a)[5]){
	float suma=0;
	for(int i=0; i<5; i++){
		suma=suma+((*a)[i].subtotal);
	}
	printf("El Total es %.1f\n", suma);
}

void impresion(datos(*a)[5]){
	for(int x=0; x<5; x++){
		printf("%s\t%s\t%d\t%.1f\t%.1f\n", (*a)[x].clave, (*a)[x].nombre, (*a)[x].cantidad, (*a)[x].unitario, (*a)[x].subtotal);
	}
}

int main(){
	struct datos arr[5];
	int SUMA;
	llenado(&arr);
	
	impresion(&arr);

	subtotal(&arr);
	system("Pause");
	return 0;
}
