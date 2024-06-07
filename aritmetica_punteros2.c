

#include <stdio.h>
#include <stdlib.h>
#define cupo 100
/*En la 1er opción debe pedir en el main() un DNI e ingresarlo al vector de personas no gratas mediante 
una función que se le pase por parámetros el vector de personas no gratas  y el DNI de la persona prohibida.*/
void registrar(int *personas_no_gratas,int dni,int pos)
{
	*(personas_no_gratas+pos)=dni; //vector + la posicion = dni
	
}

/*En la 2da opción debe ingresar en el main() el DNI debe invocar a una función que se pasa el vector cargado en el punto 1 
y esta devolverá un entero de 0,1 siendo 0 puede pasar , 1 ingreso prohibido.
Si la persona puede pasar, debe  ingresar la MARCA y llamar a una función que se le pase los dos vectores de ingreso más el DNI 
y la MARCA para que los incorpore a los vectores, si no hay más lugar debe informarlo.*/
int ingreso(int *personas_no_gratas,int dni,int pos)
{
	
    while (pos<cupo || *(personas_no_gratas+pos)!=0)
    {
        if (*(personas_no_gratas+pos)==dni)
        {
            return 1;
        }
    }
      return 0;
}

/*En la 3ra opción se le pasan los vectores cargados en el punto 2 
e informará la cantidad total de personas ingresadas que no pertenecen a la organización y total ingresados que pertenecen a la organización.*/
int cantidad (int *vdni,int dni,char *vmarca,char marca,int pos1)
{
	*(vdni+pos1)=dni;
	*(vmarca+pos1)=marca;
	
	
	
}

void main()
{
    int personas_no_gratas[cupo],vdni[cupo];
    int pos=0,pos1=0;
	int dni,opc;
	char marca,vmarca[cupo];



    do
    {
    	system("cls");
    	printf("\n***************** MENU *************************");
	    printf("\n|1-Declarar persona no grata.|");
      	printf("\n|2-Ingresar persona.         |");
	    printf("\n|3-Estadistica.              |");
     	printf("\n|4-Salir.                    |");
	    printf("\n\nSu opcion: ");
	    scanf("%d",&opc);
	
    	switch(opc)
        {
	        case 1:
	    	  system("cls");
			   printf("\nIngrese DNI:");
			   scanf("%d",&dni);
			   registrar(personas_no_gratas,dni,pos);
			   pos++;
			   printf("DNI REGISTRADO COMO PERSONA NO GRATA\n");
			   system("pause");
			  break;
		    case 2:
			   system("cls");
			   printf("\nIngrese DNI:");
			   scanf("%d",&dni);
			   if(ingreso(personas_no_gratas,dni,pos)==1)
			   {
			   	    printf("\nINGRESO PROHIBIDO");
			   	   
			   }
			   else 
			   {
			   	    printf("\nPUEDE INGRESAR");
			        printf("\nPertenece a la organizacion?(S/N):");
                    fflush(stdin);
                    scanf("%c",&marca);
			   	 
			   }
			  
			    system("pause");
			    break;
		    case 3:
		        printf("Cantidad de personas que no pertenecen a la organizacion: %d\n");
		        printf("Toltal de personas que pertenecen a la organizacion: %d\n");
			    system("pause");
			    break;
		    case 4:
		        break;
			default:
				system("cls");
				printf("Opcion no valida.Ingrese una opcion valida\n");
				system("pause");
				break;
     	}
    	
	}while(opc!=4);

	
}
