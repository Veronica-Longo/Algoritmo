//Arrancar con las funciones 
//conviene hacerlo por do while
/*Ejercicio control de peajes*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /*libreria para getche*/
#include <ctype.h> /*libreria para*/
#include <string.h>/* libreria para strcmp*/

/*declarar prototipos*/
float cobrar(float,int,char); 
float vuelto(float,float); 
void muestra(float,float);

void main () {

    char salida,categoria[10],horario; /*declaracion de variables tipo string,char*/
    int dia,cavehp=0,pases=0; /*declaracion de variable tipo entero*/
    float base,monto,mvuelto,imp_cli,tot_pases=0; /*declaracion de variable tipo reales*/
 
    do{
    	printf("\nIngrese la categoria del vehiculo: ");
    	fflush(stdin);
    	gets(categoria);
    	printf("Ingrese dia de la semana 1-7");
    	scanf("%d",&dia);
    	printf("Ingrese el horario a-Pico b-No pico\n");
    	scanf("%c",&horario);
    	if(strcmp(categoria,"auto")==0) /*strcmp para comparacion*/ 
    	     base=10;
    	else if(strcmp(categoria,"moto")==0)
    	     base=5;
        else if(strcmp(categoria,"camioneta")==0)
             base =15;
        else if(strcmp(categoria,"camion")==0)
             base=20;
             
        /*invocar la funcion*/
          monto=cobrar(base,dia,horario);  
          
          printf("Ingrese el importe del cliente: ");
          scanf("%f",&imp_cli); /* preguntarle al usuario cuanto dinero le entrego el cliente*/
          
		  mvuelto=vuelto(monto,imp_cli);
		  muestra(monto,mvuelto);
		  if(strcmp(categoria,"auto")==0 && horario=='a')
		      cavehp++;
		    pases++;
		    tot_pases=tot_pases+monto;
		      
	      printf("Desea continuar (s/n)");
	      salida=toupper(getche());
	 
       }while((salida=='S'));
       printf("cantidad de ventas de autos hora pico: %d",cavehp);
       printf("cantidad total de pases %d con monto %2.f",pases,tot_pases);

}

/* Primera funcion*/
float cobrar(float bc,int dia,char ho) /*declaro la funcion del importe con los parametros base del calculo,el dia y el horario */
 {
    float retorno;	/*variable de retorno*/
 	
 	switch (dia)
 	{
 		case 1:
 		case 2:
 		case 3:
 		case 4:
 		case 5:
 		    if(ho=='a')
 		    {
 		    	retorno=bc+(bc*.20); /*si es hora pico*/
 		    	
			 }
			 else 
			 {
			 	retorno=bc-(bc*.20); /* si no es hora pico*/
			 }
			 break;
		case 6:
		case 7: 
		    retorno=bc-(bc*.20);
		    break;
	 }
	 
	 return(retorno); /*devuelve la variable de retorno*/
	 
 }
 
 /*segunda funcion vuelto*/
 
 float vuelto (float cobrar, float cliente) /* declaro los parametros importe a cobrar y el importe de dinero entregado*/
 {
 	return (cliente-cobrar); 
 }
 
 /*tercera funcion*/
 
 void muestra(float cobrar, float vuelto) /*informar el importe a cobrar*/
 {  
    system("cls"); /*limpiar la pantalla*/
 	printf("el importe a cobrar es %.2f",cobrar);
 	printf("\nEl vuelto es: %.2f",vuelto);
 }
