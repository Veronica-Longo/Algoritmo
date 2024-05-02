#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void main()
{
	//char salir[10];
	//scanf("%s",&salir);
	
	//Estrucutura if , else (si )
	
	//if(strcmp (salir, "salir")==0)// == comparar, = asignar, 
	//{ 
	//printf("ingreso la palabra salir");
	//}
	//else 
	//{ 
	//printf("no ingreso");
	//}
	
	// Estructura if, else if (Sino) 
	
	//int a;
	//printf("ingrese un valor entre 0 y 3");
	//scanf("%d",&a);
	//if(a==0)
	//printf("cero");
	
    //else if (a==1)
    //printf("uno");
    
    //else if (a==2)
    //printf("dos");
    
    //else if (a==3)
    //printf("tres");
    
    //else 
    //printf("valor erroneo"); 
    
    //Estrucutura swicht (segun sea)
    
    //int a;
	//printf("ingrese un valor entre 0 y 3");
	//switch (a)
    //case 0: 
    //printf("cero");
    //break;
    //case 1: 
    //printf ("uno");
    //case 3: 
    
    //Estrucutura de repeticion for (PARA) 
    
   // int i; //declarar variable
    //for(i=1;i<=10;i++)
   // {
    	//printf("%d hola\n",i);
//	}
	
//	printf("ultimo %d",i-1);
    
  //For aninado - Ejemplo tablas de multiplicar
   int i,j; 
   for(j=1;j<=10;j++)
   {
   	for(i=1;i<=10;i++) 
        {
    	printf("%d x %d=%d\n",j,i,i*j);
    	}
    	printf("\n");
    	getche();
    	prinft("\n");
    
    	system("cls");// limpiar pantalla 
	}
    
  


}
