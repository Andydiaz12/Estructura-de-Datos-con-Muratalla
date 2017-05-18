/*  José Andrés Díaz Escobar
    11 de Abril del 2016
1.	Recorrido.
2.	Búsqueda.
3.	Push.
4.	Pop.
5.	Eliminar dato.*/

void inicializar_arreglo(float (*a)[10]){
	for(int i=0; i<10; i++){
		(*a)[i]=0.0;
	}
}

int push(float x, float (*b)[10], int tope){
(*b)[tope]=x;
tope++;
return tope;
}

int inicializar_tope(int tope){
	tope=0;
	printf("El arreglo se ha reiniciado\n");
	return tope;
}

void buscar(float A, float (*a)[10], float tope){
     int BUSCAR, POP, POP1;
      int q=0, x, p;
     for(p=0; p<10; p++){
             if(A == (*a)[p]){
             printf("El numero ha sido encontrado en la posicion %d\n", p);
             x=p;
             p=12;
             q=p;
             } // primer if
             else if((p == 9) && (q == 0)){
             printf("Valor no encontrado\n");
             } // del else if
             
             }
         }
             
void recorrido(float (*a)[10], int tope){
     for(int i=(tope-1); i>=0; i--){
             printf("%.2f\n", (*a)[i]);
             }
     }
     
int pop(float(*a)[10], int tope){
printf("El dato que fue borrado es el %.2f\n", (*a)[tope-1]);
tope--;
return tope;
}

int eliminar_dato(float A, float (*a)[10], int tope){
     int BUSCAR, POP, POP1;
      int q=0, x, p;
     for(p=0; p<10; p++){
             if(A == (*a)[p]){
             printf("El numero ha sido encontrado en la posicion %d\n", p);
             x=p;
             p=12;
             q=p;
             } // primer if
             else if((p == 9) && (q == 0)){
             printf("Valor no encontrado\n");
             } // del else if
             
             } // for
             
     if(x == p){
     for(int X=x; x<tope; x++){
                 (*a)[x]=(*a)[x+1];
                 }//DEL FOR
                 tope=tope-1;
                 return tope;
          }
     }
     
int lleno(int tope){
	if(tope == 10){
		printf("El arreglo esta lleno\n");
	return 1;
	}
	else
	return 0;
	
}

int vacio(int tope){
	if(tope == 0){
		printf("El arreglo esta vacio\n");
		return 1;
	}
	else 
	return 0;
}

int sustitucion(float A, float (*a)[10], float b){
	
	int q=0, x, p;
     for(p=0; p<10; p++){
             if(A == (*a)[p]){
             printf("El numero ha sido encontrado en la posicion %d\n", p);
             (*a)[p]=b;
             printf("El numero ha sido remplazado por %.2f en la posicion %d\n", b, p);
			 x=p;
             p=12;
             q=p;
             } // primer if
             else if((p == 9) && (q == 0)){
             printf("Valor no encontrado\n");
             } // del else if
             
             }
}
