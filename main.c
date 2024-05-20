#include <stdio.h>
#include <stdlib.h>
#define cp 30
void main()
{
	float temperatura[cp]={0},promedio;
	int i,pos=0,suma=0;
	char rta;
	do 
	{
	   printf("Ingrese Temperatura: ");
	   scanf("%f",&temperatura[cp]);
	   
	   for(i=0;i<30;i++)
	   
	   	  {
	   	  	pos++;
	   	  	suma=suma+temperatura[cp];
		  }
		  
	     promedio=suma/pos;
	     
	     
	    
	    
	   
	   
	   
	   printf("Desea seguir ingresando temperaturas?");
	   fflush(stdin);
	   scanf("%c",&rta);
		
     }while(rta=='s');
     
     printf("El promedio de mayor: %f",promedio);
}
