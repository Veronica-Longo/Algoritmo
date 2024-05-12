#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Ejercicio Call Center

void main()
{
	char codcliente[8],rta[2];
	int codproducto,cant_producto,dia;
	
    do{
     	
     	printf("\nIngrese codigo de cliente: ");
	    scanf("%s",codcliente);
	
	    printf("\nIngrese codigo de producto:\n");
	    printf("1- Bolsa de 2kg\n");
	    printf("2- Bolsa de 10kg\n");
	    printf("3- Pedido de service\n");
	    scanf("%d",&codproducto);
	
	    printf("\nIngrese cantidad de producto en bolsas: ");
        scanf("%d",&cant_producto);
        
        printf("\nIngrese numero del dia de entrega/visita:\n");
        printf("1=Lunes.\n");
        printf("2=Martes.\n");
        printf("3=Miercoles.\n");
        printf("4=Jueves.\n");
        printf("5=Viernes.\n");
        printf("6=Sabado.\n");
	    scanf("%d",&dia);
	    
	    
	    
		
		printf("___________________________________________________________\n");
		printf("\nDesea cerrar el turno,SI/NO?:\n");
		scanf("%s",rta);   
	        
	        
	        
      }while(strcmp(rta,"NO")==0);

}

