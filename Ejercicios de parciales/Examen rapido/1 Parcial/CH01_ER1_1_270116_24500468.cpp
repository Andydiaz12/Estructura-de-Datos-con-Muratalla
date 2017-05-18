/*  José Andrés Díaz Escobar
    27 de Enero del 2016
    Escribir un programa en C que lea desde teclado el importe bruto de una factura y determine el importe neto según los siguientes criterios:
- Importe bruto menor o igual de 20,000 ->    sin descuento.
- Importe bruto mayor de 20,000 ->    25% descuento. 
NOTA: Recuerda que el importe total de la factura sería: importe bruto -y en caso de ser necesario: menos el descuento- y sumarle el IVA (16%).
La impresión deberá ser como se indica a continuación (intenta que salga lo mejor posible tu tabla):

Ejemplo 1:
	Introduce el importe bruto: 10,000.00
	DESCUENTO?			IMPORTE TOTAL
------------------------------------------------------------------
	NO				11,600.00

Ejemplo 2:
	Introduce el importe bruto: 100,000.00
	DESCUENTO?			IMPORTE TOTAL
------------------------------------------------------------------
	SI				87,000.00

 (Se calculó: 100,000.00 - 25% = 75,000.00. Al 75000.00 + IVA = 87,000.00).*/
 
 #include <stdio.h>
 #include <cstdlib>
 
 int main (){
     float importe, preciofinal, prepreciofinal;
     printf("Introduce el importe bruto:\n");
     scanf("%f",&importe);
     
     if(importe <= 20000){
                preciofinal=importe*1.16;
                printf("\n\nEl precio del producto es de %.2f\nDESCUENTO      IMPORTE TOTAL\n NO                %.2f\n", importe, preciofinal);
                }
     if(importe > 20000){
                prepreciofinal=(importe-(importe*.25));
                preciofinal=prepreciofinal+(prepreciofinal*0.16);
                printf("\n\nEl precio del producto es de %.2f\nDESCUENTO      IMPORTE TOTAL\n SI                %.2f\n", importe, preciofinal);
                }
     system ("PAUSE");
     return 0;
 }
