/*	Victor Manuel Gutierrez Marroquín
	José Andrés Díaz Escobar
	Proyecto final "B", cable de Puebla.
	Colores de ironman.
	Fecha de entrega 9 de Mayo del 2016*/
#include <cstdlib>

#include <stdio.h>

#include <iostream>

#include<string.h>



struct nodo

{

  char nombre[30],direccion[50],ciudad[25],estado[20],telefono[10];

  float sem1,sem2,anual;

  int numcli,suc;

  struct nodo *sig;

}*raiz, *final, *nuevo, *aux, *ant, *elimina, *menor, *menor1, *menor2, *mayor, *mayor1, *mayor2;



FILE*archivo;



int validacion(int bus)

{

    aux=raiz;

    do

    {

             if(aux->numcli==bus)

                   return 1;

             aux=aux->sig;

    }while(aux!=NULL);

    return 0;

}



void primer_nodo()

{

   raiz =(struct nodo *)malloc(sizeof(struct nodo));

   printf("Ingrese el numero de cliente: ");

             scanf("%d", &raiz->numcli);

             getchar();

             while(raiz->numcli<=0)

             {

                  printf("Dato invalido !!\n");

                  printf("Ingrese el numero de cliente: ");

                  scanf("%d", &raiz->numcli);

                  getchar();

             }

             printf("Numero de Sucursal(1 al 5):  "); // los reportes deben separarse por sucursales 

             scanf("%d",&raiz->suc);

             while(raiz->suc<1 || raiz->suc>=6)

             {

                          printf("Esta zona no existe!!\n");

                          printf("Porfavor digite el numero de sucursal nuevamente(1 al 5): ");

                          scanf("%d",&raiz->suc);

             } 

             getchar();         

             printf("Ingrese el nombre completo: ");

             gets(raiz->nombre);

             printf("Ingrese la direcion: ");

             gets(raiz->direccion);

             printf("Ingrese la ciudad: ");

             gets(raiz->ciudad);

             printf("Ingrese el estado: ");

             gets(raiz->estado);

             printf("Intruduzca el numero telefonico: ");

             gets(raiz->telefono);

             printf("Especifique el consumo en el PRIMER semestre(pesos): ");

             scanf("%f", &raiz->sem1);

             while(raiz->sem1<=0)

             {

                  printf("\nDato invalido !!");

                  printf("Especifique correctamente el consumo en el PRIMER semestre(pesos): ");

                  scanf("%d", &raiz->sem1);

             }

             printf("Especifique el consumo en el SEGUNDO semestre(pesos): ");

             scanf("%f", &raiz->sem2);

             while(raiz->sem2<=0)

             {

                  printf("\nDato invalido !!\n");

                  printf("Especifique correctamente el consumo en el SEGUNDO semestre(pesos): ");

                  scanf("%d", &raiz->sem2);

             }

             raiz->anual=raiz->sem1+raiz->sem2;

   raiz->sig=NULL;

   final=raiz;

}



void nuevo_nodo()

