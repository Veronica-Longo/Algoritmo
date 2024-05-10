#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void main(){
int numdepa;
char cat_depa;
	
	
}

int resultado_monto(char cat_depa, int marcaup,char marcac){
	int montoexpe,base;
	switch(cat_depa){
		case 'p':
			base=4000;
		break;
		case 's':
			base=3000;
		break;
		case 'd':
			base=2000;
		break;	
		case 'm':
		     base=1000;
		break;
	if(marcaup==1){
		montoexpe=base+2500;
	}
	else if(marcaup=='s'){
		montoexpe=base+1500;
	}	
	else{
		montoexpe=base+2500+1500;
	}
	return montoexpe;
	}
	
void total_cant_depaD (int cant_depa_up){
	printf("Total de departamento de categoria D que son de uso profesional: %d",cant_depa_up);
	
}

}
