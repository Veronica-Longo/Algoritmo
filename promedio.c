#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void main() 

{
int suma=0,cont=0,va,promedio;
do {
	print("ingrese un valor:");
	scanf("%d",&va);
	suma=suma+va;
	cont=cont+1;
     
}
	 

while (va!=0);{
  printf("la suma es: %d",suma);
   
   }
promedio= suma/cont;
printf("el promedio es : %d",promedio);

}
