/*  José Andrés Díaz Escobar
    13 de Abril del 2016
    Programar las primitivas de la cola y guardarlas en una librería llamada COLA_INICIALES.h. Utilizar estas funciones en un programa con el siguiente menú:
a.	Deberás inicializar el arreglo en -1.
b.	Mostrarás el siguiente menú:
1)	Agregar dato.
2)	Eliminar dato.
3)	Imprimir cola.
4)	Salir.
c.	Recuerda que:
i.	Ya no podrás agregar datos si la cola está llena.
ii.	Y no podrás eliminar datos si la cola está vacía.
iii.	La cola la llenaras con decimales y será de tamaño 10.*/

void inicializar(float (*a)[10]){
     for(int i=0; i<10; i++){
             (*a)[i]=-1;
             }
     }

int insert(float (*a)[10], int frente){
     float x;
     scanf("%f", &x);
     (*a)[frente]=x;
     frente++;
     return frente;
     }

int remove(float (*a)[10], int frente){
    printf("El dato que fue borrado fue:\t%.2f\n", (*a)[0]);
    for(int i=0; i<frente; i++){
            (*a)[i]=(*a)[i+1];
            }
    frente--;
    return frente;
}

void imprimir(float (*a)[10], int frente){
for(int i=0; i<frente; i++){
        printf("%.2f\n", (*a)[i]);
        }
}

int isEmpty(int frente){
if(frente == 0)
          return 0;
else 
return 1; 
}

int isFull(int frente){
if(frente == 10)
return 1;
else 
return 0;
}

void error_lleno(){
     printf("La cola ya esta llena\n");
     }
     
void error_vacio(){
     printf("La cola ya esta vacia\n");
     }
     
int mindelete(float (*a)[10],int frente){
    float x=0, MENOR;
    int LUGAR, i, pos;
    MENOR=(*a)[0];
    
    for(i=0; i<frente; i++){
           if((*a)[i]<=MENOR){
                             MENOR=(*a)[i];
                             pos=i;
                             }  
             }
             printf("El valor borrado fue el %.2f\n", MENOR);
             for(pos; pos<10; pos++){
                      (*a)[pos]=(*a)[pos+1];
                      }
                             frente--;
							 return frente; 
}

int maxdelete(float (*a)[10],int frente){
    float x=0, MAYOR;
    int LUGAR, i, pos;
    MAYOR=(*a)[0];
    
    for(i=0; i<frente; i++){
           if((*a)[i]>=MAYOR){
                             MAYOR=(*a)[i];
                             pos=i;
                             }  
             }
             printf("El valor borrado fue el %.2f\n", MAYOR);
             for(pos; pos<10; pos++){
                      (*a)[pos]=(*a)[pos+1];
                      }
                             frente--;
							 return frente; 
}