{

     int v;

     nuevo =(struct nodo *)malloc(sizeof(struct nodo));

     printf("\n");

             printf("Ingrese el numero de cliente: ");

             scanf("%d", &nuevo->numcli);

             v=validacion(nuevo->numcli);

             getchar();

             while(nuevo->numcli<=0||v!=0)

             {

                  printf("Dato invalido !!\n");

                  printf("Ingrese el numero de cliente: ");

                  scanf("%d", &nuevo->numcli);

                  v=validacion(nuevo->numcli);

                  getchar();

             }

             printf("Numero de Sucursal(1 al 5):  "); // los reportes deben separarse por sucursales 

             scanf("%d",&nuevo->suc);

             while(nuevo->suc<1 || nuevo->suc>=6)

             {

                          printf("Esta zona no existe!!\n");

                          printf("Porfavor digite el numero de sucursal nuevamente(1 al 5): ");

                          scanf("%d",&nuevo->suc);

             } 

             getchar();         

             printf("Ingrese el nombre completo: ");

             gets(nuevo->nombre);

             printf("Ingrese la direcion: ");

             gets(nuevo->direccion);

             printf("Ingrese la ciudad: ");

             gets(nuevo->ciudad);

             printf("Ingrese el estado: ");

             gets(nuevo->estado);

             printf("Intruduzca el numero telefonico: ");

             gets(nuevo->telefono);

             printf("Especifique el consumo en el PRIMER semestre(pesos): ");

             scanf("%f", &nuevo->sem1);

             while(nuevo->sem1<=0)

             {

                  printf("\nDato invalido !!");

                  printf("Especifique correctamente el consumo en el PRIMER semestre(pesos): ");

                  scanf("%d", &nuevo->sem1);

             }

             printf("Especifique el consumo en el SEGUNDO semestre(pesos): ");

             scanf("%f", &nuevo->sem2);

             while(nuevo->sem2<=0)

             {

                  printf("\nDato invalido !!\n");

                  printf("Especifique correctamente el consumo en el SEGUNDO semestre(pesos): ");

                  scanf("%d", &nuevo->sem2);

             }

             nuevo->anual=nuevo->sem1+nuevo->sem2;

     

     aux = raiz;

     if(aux->numcli > nuevo->numcli)

     {

                                nuevo->sig = aux;

                                raiz = nuevo;                           

     }

     else

     {

         while( aux->sig!=NULL &&  aux->sig->numcli < nuevo->numcli )

         {

                                aux = aux->sig;                                                    

         }

         if(aux->sig == NULL)

         {

                                  final = aux;

                                  final->sig = nuevo;

                                  nuevo->sig = NULL;

                                  final = nuevo;

         }

         else

         {

                                  nuevo->sig = aux->sig;

                                  aux->sig = nuevo; 

         }

     }                               

}



int isEmpty()

{

 if(raiz==NULL)

 return 1;

 else

 return 0;

}



int busqueda(int bus)

{

    aux=raiz;

    if(raiz->numcli==bus)

    {

                         printf("\nCLIENTE\n");

                         printf("__________________________________\n");

                         printf("Numero de cliente: %d\nSucursal: %d\nNombre Completo: %s\nDireccion. %s\nCiudad: %s\t\tEstado: %s\nNumero telefonico: %s\nConsumo del primer semestre del anio(mins): %.0f\nConsumo del segundo semestre del anio(mins): %.0f\n\n",aux->numcli,aux->suc,aux->nombre,aux->direccion,aux->ciudad,aux->estado,aux->telefono,aux->sem1,aux->sem2);

                         return 1;

    }

    while((aux!=NULL) && (aux->numcli!=bus))

    {

                      aux=aux->sig;

    }

    if(aux!=NULL)

    {

                      printf("\nCLIENTE\n");

                      printf("__________________________________\n");

                      printf("Numero de cliente: %d\nSucursal: %d\nNombre Completo: %s\nDireccion. %s\nCiudad: %s\t\tEstado: %s\nNumero telefonico: %s\nConsumo del primer semestre del anio(mins): %.0f\nConsumo del segundo semestre del anio(mins): %.0f\n\n",aux->numcli,aux->suc,aux->nombre,aux->direccion,aux->ciudad,aux->estado,aux->telefono,aux->sem1,aux->sem2);

                      printf("__________________________________\n");             

                      return 1;

    }

    else

        return 0;

}



void reporteprom()

