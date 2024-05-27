#include <stdio.h>
#include <stdlib.h>
//aritmetica de punteros
/*void main()
{
   
   int a=20;
   fun(&a);	
   printf("%d",a);
}

void fun(int *a)
{
	*a=30;
}*/

void fun(int*);
void main()
{
	//int v[10]={0,1,2,3,4,5,6,7,8,9};
	int v[10]={0};
	
	printf("Ingrese el elemento 0 ");
	scanf("%d",v);
	printf("Ingrese el elemento 4 ");
	scanf("%d",(v+4));
	fun(v);
	
	
	
}

void fun (int *v )
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\n",*(v+i));
	}
	
}
