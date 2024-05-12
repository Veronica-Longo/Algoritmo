#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int totalvuelo(int tiempo,int cant_escalas,int tiempo_estimado);
void mostrar(int,int,int,int);
void main()
{
	int numvuelo,tiempo,cant_escalas,tiempo_estimado=30,cont1=0,cont2=0,cont3=0,bandera=0,mintiempo;
	char destino,escala,rta[2];
	
	do
	{
	    printf("\nIngrese numero de vuelo\n");
	    scanf("%d",&numvuelo);
	    
	    printf("Ingrese destino:\n");
	    printf("'N'nacional\n");
	    printf("'M'internacional mercosur\n");
	    printf("'I'internacional fuera del mercosur\n");
	    fflush(stdin);
	    scanf("%c",&destino);
	    
	    printf("Ingrese tiempo de vuelo en minutos:\n");
	    scanf("%d",&tiempo);
	    
	    printf("Indicar si el vuelo tiene escalas: 'S','N'\n");
	    fflush(stdin);
	    scanf("%c",&escala);
	    if(escala=='S')
		{  
		    printf("Ingrese cantidad de escalas:\n");
	        scanf("%d",&cant_escalas);
		}
		
	    
		 switch(destino)
		{
			case 'N':
				cont1=cont1+1;
				break;
			case 'M':
				cont2=cont2+1;
				break;
			case 'I':
				cont3=cont3+1;
				break;
		}
		
	
		if(bandera==0)
		{
			mintiempo=tiempo;
			bandera=1;
		}
		else
		{
			if(tiempo<mintiempo)
			{
				mintiempo=tiempo;
				
			}
		}
		
		  
		
		printf("____________________________________________________________\n");
		printf("Desea seguir ingresando datos?:si/no\n");
		scanf("%s",rta);
	}while(strcmp(rta,"si")==0);
	
	printf("Numero de vuelo: %d\n",numvuelo);
	printf("Tiempo total de vuelo:%d\n",totalvuelo(tiempo,cant_escalas,tiempo_estimado));
	 mostrar(cont1,cont2,cont3,mintiempo);
	
}

//funcion 1
 int totalvuelo(int tiempo,int cant_escalas,int tiempo_estimado)
 {
 	int tiempototal;
 	tiempototal=tiempo+(tiempo_estimado * cant_escalas);
 	
 	return(tiempototal);
 	
 }
 
 
 //funcion 2
 void mostrar(int cont1, int cont2,int cont3,int mintiempo)
 {
 	printf("Cantidad de vuelos con destino nacional:%d\n",cont1);
 	printf("Cantidad de vuelos con destino internacional mercosur:%d\n",cont2);
 	printf("Cantidad de vuelos con destino internacional fuera del mercosur:%d\n",cont3);
 	printf("El numero de vuelo con menor tiempo de vuelo que no haya hecho escalas:%d\n",mintiempo);
 
 }