{

     float x=0.0, y=0.0;

     int z=0, p;

     archivo=fopen("saldos_promedios.txt","w+");

     aux=raiz;

     do

     {

              x+=aux->sem1;

              y+=aux->sem2;

              z++;

              aux=aux->sig;

     }while(aux!=NULL);

     printf("\nPromedio de consumo del primer semestre del año: %.2f\n", x/z);

     printf("Promedio de consumo del segundo semestre del año: %.2f\n", y/z);

     fprintf(archivo, "%s", "Reporte de los saldos promedios\n_________________________________________________________\n");

     fprintf(archivo, "%s", "Promedio de consumo del primer semestre del año:\t");

     fprintf(archivo, "%.2f", x/z);

     fprintf(archivo, "\n\n%s", "Promedio de consumo del segundo semestre del año:\t");

     fprintf(archivo, "%.2f", y/z);

     printf("\nSe ha creado archivo saldos_promedios.txt\n");

     fclose(archivo);

}



void buscar_clienterep(int n)

{

     aux=raiz;

     do

     {

             if(aux->numcli==n)

             {

                       printf("-------------------------------------------------------------\n");

                       printf("Numero de cliente: %d\nSucursal: %d\nNombre Completo: %s\nDireccion. %s\nCiudad: %s\t\tEstado: %s\nNumero telefonico: %s\nConsumo del primer semestre del anio(mins): %.0f\nConsumo del segundo semestre del anio(mins): %.0f\n\n",aux->numcli,aux->suc,aux->nombre,aux->direccion,aux->ciudad,aux->estado,aux->telefono,aux->sem1,aux->sem2);  

                       fprintf(archivo,"%s", "-----------------------------------------------------------------------------\n");

                       fprintf(archivo,"%s", "Numero de Cliente:");fprintf(archivo,"%d\n", aux->numcli);

                       fprintf(archivo,"%s", "Sucursal:");fprintf(archivo,"%d\n", aux->suc);

                       fprintf(archivo,"%s", "Nombre Completo:");fprintf(archivo,"%s\n", aux->nombre);

                       fprintf(archivo,"%s", "Direccion:");fprintf(archivo,"%s\t", aux->direccion);

                       fprintf(archivo,"%s", "Ciudad:");fprintf(archivo,"%s\n", aux->ciudad);

                       fprintf(archivo,"%s", "Estado:");fprintf(archivo,"%s\n", aux->estado);

                       fprintf(archivo,"%s", "Telefono:");fprintf(archivo,"%s\n", aux->telefono);

                       fprintf(archivo,"%s", "Semestre 1:");fprintf(archivo,"%.2f\n", aux->sem1);

                       fprintf(archivo,"%s", "Semestre 2:");fprintf(archivo,"%.2f\n", aux->sem2);

                       break;

             }

             aux=aux->sig;                       

     }

     while(aux!=NULL);

}



void reportegeneral()

