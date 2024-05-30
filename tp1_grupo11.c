#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void registrar(char);
int devolver(int);
void mayor(float);
void main()
{
	
	int opc,dia;
	char usuario[15],cat;
	float multa;
	
	
	printf("Ingrese usuario:\n");
	gets(usuario);
    do
	{
		printf("\nMenu");
	    printf("\nElija una opcion:");
	    printf("\n1.Registrar un libro");
	    printf("\n2.Devolver un libro");
	    printf("\n3.Solicitar informe");
	    printf("\n");
	    scanf("%d",&opc);
	    fflush(stdin); 
	    
	}while(opc==3);
	    
	
	   
	    
	    switch(opc)
	    {
	    	case 1: 
	    	    registrar(cat);
	    	    break;
	    	
	    	case 2:
	    	    devolver(dia);
	    	    mayor(multa);
	    	    break;
	    	case 3:
	    		break;
		}
	}
	


//Funcion muestra opciones si el usuario ingresa 1.Registrar un libro.
void registrar(char cat)
{
	char genero[20];
	printf("\nIngrese categoria del libro");
	printf("\n'f'-Ficcion Juvenil");
	printf("\n'e'-Educativo\n");
	printf("'i'-Infantil\n");
	scanf("%c",&cat);
	fflush(stdin);
	if(cat=='f')
	{
		printf("Ingrese genero del libro\n");
	    printf("Romance\n");
	    printf("Fantasia\n");
	    printf("Ciencia ficcion\n");
	    gets(genero);
		
	}
	else if(cat=='e')
	{   printf("Ingrese genero del libro\n");
		printf("Matematica\n");
	    printf("Biologia\n");
	    printf("Ciencias sociales\n");
	    gets(genero);
	}
	else if(cat=='i')
	{
		printf("Ingrese genero del libro\n");
		printf("Cuentos\n");
	    printf("Historietas\n");
	    printf("Interactivos\n");
        gets(genero);
	}

}

//Funcion muestra opciones si el usuario ingresa 2.Devolver un libro
int devolver(int dia)
{
	int cont_mult=0,multa;
	
	printf("Ingrese dias de retraso:\n" );
	scanf("%d",&dia);

    if(dia>3)
    {
    	cont_mult++;
	}
	else
	{
		printf("No debe multa");
	}
     if(dia>7)
	{
		multa=(150.5*dia)*1.5;
		
	}
	else
	{
		multa=150.5*dia;
	}

	printf("Valor multa:%d",multa);
	
	return(multa);
}

void mayor(float multa)
{
	int f=0;
	float maxmulta=0;
	if(f==0)
	{
		maxmulta=multa;
		f=1;
	}
	else
	{
		if(multa>maxmulta)
		maxmulta=multa;
	}
	printf("la mayor multa es de %f",maxmulta);
}

void informar()
{
	
}







