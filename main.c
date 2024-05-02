
/* Ejercicio calculadora */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float tipooperacion(float,float,char);


void main() 
{
    char rta [2],operacion;
    float op1,op2;
    float resultado=0;
    
    
    do{ 
    
   	  printf ("Ingrese primer valor: \n");
	  scanf("%f",&op1);
	  printf("\n");
	  printf("ingrese segundo valor: \n");
	  scanf("%f",&op2);
    
    printf("ingrese el tipo de operacion: s (suma) r(resta) m(multiplicacion) d (division))");
    fflush(stdin);
	scanf("%c",&operacion);
	printf("\n");
    printf ("\n el resultado es: %.2f",tipooperacion(op1,op2,operacion)); 

    printf("\n");
	printf("Desea seguir ingresando operaciones? (si) o (no)\n");
	scanf("%s",rta);
	
	
     } while(rta=="si"); 
   
}
	
	
	float tipooperacion(float op1,float op2,char operacion)
	{ float resultado=0; 
	 switch (operacion) 
	 {
	 	case 's': 
	 	     resultado=op1+op2;
	 	    break;
	 	case 'r':
	 	    resultado= op1-op2;
	 	    break;
	 	case 'm': 
	 	    resultado=op1*op2;
	 	    break;
	 	case 'd':
	 		if(op2!=0)
	 	    resultado=op1/op2;
	 	    else 
	 	    { 
	 	     resultado=0;
	 	     printf(" No se puede realizar la operacion \n");
			 }
	 	    break;
	 	default: 
	 	    printf("Error");
	 	    resultado=0;
	 	    break;
	 }
	
	    return (resultado);
	}




