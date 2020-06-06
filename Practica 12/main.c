#include<stdio.h>
#include<stdlib.h>

//Ramon Alberto Zapata Cruz Matricula 1848881
int i;
int ing(int a);
int mos(int b);
int fec['n'];
char nom['n']['n'],apep['n']['n'], apem['n']['n'], nome['n']['n'], nomc['n']['n'], gen['n']['n'];

int main()
{
	ing(i);
    mos(i);
	return 0;
}

int ing(int a)
{
	for(i=0; i<1;i++)
	{ 	printf("Alumno %d\n",i+1);
		printf("Escribe el nombre:\n");
		fflush(stdin);
		scanf("%s", &nom[i]);
		printf("Escribe el apellido paterno:\n");
		fflush(stdin);
		scanf("%s", &apep[i]);
		printf("Escribe el apellido materno:\n");
		fflush(stdin);
		scanf("%s", &apem[i]);
		printf("Escriba su fecha de nacimiento:(ddmmaa)sin usar diagonales\n");
		fflush(stdin);
		scanf("%d",&fec[i]);
		printf("Escribe el nombre de la escuela:\n");
		fflush(stdin);
		scanf("%s", &nome[i]);
		printf("Escribe el nombre de la carrera:\n");
		fflush(stdin);
		scanf("%s", &nomc[i]);
		printf("¿Eres hombre o mujer?:\n");
		fflush(stdin);
		scanf("%s", &gen[i]);
		printf("\n\n");
	}
}
int mos(int b)
{
		for(i=0;i<1;i++){
		printf("El nombre del alumno %d es: %s\n", i+1,nom[i]);
		printf("Su apellido paterno es: %s\n", apep[i]);
		printf("Su apellido materno es: %s\n", apem[i]);
		printf("La fecha de nacimiento del estudiante es: %d \n",fec[i]);
		printf("El nombre de la escuela del estudiante es: %s\n", nome[i]);
		printf("El nombre de la carrera del estudiante es: %s\n", nomc[i]);
		printf("El genero del estudiante es: %s\n\n", gen[i]);
	}
	   return 0;
	
}
