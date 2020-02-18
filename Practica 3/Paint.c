#include <stdio.h>
#include <stdlib.h>

/* Programa que me diga que tipo de variable introduce Nombre: Ramon Alberto Zapata Cruz Mat:1848881*/

int main() {
	char c;
	printf("Introduce un caracter:\n");
	c = getchar();
	int a = (int)c;
	if (48<= a && a <=57){
	printf("Numero Introducido\n");
	}else{
	if (65 <= a && a <=90){
		printf("Letra de alfabeto introducida \n");
	}else{
		if (97 <= a && a <=122){
printf("Letra minuscula inroducida:\n");
		}else{
			printf("Simbolo introducido");
			}
		}
	}
	putchar(c);
	printf("\n");
	
	
	return 0;
}
