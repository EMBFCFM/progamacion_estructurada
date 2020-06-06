#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int n1,n2,s,r,m,d;
	printf("nIntroduzca el primer numero positivo o negativo:\n");
	scanf("%d",&n1);
	printf("Introduzca el segundo numero positivo o negativo:\n");
	scanf("%d",&n2);
	
	s=n1+n2; 
	r=n1-n2;
	m=n1*n2;
	d=n1/n2;
	printf("La suma de %d + %d es: %d\n",n1,n2,s);
	printf("La resta de %d - %d es: %d\n",n1,n2,r);
	printf("La multiplicacion de %d * %d es: %d\n",n1,n2,m);
	printf("La division de %d / %d es: %d\n",n1,n2,d);
	
	if(n1>n2)
		printf("%d es mayor que el num2\n", n1);
	else
		if(n1==n2)
			printf("%d es igual que el segundo numero\n",n1);
		else
			printf("%d es menor que el segundo numero\n",n1);
	return 0;	
	
	
	
}