{

     float may1, men1, may2, men2, mayt, ment;

     int cma1,cme1,cma2,cme2,cmat, cmet, c=0, y;

     archivo=fopen("reporte_general.txt", "w+");

     aux=raiz;

     do

     {

                            if(c==0)

                            {

                                    may1=aux->sem1;

                                    may2=aux->sem2;

                                    men1=aux->sem1;

                                    men2=aux->sem2;

                                    cma2=aux->numcli;

                                    cma1=aux->numcli;

                                    cme1=aux->numcli;

                                    cme2=aux->numcli;

                            }

                            else

                            {

                                if(aux->sem1>may1)

                                {

                                                may1=aux->sem1;

                                                cma1=aux->numcli;

                                }

                                if(aux->sem2>may2)

                                {

                                                may2=aux->sem2;

                                                cma2=aux->numcli;

                                }

                                if(aux->sem1<men1)

                                {

                                                men1=aux->sem1;

                                                cme1=aux->numcli;

                                }

                                if(aux->sem2<men2)

                                {

                                                men2=aux->sem2;

                                                cme2=aux->numcli;

                                }

                            }

                            c++;

              aux=aux->sig;

     }while(aux!=NULL);

     if(may1>may2)

     {

                  mayt=may1;

                  cmat=cma1;

     }

     else

     {

         mayt=may2;

         cmat=cma2;

     }

     if(men1<men2)

     {

                  ment=men1;

                  cmet=cme1;

     }

     else

     {

         ment=men2;

         cmet=cme2;

     }

     printf("Cliente que MAS consumi%c en el primer semestre del año\n", 162);

     fprintf(archivo, "%s", "Cliente que MAS consumió en el primer semestre del año\n");

     buscar_clienterep(cma1);

     fprintf(archivo, "%s", "Cliente que MENOS consumió en el primer semestre del año\n");

     printf("Cliente que MENOS consumi%c en el primer semestre del año\n", 162);

     buscar_clienterep(cme1);

     fprintf(archivo, "%s","Cliente que MAS consumió en el segundo semestre del año\n");

     printf("Cliente que MAS consumi%c en el segunda semestre del año\n", 162);

     buscar_clienterep(cma2);

     fprintf(archivo, "%s","Cliente que MENOS consumió en el segundo semestre del año\n");

     printf("Cliente que MENOS consumi%c en el segunda semestre del año\n", 162);

     buscar_clienterep(cme2);

     fprintf(archivo, "%s", "Cliente que MAS consumió en todo el año\n");

     printf("Cliente que MAS consumi%c en todo el año\n", 162);

     buscar_clienterep(cmat);

     fprintf(archivo, "%s", "Cliente que MENOS consumió en todo el año\n");

     printf("Cliente que MENOS consumi%c en todo el año\n", 162);

     buscar_clienterep(cmet);

     printf("\nSe ha creado archivo reporte_general.txt \n");

     fclose(archivo);

}



void r_suc(int n)

{

     float may1, men1, may2, men2, mayt, ment;

     int cma1,cme1,cma2,cme2,cmat, cmet, c=0, y;

     aux=raiz;

     do

     {

              if(aux->suc==n)

              {

                            if(c==0)

                            {

                                    may1=aux->sem1;

                                    may2=aux->sem2;

                                    men1=aux->sem1;

                                    men2=aux->sem2;

                                    cma2=aux->numcli;

                                    cma1=aux->numcli;

                                    cme1=aux->numcli;

                                    cme2=aux->numcli;

                            }

                            else

                            {

                                if(aux->sem1>may1)

                                {

                                                may1=aux->sem1;

                                                cma1=aux->numcli;

                                }

                                if(aux->sem2>may2)

                                {

                                                may2=aux->sem2;

                                                cma2=aux->numcli;

                                }

                                if(aux->sem1<men1)

                                {

                                                men1=aux->sem1;

                                                cme1=aux->numcli;

                                }

                                if(aux->sem2<men2)

                                {

                                                men2=aux->sem2;

                                                cme2=aux->numcli;

                                }

                            }

                            c++;

              }

              aux=aux->sig;

     }while(aux!=NULL);

     if(may1>may2)

     {

                  mayt=may1;

                  cmat=cma1;

     }

     else

     {

         mayt=may2;

         cmat=cma2;

     }

     if(men1<men2)

     {

                  ment=men1;

                  cmet=cme1;

     }

     else

     {

         ment=men2;

         cmet=cme2;

     }

     printf("Cliente que MAS consumi%c en el primer semestre del año de la sucursal %d\n", 162,n);

     fprintf(archivo, "%s", "Cliente que MAS consumió en el primer semestre del año de la sucursal\n");

     buscar_clienterep(cma1);

     fprintf(archivo, "%s", "Cliente que MENOS consumió en el primer semestre del año de la sucursal\n");

     printf("Cliente que MENOS consumi%c en el primer semestre del año de la sucursal %d\n", 162,n);

     buscar_clienterep(cme1);

     fprintf(archivo, "%s","Cliente que MAS consumió en el segunda semestre del año de la sucursal\n");

     printf("Cliente que MAS consumi%c en el segunda semestre del año de la sucursal %d\n", 162,n);

     buscar_clienterep(cma2);

     fprintf(archivo, "%s","Cliente que MENOS consumió en el segunda semestre del año de la sucursal\n");

     printf("Cliente que MENOS consumi%c en el segunda semestre del año de la sucursal %d\n", 162,n);

     buscar_clienterep(cme2);

     fprintf(archivo, "%s", "Cliente que MAS consumió en todo el año de la sucursal\n");

     printf("Cliente que MAS consumi%c en todo el año de la sucursal %d\n", 162,n);

     buscar_clienterep(cmat);

     fprintf(archivo, "%s", "Cliente que MENOS consumió en todo el año de la sucursal\n");

     printf("Cliente que MENOS consumi%c en todo el año de la sucursal %d\n", 162,n);

     buscar_clienterep(cmet);

     printf("Se ha creado archivo reporte_sucursal%d.txt\n",n);

}



