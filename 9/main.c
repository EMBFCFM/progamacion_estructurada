#include<stdio.h>
#include<stdlib.h>

int i=0, j=0,fec['n'];
char nom['n']['n'],apep['n']['n'], apem['n']['n'], nome['n']['n'], nomc['n']['n'], gen['n']['n'];

char datos[10][10][31];

int main()
{
	for(i=0;i<10;i++)
	{   printf("\n alumno %d",i+1);
		printf("\n Escribe el nombre: ");
		fflush(stdin);
		scanf("%s",&nom[i]);
		printf("\n Escribe el apellido paterno: ");
		fflush(stdin);
		scanf("%s",&apep[i]);
		printf("\n Escribe el apellido materno: ");
		fflush(stdin);
		scanf("%s",&apem[i]);
		printf("\n Escriba su fecha de nacimiento: ");
		fflush(stdin);
		scanf("%d",&fec[i]);
		printf("\n Escribe el nombre de la escuela: ");
		fflush(stdin);
		scanf("%s",&nome[i]);
		printf("\n Escribe el nombre de la carrera: ");
		fflush(stdin);
		scanf("%s",&nomc[i]);
		printf("\n ?Escribe  eres hombre o mujer?: ");
		fflush(stdin);
		scanf("%s",&gen[i]);
		printf("\n\n");
	}
for(i=0; i<10; i++)
	{
		printf("\n El nombre del alumno %d es: %s\n", i+1, nom[i]);
		printf("\n Su apellido paterno es: %s\n", apep[i]);
		printf("\n Su apellido materno es: %s\n", apep[i]);
		printf("\n La fecha de nacimiento del estudiante es: %d \n",fec[i]);
		printf("\n El nombre de la escuela del estudiante es: %s\n", nome[i]);
		printf("\n El nombre de la carrera del estudiante es: %s\n", nomc[i]);
		printf("\n El genero del estudiante es: %s\n\n", gen[i]);

	}

	return 0;

}
