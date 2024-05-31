#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 300

//Menu con punteros.
void cargar(int*,char (*)[30],int,char *,int *);
void listar(int *,char(*)[30],int *);

void main()
{
	int *pun=malloc(sizeof(int)),opcion,vdni[tam]={0},dni;
	char vnombre[tam][30],nombre[30]; //Defino matriz que contiene los nombres
	*pun=0;
	do 
	{
	   system("cls");
	   printf("***** MENU GENERAL ********");
	   printf("\n1.Carga de datos");
	   printf("\n2.Listar datos");
	   printf("\n3.Salir");
	   printf("\n\nSu opcion: ");
	   scanf("%d",&opcion);
	   
	   switch(opcion)
	   {
	   	    case 1: 
	   	        system("cls");
	   	        printf("Ingrese DNI: ");
	   	        scanf("%d",&dni);
	   	        printf("Ingrese nombre: ");
	   	        fflush(stdin);
	   	        gets(nombre);
	   	        if(*pun<tam)
	   	        {
	   	           cargar(vdni,vnombre,dni,nombre,pun);	
				}
				else 
				{
					printf("No hay mas lugar para almacenar datos");
					system("pause");
				}
	   	       
	   	     	 break;
	   	    case 2:
	   	    	listar(vdni,vnombre,pun);
	   	    	 break;
	   	    case 3:
	   	    	 break;
	   }
	  
	}while(opcion!=3);
}

void cargar(int *vdni,char(*vnombre)[30],int dni,char *nombre, int *pos)
{
	 *(vdni+*pos)=dni;
	 strcpy(*(vnombre+*pos),nombre);
	 (*pos)++;
	 
}
void listar(int *vdni,char(*nombre)[30],int *pos)
{
	int i;
	system("cls");
	printf("   DNI            NOMBRE");
	printf("--------------------------------------------------------------------------------------");
	for(i=0;i<*pos;i++)
	{
		printf("\n%d8",*(vdni+i));
		printf("%s",*(nombre+i));
		
	}
	printf("\n");
	system("pause");
   	
}
