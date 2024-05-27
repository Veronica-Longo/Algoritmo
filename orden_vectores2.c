#include <stdio.h>
#include <stdlib.h>

//orden de vectores
void main()
{
	int v[10]={4,8,1,9,5,2,7,3,0,6};
	int cambios=1,i,aux;
	while(cambios!=0)
	{
		cambios=0;
		for(i=0;i<9;i++)
		{
			if(v[i]>v[i+1])
			{
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				cambios=1;
			}
			
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("[%d]",v[i]);
	}
}
