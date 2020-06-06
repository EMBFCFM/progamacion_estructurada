#include<stdio.h>
#include<stdlib.h>

//Ramon Alberto Zapata Cruz		Matricua:1848881
int i,x; int ing(int x); int mos(int w); int a(int y);
int fec['n'];    char nom['n']['n'], apep['n']['n'], apem['n']['n'], nome['n']['n'], nomc['n']['n'], gen['n']['n'];

int main()
{
	printf("Ingrese el numero personas a registrar:\n");
	scanf("%d",&x);
	ing(x);
    mos(x);
    a(x);
	return 0;
}

int ing(int x)
{
	for(i=0; i<x;i++)
	{   printf("alumno %d\n",i+1);
		printf("Escribe el nombre:\n");
		fflush(stdin);
		scanf("%s",&nom[i]);
		printf("Escribe el apellido paterno:\n");
		fflush(stdin);
		scanf("%s", &apep[i]);
		printf("Escribe el apellido materno:\n");
		fflush(stdin);
		scanf("%s",&apem[i]);
		printf("Escriba su fecha de nacimiento:formato(ddmmaa)\n");
		fflush(stdin);
		scanf("%d",&fec[i]);
		printf("Escribe el nombre de la escuela:\n");
		fflush(stdin);
		scanf("%s",&nome[i]);
		printf("Escribe el nombre de la carrera:\n");
		fflush(stdin);
		scanf("%s",&nomc[i]);
		printf("¿Escribe  eres hombre o mujer?:\n");
		fflush(stdin);
		scanf("%s", &gen[i]);
		printf("\n\n");
	}	
}

int mos(int w)
{
		for(i=0;i<x;i++)
	{
		printf("\n\n");
		printf("El nombre del alumno %d es: %s\n", i+1, nom[i]);
		printf("Su apellido paterno es: %s\n", apep[i]);
		printf("Su apellido materno es: %s\n", apep[i]);
		printf("La fecha de nacimiento del estudiante es: %d\n",fec[i]);
		printf("El nombre de la escuela del estudiante es: %s\n", nome[i]);
		printf("El nombre de la carrera del estudiante es: %s\n", nomc[i]);
		printf("El genero del estudiante es: %s\n", gen[i]);
	   system("pause");
	}
}

int a(int y)
{
	FILE*fp;
	fp=fopen("Alumnos.txt","w");
		for(i=0; i<x; i++)
	{
		fprintf(fp,"El nombre del alumno %d es: %s\n", i+1, nom[i]);
		fprintf(fp,"Su apellido paterno es: %s\n", apep[i]);
		fprintf(fp,"Su apellido materno es: %s\n", apep[i]);
		fprintf(fp,"La fecha de nacimiento del estudiante es: %d\n",fec[i]);
		fprintf(fp,"El nombre de la escuela del estudiante es: %s\n", nome[i]);
		fprintf(fp,"El nombre de la carrera del estudiante es:%s\n", nomc[i]);
		fprintf(fp,"El genero del estudiante es: %s\n", gen[i]);
	    fprintf(fp,"\n\n");
	}
	fclose(fp);
	
}
