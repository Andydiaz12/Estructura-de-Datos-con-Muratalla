/*	José Andrés Díaz Escobar
	24 de Abril del 2016
	
2.	Hacer un programa en C en el que utilizarás matrices con apuntadores (función para inicializar en 1, para llenar, para imprimir).
Deberás hacer una matriz A de 10x10, la cual llenarás con los múltiplos de 2 comenzando por el dos (no debes pedir ningún dato), por ejemplo:
2	4	6	8	10	12 	14	16	18	20
…..*/

#include <stdio.h>
#include <cstdlib>

void inicial(int (*a)[10][10]){
	for(int y=0; y<10; y++){
		for(int x=0; x<10; x++){
			(*a)[y][x]=1;
		}
	}
}

void llenado(int (*a)[10][10]){
	int i=2;
	for(int y=0; y<10; y++){
		for(int x=0; x<10; x++){
			(*a)[y][x]=i;
			i=i+2;
		}
	}
}

void impresion(int (*a)[10][10]){
	for(int y=0; y<10; y++){
		for(int x=0; x<10; x++){
			printf("%d\t", (*a)[y][x]);
		}
	}
}

int main(){
int matriz[10][10];

inicial(&matriz);
llenado(&matriz);
impresion(&matriz);
system("PAUSE");
return 0;
}

