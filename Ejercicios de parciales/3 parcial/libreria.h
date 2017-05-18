/*Funciones en libreria */
void imprimir(float (*a)[10]){
	for(int i=0; i<10; i++){
	printf("%.1f\t", (*a)[i]);	
	}
}

void inicializar_arreglo(float (*a)[10]){
	for(int i=0; i<10; i++){
		(*a)[i]=0;
	}
}

void llenado_arreglo(float (*a)[10]){
	for(int i=0; i<10; i++){
		scanf("%f", &(*a)[i]);
	}
}

void burbuja(float (*a)[10]){
	int i=0, x=0, j=0;
	for (i; i<=9; i++){
		for(j=i+1; j<=9;j++){
			if((*a)[i]>(*a)[j]){
			x=(*a)[i];
			(*a)[i]=(*a)[j];
			(*a)[j]=x;
			}
		}
	}
}

void insert(float (*a)[10]){
	int i=0, y;
	
	for(int k=0; k<10; k++){
		y=(*a)[k];
		for(i=k-1; (i>=0 && y < (*a)[i]); i--){
			(*a)[i+1]=(*a)[i];
		}
		(*a)[i+1]=y;
	}
}



void shellsort(float (*a)[10]) {
    int x, i, j, y;
    for (x = 10; x /= 2; x--) {
        for (i = x; i < 10; i++) {
            y = (*a)[i];
            for (j = i; j >= x && y < (*a)[j - x]; j -= x) {
                (*a)[j] = (*a)[j - x];
            }
            (*a)[j] = y;
        }
    }
}

void quicksort(float (*a)[10],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while((*a)[i]<=(*a)[pivot]&&i<last)
                 i++;
             while((*a)[j]>(*a)[pivot])
                 j--;
             if(i<j){
                 temp=(*a)[i];
                  (*a)[i]=(*a)[j];
                  (*a)[j]=temp;
             }
         }
         temp=(*a)[pivot];
         (*a)[pivot]=(*a)[j];
         (*a)[j]=temp;
         quicksort(a,first,j-1);
         quicksort(a,j+1,last);
    }
}

void busqueda_secuencial(float (*a)[10], float A){
     float q=0;
     for(int p=0; p<10; p++){
             if(A == (*a)[p]){
             printf("El numero ha sido encontrado en la posicion %d\n", p);
             p=12;
             q=p;
             } 
             else if((p == 9) && (q == 0)){
             printf("Valor no encontrado\n");
             }
             				}
            							} 
            							
float busquedabinaria(float(*a)[10], float valor){
int bajo=0, alto=10, central;
central=(bajo+alto)/2;
while(bajo<=alto && (*a)[central] != valor){
	if(valor<(*a)[central]) alto=central-1;
	else bajo=central+1;
	central=(bajo+alto)/2;
  }
	if(valor==(*a)[central]) 
	printf("El valor se encuentra en la posicion %d\n",central);
else {
printf("El valor no se encuentra\n");
}
}
