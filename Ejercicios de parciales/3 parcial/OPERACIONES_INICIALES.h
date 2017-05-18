/*  José Andrés Díaz Escobar
    07 de Marzo del 2016*/
    
int potencia(int a, int b){
if(b==0)
return 1;
else
return a*potencia(a, b-1);
}

int suma(int a, int b){
    return a+b;
}

int resta(int a, int b){
    return a-b;
     }
     
int multiplicacion(int a, int b){
    if(b==0)
    return 0;
    else
    return a+multiplicacion(a, b-1);
}

int factorial(int a){
    if(a==0)
    return 1;
    else
    return a*factorial(a-1);
}

void division(int a, int b){
     float z;
     z=a/b;
      printf("El resultado de la division es = %.2f\n", z);
}

void salida(int a){
     printf("El resultado de la operacion es %d\n", a);
     }

void salir(){
     printf("Gracias por usar el menu de Andres Diaz\n");
     }
