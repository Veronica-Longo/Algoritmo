#include <stdio.h>
#include <stdlib.h>


void main () {
	int f=0;
	int maxlegajo,legajo;
	float monto; 
	float maxmonto=0;
	
	printf("ingrese el legajo");
	scanf("%d",&legajo);
	
	while(legajo!=0) 
	{ 
	 monto=funca();
	  if(f==0)
	  {
	  	maxlegajo=legajo;
	  	maxmonto=monto;
	  	f=1;
	  }
	  else 
	  { 
	    if(monto>maxmonto)
	  {
	  	maxlegajo=legajo;
	  	maxmonto=monto;
	  }
	   
	  }
	  printf("ingrese el legajo");
	   scanf("%d",&legajo);
	  }
	  if(f!=0)
	    printf("El empleado que mayor monto tiene es el legajo : %d y monto max :%.2f \n", maxlegajo, maxmonto);
	  else 
	     printf ("\n No se ingreso datos");
	
		
}


}
