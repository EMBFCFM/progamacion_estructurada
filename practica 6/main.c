#include<stdio.h>
#include<stdlib.h>
//Ramon Alberto Zapata Cruz	Matricula:1848881
int main()
{
	int n1,n2,i;
	float n=0;
	printf("Bienvenido\n");
	printf("Ingrese un numero mayor o igual que cero, en cambio ingrese un numero negativo para terminar:\n");
	scanf("%d", &n1);
	do{
		printf("\n\nIngrese un numero mayor o igual que cero, en cambio ingrese un numero negativo para terminar\n");
		scanf("%d",&n1);
		n2=n2+n1;
		i++;
	}while(n1>=0);
	n= n2/i;
	printf("El promedio es: %.2f\n",n);
	return 0;

}
