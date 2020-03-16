#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n=0,s=0,i=0;
	float p=0;
	do{
		s=s+n;
		i++;
		printf("Ingresa un numero mayor o igual a 0 o un numero menor para terminar\n");
		scanf("%d",&n);
	}while(n>=0);
	p= s/(i++);
	printf("El promedio es juas %d",i);
	return 0;
}
