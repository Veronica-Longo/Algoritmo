#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	char rta [2];
	printf ("Desea continuar?");
	scanf("%s",rta);
	
	
	while(strcmp (rta,"si")==0)
	{
	  printf("\n continua el programa");
		
		
	printf ("Desea continuar?");
	scanf("%s",rta); 
	}
}
