#include <stdio.h>
#include <stdlib.h>

// Ramon Alberto Zapata Cruz 1848881 

int main() {
int matriz[3][3],i,j,n;
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf("Ingrese el numero de la posicion %d,%d: ",i+1,j+1);
	scanf("%d",&matriz[i][j]);
	}
}

system("cls"); 
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf(" %4d ",matriz[i][j]);
	printf("\n");
	}
}
printf("Introduzca el valor a multiplicar (entero) ");
scanf("%d",&n);
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf(" %4d ",matriz[i][j]*n);
	printf("\n");
	}
}
return 0;
}





