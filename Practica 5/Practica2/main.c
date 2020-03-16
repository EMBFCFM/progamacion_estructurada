#include <stdio.h>
#include <stdlib.h>

/* Practica 6 Hacer un ciclo while para sumar N numeros y sacar el promedio Ramon Alberto Zapata Cruz matriculo:184888 */

int main() {
	int n=0,s=0,i;
	float p=0;
	printf("Ingrese un numero mayor o igual a 0 o un numero menor para terminar\n");
	scanf("%d",&n);
	while(n>0){
		s = s+n;
		i++;
		printf("Ingrese un numero mayor o igual a 0 o un numero menor para terminar\n");
	scanf("%d",&n);
	}
	p= s/(i++-1);
	printf("El promedio es: %f\n",p);
	
	
	return 0;
}
