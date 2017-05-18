/* José Andrés Díaz Escobar
   27 de Enero del 2016
   Algoritmo que lee una secuencia de calificaciones numéricas (entre 0 y 100), que termina 
   con el valor -1 y calcula e imprime la media aritmética, el número y porcentaje
   de aprobados y el número y porcentaje de reprobados.*/
   
#include <stdio.h>
#include <cstdlib>

int main (){
    float x, contador=0, suma=0, media=0,  pasaron=0, porcentaje=0, reprobados=0;
    char p='%';
   
    printf("Ingrese calificaciones entre 0 y 100\nPara salir introducir -1\n");
    do{
        scanf("%f", &x);
        if(x < -1 || x > 100)
        printf("Valor invalido\n");
        if (x>=0 && x<=100) {
        suma= suma+x;
        contador+=1.0;
        }
        if(x>=70 && x<=100)
        pasaron=pasaron+1.0;
        }while(x != -1);
        media= suma/contador;
        porcentaje=(pasaron/contador)*100;
        reprobados=100-porcentaje;
        if(contador == 0)
       	printf("La media aritmetica es 0\nPasaron 0 de 0 estudiantes\nEl porcentaje de aprobados es de 0%c\nEl porcentaje de reprobados es 0%c\n", p, p);
		else 
		printf("La media aritmetica es %.2f\nPasaron %.0f de %.0f estudiantes\nEl porcentaje de aprobados es de %.0f%c\nEl porcentaje de reprobados es %.0f%c\n", media, pasaron, contador, porcentaje, p, reprobados, p);
        
    system ("PAUSE");
    return 0;
}