int exis(int n)

{

    aux=raiz;

    do

    {

             if(aux->suc==n)

                   return 1;

             aux=aux->sig;

    }while(aux!=NULL);

    return 0;

}



void reportesucursal()

{

     int sc;

     do

     {

                    printf("Ingrese la sucursal: ");

                    scanf("%d", &sc);

     switch(sc)

     {

                case 1:

                     if(exis(1)==1)

                     {

                      archivo=fopen("reporte_sucursal1.txt", "w+");

                      r_suc(1);

                      fclose(archivo);

                     }

                     else

                     {

                         printf("\nERROR! No hay datos ingresados en tal sucursal\n");

                     }

                     break;

                case 2:

                     if(exis(2)==1)

                     {

                      archivo=fopen("reporte_sucursal2.txt", "w+");

                      r_suc(2);

                      fclose(archivo);

                     }

                     else

                     {

                         printf("\nERROR! No hay datos ingresados en tal sucursal\n");

                     }

                     break;

                case 3:

                     if(exis(3)==1)

                     {

                      archivo=fopen("reporte_sucursal3.txt", "w+");

                      r_suc(3);

                      fclose(archivo);

                     }

                     else

                     {

                         printf("\nERROR! No hay datos ingresados en tal sucursal\n");

                     }

                     break;

                case 4:

                     if(exis(4)==1)

                     {

                      archivo=fopen("reporte_sucursal4.txt", "w+");

                      r_suc(4);

                      fclose(archivo);

                     }

                     else

                     {

                         printf("\nERROR! No hay datos ingresados en tal sucursal\n");

                     }

                     break;

                case 5:

                     if(exis(5)==1)

                     {

                      archivo=fopen("reporte_sucursal5.txt", "w+");

                      r_suc(5);

                      fclose(archivo);

                     }

                     else

                     {

                         printf("\nERROR! No hay datos ingresados en tal sucursal\n");

                     }

                     break;

                default:

                        printf("ERROR!!! NO existe tal Sucursal\n");

     }

     }while(sc<=0||sc>5);

}



void menu_reportes(int reportes )//SUB MENU DE OPCION 6 DE EL MENU PRINCIPAL

{

      do{

     printf("==================================================\n");

     printf("||\t\tPROMEDIO DE SALDOS\t\t||\n");

      printf("==================================================\n");

      printf("\t\t1) REPORTE DE LOS SALDOS PROMEDIO\n");

      printf("\t\t2) REPORTE POR ZONA \n");

      printf("\t\t3) REPORTE GENERAL \n");

      printf("\t\t4) SALIR\n");

      printf("__________________________________________________\n");

      printf("\tOPRIMA ALGUNA OPCION CON EL NUMERO===>>>");

      scanf("%d",&reportes);

      

      switch(reportes)//switch respectivo para la opcion de reportes

      {

                      case 1: //saldos de promedio del primer semestre del año y el segundo semestre

                           system("cls");

                           printf("===REPORTE DE LOS SALDOS PROMEDIO===\n");

                           printf("_________________________________________\n");

                           reporteprom();

                           system("pause");

                           system("cls");

                           break;

                      case 2: //opcion donde se le pide al usuario vizualizar cualquiera de las zonas establecidas.

                      system("cls");

                           printf("===REPORTE POR ZONA===\n");

                           printf("_________________________________________\n");

                           reportesucursal();

                            system("pause");

                            system("cls");

                           break;

                      case 3: //reporte donde muestra todas las zonas 

                      system("cls");

                           printf("===REPORTE GENERAL===\n");

                           printf("_________________________________________\n");

                           reportegeneral();

                            system("pause");

                           system("cls");

                           break;

                     case 4: // opcion para salir de el menu

                     system("cls");

                     

                          printf("===SALIR===\n");

                          printf("_________________________________________\n");

                          system("pause");

                         system("cls");

                          break;

      }

      }

      while(reportes!=4);

 }

