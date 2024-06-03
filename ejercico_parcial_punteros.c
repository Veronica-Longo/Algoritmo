#include <stdio.h>
#include <stdlib.h>
#define tam 50
void cargar(int*,int*,int,int);
void mostrar(int*,int*);
void main()
{
	int opcion,x,y,vx[tam]={-1},vy[tam]={-1},i;
	for(i=0;i<tam;i++)
	{
		vx[i]=-1;
		vy[i]=-1;
	}
	do 
	{
	   system("cls");
	   printf("***** MENU GENERAL ********\n\n");
	   printf("\n1.Ingresar datos de tiros al arco");
	   printf("\n2.Evaluar las habilidades del arquero robot");
	   printf("\n3.Salir");
	   printf("\n\nSu opcion: ");
	   scanf("%d",&opcion);	
	   switch(opcion)
	   {
	   	    case 1:
	   	    	system("cls");
	   	    	printf("Coordenada X: ");
	   	    	scanf("%d",&x);
	   	    	printf("Coordenada Y: ");
	   	    	scanf("%d",&y);
	   	    	cargar(vx,vy,x,y);
	   	    	break;
	   	    case 2:
	   	    	break;
	   	    case 3:
	   	        break;
	   }
	}while(opcion!=3);
}

void cargar(int *vx,int *vy,int x,int y)
{
	int pos=0;
	while(pos<tam && *(vy+pos)!=-1)
	
		pos++;
	if(pos==tam)
	{
		printf("\n No hay mas lugar");
	    system("pause");
	}
	else
	{
		*(vx+pos)=x;
		*(vy+pos)=y;
	}
}

void mostrar(int*vx,int*vy)


{
	int pos=0,cafuera=0,cdentro=0;
	while(pos<tam && *(vy+pos)!=-1)
	{
		printf("\nCoordenada X : %d Coordenada Y %d",*(vx+pos),*(vy+pos));
	    if(*(vx+pos)>=0 && *(vx+pos)<=500)
	    {
	    	if(*(vy+pos)>=0 && *(vy+pos)<=250)
	    	{
	    		
	    		printf("Gol");
	    		cdentro++;
			}
			else
			{
				printf("Afuera");
				cafuera++;
			}
		}
		else
		{
			printf("\nAfuera");
			cafuera++;
		}
		pos++;
	}
	printf("\nCantidad de goles %d",cdentro);
	printf("\nCantidad de afueras %d\n",cafuera);
	system("pause");
}
