#include <stdio.h>
#include <stdlib.h>

void main()
{
	int v[10]={4,8,1,9,5,2,7,3,0,6};
	int j,i,min,pos,aux;
	//metodo de ordenamiento 
	for(j=0;j<10;j++)
	{
		for(i=j;i<10;i++)
		{
			if(i==j) //es la primera vez que pasa
			{
				min=v[i];
			    pos=i;
			}
		  else
		  {
			if(v[i]<min)
			{
			  min=v[i];
			  pos=i;
			}
		   }
		}
	
	}
	aux=v[j];
	v[j]=v[pos];
	v[pos]=aux;
	
	for(i=0;i<10;i++)
	{
		printf("[%d]",v[i]);
	}
}