int remove(int bus)

{

   aux=raiz->sig;

   ant=raiz;

   int dato;

   dato=bus;

   if(raiz->numcli==bus)

   {

      dato=raiz->numcli;

      elimina=raiz;

      raiz=raiz->sig;

      free(elimina);

      return (dato);

   }

   while((aux!=NULL) && (aux->numcli!=bus))

   {

      ant=aux;

      aux=aux->sig;

   }

   if(aux!=NULL)

   {

       if(aux->sig==NULL)

       {

          ant->sig=NULL;

          final=ant;

          free(aux);

          return (dato);

       }

       else

       {

          ant->sig=aux->sig;

          free(aux);

          return (dato);

       }

   }

}



void impresion_clientes()

{

     aux=raiz;

     do

     {

              printf("\nCLIENTE\n");

              printf("___________________________________\n");

              printf("Numero de cliente: %d\nSucursal: %d\nNombre Completo: %s\nDireccion. %s\nCiudad: %s\t\tEstado: %s\nNumero telefonico: %s\nConsumo del primer semestre del anio(mins): %.0f\nConsumo del segundo semestre del anio(mins): %.0f\n\n",aux->numcli,aux->suc,aux->nombre,aux->direccion,aux->ciudad,aux->estado,aux->telefono,aux->sem1,aux->sem2);

              printf("___________________________________\n");

              aux=aux->sig;

     }while(aux!=NULL);

}

 void menu(int opc)// menu inicio de programa

