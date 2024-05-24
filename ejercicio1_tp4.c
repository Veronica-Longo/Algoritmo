#include <stdio.h>
#include <stdlib.h>
 /* Rellene un array con los números pares comprendidos entre 1 y 100 y muéstrelos en
pantalla en orden ascendente.*/


void main()
{
	int vector[51]={0};
	int i,x=0;
	

	for(i=0;i<=100;i++)
	{
		if((i%2)==0)
		{
		  	vector[x]=i;
		  	x++;
		}
	}
	
	for(i=0;i<=50;i++)
	{
		printf("%d\n",vector[i]);
	}
	
	

}


