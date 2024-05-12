//Ejercicio Rendición de Gastos de Viáticos


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float monto_viatico(float,float,float);

void main()
{
	int codlegajo,contv;
	float km,gastosp,gastosc,anticipo;
	char cat;
	
	printf("\nIngrese codigo de legajo:\n");
	scanf("%d",&codlegajo);
	
	printf("Ingrese categoria del empleado:\n");
	printf("'v'= Vendedor\n");
	printf("'j'= Jefe comercial\n");
	printf("'g'= Gerente de producto\n");
	fflush(stdin);
	scanf("%c",&cat);
	
	printf("Ingrese kilometros recorridos:\n");
	scanf("%f",&km);
	
	printf("Ingrese gastos de peaje:\n");
	scanf("%f",&gastosp);
	
	printf("Ingrese gastos de comidas:\n");
	scanf("%f",&gastosc);
	
	if(cat=='v')
	{
		printf("Ingrese anticipo:\n");
	    scanf("%f",&anticipo);
	}
	
	printf("El monto del viatico es:%2.f",monto_viatico(km,gastosp,gastosc));
	
	
}


float monto_viatico(float km,float gastosp,float gastosc)
{
	float total,kmv;
	if(km<=2000){
		kmv=10*km;
	}
	else {
		kmv=(10*km)*5;
		
	}
	total=kmv+gastosp+gastosc;
	return (total);
}


void mostrar(int cant_empleados)
{
	
}