{

      int a,i=0,nc,j,v,m,b,o,reportes,menu,zona;

   float sem1,sem2,anu;

   char nom[30],dir[50],ciu[25],edo[20],numt[10];

    do{

    system("cls");

     printf("==================================================\n");

     printf("||\t\tEMPRESA DE CABLE PUEBLA\t\t||\n");

      printf("==================================================\n");

      printf("\t\t1) LISTADO DE ZONAS\n");

      printf("\t\t2) AGREGAR CLIENTE\n");

      printf("\t\t3) BUSCAR CLIENTE\n");

      printf("\t\t4) ELIMINAR CLIENTE\n");

      printf("\t\t5) IMPRIMIR LISTADO DE CLIENTES\n");

      printf("\t\t6) IMPRIMIR REPORTE\n");

      printf("\t\t7) SALIR\n");

      printf("__________________________________________________\n");

      printf("\tOPRIMA ALGUNA OPCION CON EL NUMERO===>>>");// eleccion de alguna de las 7 opciones.

      scanf("%d",&opc);

      

      switch(opc)// inicio para nuestro menu con para todas las funciones.

    {

               case 1:// caso 1 lista de zonas 

                {

                     system("cls");

                    printf("===LISTADO DE ZONAS DE CABLE===\n");

                     printf("_________________________________________\n");

                    printf("|\tNo.|  Nombre\t\t\t|\n");

                    printf("|---------------------------------------|\n");		

                    printf("|\t1. |  Puebla-Veracruz.\t\t|\n");

                    printf("|\t2. |  Oaxaca-Chiapas.\t\t|\n");

                    printf("|\t3. |  Guerrero-Michoacán.\t|\n");

                    printf("|\t4. |  DF.\t\t\t|\n");

                    printf("|\t5. |  Hidalgo-México.\t\t|\n");

                    printf("|_______________________________________|\n");

                   system("pause");

                    system("cls");

                     break;

                    

                    }

                case 2:// opcion para agregar a los clientes

                         {

                                 int a,v;

                       system("cls");

                         printf("\t====AGREGAR CLIENTES ====\n");

                         printf("_________________________________________\n");

                        

         a=isEmpty();

          if(a==1)

          {

             primer_nodo();

             printf("\n");

             system("cls");

            

          }

          else

          {

             nuevo_nodo();

          }

            

                    

                         break;

               

                           }

    case 3:// en esta opcion se buscan los clientes agregados con el cidogo

                        {

                             

                     

                         system("cls");

                          printf("\t==== BUSCAR CLIENTE====\n");

                          printf("_________________________________________\n");

    

                         a=isEmpty();

         if(a==1)

         {

                 printf("Lista de clientes vacia!!\n");

                 printf("\n");

                 system("pause");

                 system("cls");

         }

         else

         {

             printf("Ingresa el numero de cliente a buscar: ");

             scanf("%d", &b);

             m=busqueda(b);

             if(m==0)

             {

                     j=0;

                     printf("\nNo se ha encontrado al cliente!\n");

                     while (j!=-1)

                     {

                           printf("Agregarla al sistema?\n\n1) Si\n2) No\nOpcion: ");

                           scanf("%d", &o);

                           getchar();

                           if (o>0&&o<3)

                           {

                                        opc=o;

                                        j=-1;

                           }

                           else

                               printf ("Opcion invalida!!\n");

                     }

                     if(opc==1)

                     {

                               nuevo =(struct nodo *)malloc(sizeof(struct nodo));

                               printf("\n");

                               nc=b;

                                printf("Numero de Sucursal(1 al 5):  "); // los reportes deben separarse por sucursales 

                                scanf("%d",&nuevo->suc);

                                while(nuevo->suc<1 || nuevo->suc>=6)

                                {

                                                   printf("Esta zona no existe!!\n");

                                              printf("Porfavor digite el numero de sucursal nuevamente(1 al 5): ");

                                              scanf("%d",&nuevo->suc);

                                } 

                                getchar();         

                                printf("Ingrese el nombre completo: ");

                                gets(nuevo->nombre);

                                printf("Ingrese la direcion: ");

                                gets(nuevo->direccion);

                                printf("Ingrese la ciudad: ");

                                gets(nuevo->ciudad);

                                printf("Ingrese el estado: ");

                                gets(nuevo->estado);

                                printf("Intruduzca el numero telefonico: ");

                                gets(nuevo->telefono);

                                printf("Especifique el consumo en el PRIMER semestre(pesos): ");

                                scanf("%f", &nuevo->sem1);

                                while(nuevo->sem1<=0)

                                {

                                 printf("\nDato invalido !!");

                                 printf("Especifique correctamente el consumo en el PRIMER semestre(pesos): ");

                                 scanf("%d", &nuevo->sem1);

                                }

                                printf("Especifique el consumo en el SEGUNDO semestre(pesos): ");

                                scanf("%f", &nuevo->sem2);

                                while(nuevo->sem2<=0)

                                {

                                 printf("\nDato invalido !!\n");

                                 printf("Especifique correctamente el consumo en el SEGUNDO semestre(pesos): ");

                                 scanf("%d", &nuevo->sem2);

                                }

                                nuevo->anual=nuevo->sem1+nuevo->sem2;     

                                aux = raiz;

                                if(aux->numcli > nuevo->numcli)

                                {

                                nuevo->sig = aux;

                                raiz = nuevo;                           

                                }

                                else

                                {

                                 while( aux->sig!=NULL &&  aux->sig->numcli < nuevo->numcli )

                                 {

                                  aux = aux->sig;                                                    

                                  }

                                  if(aux->sig == NULL)

                                  {

                                  final = aux;

                                  final->sig = nuevo;

                                  nuevo->sig = NULL;

                                  final = nuevo;

                                  }                        

                                  else

                                  {

                                  nuevo->sig = aux->sig;

                                  aux->sig = nuevo; 

                                  }

                                  }

                     }

                     else

                         printf("\n-------------------------------WWW--------------------------------------\n");                         

             }

              system("pause");

                         system("cls");

         }

                         break;

                          

                                                                          }

                         case 4:// opcion para eliminar clientes de los ya agregados, y imprecion de lista exixtente

                        {

                              system("cls");

                          a=isEmpty();

                          if(a==1)

                          {

                                  system("cls");

                                  printf("Lista de clientes vacia!!\n");

                                  printf("\n");

                          }

                          else

                          {

                          printf("Ingresa el numero de cliente de la persona que deseas eliminar: ");

                   scanf("%d", &b);

                   v=validacion(b);

                   if(v==1)

                   {   

                       printf("\nCliente encontrado\n");

                       j=0;

                       while(j!=-1)

                       {

                                   printf("Eliminarlo del sistema?\n\n1) Si\n2) No\nOpcion: ");

                                   scanf("%d", &o);

                                   if (o>0&&o<3)

                                   {

                                                opc=o;

                                                j=-1;

                                   }

                                   else 

                                   printf ("\nOpcion invalida!!\n");                                     

                       }

                       if(opc==1)

                       {

                                 remove(b);

                                 printf("\n++++++Cliente eliminado++++++\n");

                       }

                       else

                           printf("\nEiminacion cancelada.\n");

                   }

                   else

                       printf("No se ha encontrado al cliente!!\n");

                   printf("\n");

                          }

                          

                          system("pause");

                          system("cls");

                         break;

         }  

                          case 5:// impresion de los clientes que exixten en el menu

                        {

                          system("cls");

                          a=isEmpty();

                          if(a==1)

                          {

                                  system("cls");

                                  printf("Lista de clientes vacia!!\n");

                                  printf("\n");

                                  system("pause");

                                  system("cls");

                          }

                          else

                          {

                          printf("\t==== IMPRECION DE LISTADO DE CLIENTES====\n");

                          printf("_________________________________________\n");

                          impresion_clientes();

                          system("pause");

                         system("cls");

                         }

                         break;

                          

                                                                          }  

                          case 6://impresion de reportes de los clientes por periodos

                        {

                          system("cls");

                           a=isEmpty();

                          if(a==1)

                          {

                                  system("cls");

                                  printf("Lista de clientes vacia!!\n");

                                  printf("\n");

                                  system("pause");

                                  system("cls");

                          }

                          else

                          {

                          printf("\t==== IMPRESION DE REPORTES====\n");

                          printf("_________________________________________\n");

                           menu_reportes(reportes);

                         system("cls");

                         }

                         break;

                          

                                                                          }  

                           case 7:// fin de nuestro programa opcion de salidaaa

                        {

                          system("cls");

                          printf("\n\n\n\n\n\n\n\n\n");

                          printf("\t\t____________________________________\n\n");

                          printf("\t\t\t ======GRACIAS POR USAR EL======\n\n");

                          printf("\t\t\t=====MENU DE ANDRES Y VICTOR======\n\n");

                          printf("\t\t_____________________________________\n\n");

                          printf("\n\n\n\n\n\n\n\n\n\n");

                          printf("_________________________________________\n");

                         break;

                         system("pause");

                         system("cls");

                          

                                                                                                                                                                                                                                                                                                                                  





               

    

}

}

      }

      while(opc!=7);

      

      }

int main()



{

    system("color 4e");

    int opc;

    menu(opc);//llamado de la funcion menu 

    system("PAUSE");

    return 0;

}

