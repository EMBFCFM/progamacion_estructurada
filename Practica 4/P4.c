#include <stdio.h>
#include <stdlib.h>

/* Calculadora simple  Nombre: Ramon Alberto Zapata Cruz  Matricula: 1848881*/

int main() {
	
	char a;
	float n1,n2,result;
	printf("Que desea hacer: +-*/");
	scanf("%c",&a);
	if (a=='+' || a=='-' || a=='*' || a=='/')
	{
	
	printf("Ingrese el nemero 1");
	scanf("%2f",&n1);
	printf("Ingrese el nemero 2");
	scanf("%2f",&n2);	
	switch(a){
		case '+':
			result = n1 + n2;
			break;
			
		case '-':
			result = n1 - n2;
			break;
			
		case '*':
			result = n1 * n2;
			break;
			
		case '/':	
			result = n1 / n2;
			break;
					
	}
	printf(" %2f %c %2f = %2f", n1,a,n2,result);
	}
	else 
	printf("Error operador no valido");
	return 0;
}
