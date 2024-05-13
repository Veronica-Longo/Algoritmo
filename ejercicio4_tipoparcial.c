/*Parcial: calculo de max calculo min
combinacion
promedio 
funciones con variables estaticas*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //tiene una funcion para pasar el caracter en mayuscula
#include <conio.h> //tiene la funcion getch y getche para leer caracteres
//Ejercicio 4

int eval(int,int,int); //declaracion de prototipos
void muestra(int,int);
void main()
{
	int f,cod,dias,f1,f2,f3,cefn=0,codmax=0,diasmax=0,prom;
	char profesional[3],sigue; // hay que poner 1 mas a la cantidad de caracteres 
	
	do
	{
		//Entrada de datos
		printf("Codigo del Empleado:\n");
		scanf("%d",&cod);
		printf("Dia trabajados:\n");
		scanf("%d",&dias);
		printf("Profesional si/no:");
		fflush(stdin); //limpio el buffer 
		scanf("%s",profesional);
	    //gets(profesional);
		printf("Calidad y cantidad de trabajo:\n");
		scanf("%d",&f1);
		printf("Cooperacion:\n");
		scanf("%d",&f2);
		printf("Capacidad de analisis y creatividad:\n");
		scanf("%d",&f3);
		
		muestra(cod,eval(f1,f2,f3)); //usa una funcion con otra funcion dentro
		
		prom=(f1+f2+f3)/3;
		if(prom<=3)
		 cefn++;
		if (f==0)
		{
			codmax=cod;
			diasmax=dias;
			f=1;
		}
		else 
		{
			if(dias>diasmax)
			{
				codmax=cod;
				diasmax=dias;
			}
		}
		printf("\nDesea seguir? (s/n):");
		sigue=getche();
		sigue=toupper(sigue); //convertir en mayus
	
	}while(sigue=='S');
	printf("\n cantidad de empleados profesionales fuera de nivel %d",cefn);
	printf("\n codigo de empleado %d con mayor cantidad de dias trabajados %d",codmax,diasmax);
}

//1° hacer las funciones

//Funcion 1 
int eval(int f1,int f2,int f3)
{
	int retorno;
	if(f1>=4 && f2>=4 && f3>=4)
	     retorno=1;
    else 
         retorno=0;
         
    return(retorno);
}

//funcion 2
void muestra(int cod,int puntaje)
{
	if(puntaje==1)
    {
	     printf("\n TIENE CAPACIDAD DE DESARROLLO");
	}
	else{
		printf("\n NO TIENE CAPACIDAD DE DESARROLLO");
	}
}
