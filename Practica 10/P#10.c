#include <stdio.h>
#include <stdlib.h>

/* Ramon Alberto Zapata Cruz */

struct DAlum{
	long mat;
	char nom[100];
	char ap[100];
	char nac[50];
	char esc[100];
	char g;
	char carrera[50];
	int genero;
}alu[10];
int main(void) {
	struct DAlum;
	int i=0,b=0,j=0,c=0,op;
	
	do{
			do{
				printf("Introduzca su matricula:\n");
				scanf("%d",&alu[i].mat);
				for(j=0;j<i;j++){
					if(alu[i].mat==alu[j].mat){
						b=1;
					}
				}
			}while(b!=0);
			printf("c=%d\n",j);
		printf("Introduzca su nombre:\n");
		fflush(stdin);
		scanf("%s",&alu[i].nom);
		
		printf("Introduzca su apellido:\n");
		fflush(stdin);
		scanf("%s",&alu[i].ap);
		
		printf("Introduzca su fecha de nacimieto:\n");
		fflush(stdin);
		scanf("%s",&alu[i].nac);
		
		printf("Introduzca su escuela:\n");
		fflush(stdin);
		scanf("%s",&alu[i].esc);
		
		printf("Introduzca su grado:\n");
		fflush(stdin);
		scanf("%s",&alu[i].g);
		
		printf("Introduzca su carrera:\n");
		fflush(stdin);
		scanf("%s",&alu[i].carrera);
		
		printf("Introduzca su genero: femenino / Masculino\n");
		scanf("%s",&alu[i].genero);
		
		printf("Desea ingresa otro estudiante: 1-SI 2-NO\n");
		scanf("%d",&op);
		i++;
		c++;
		b=0;
	}while(op!=2);
	for(i=0;i<c;i++){
		printf("Los datos del alumno[%d]:\n Matricula:%ld\n Nombre:%s\n Apellido:%s\n fecha de nacimiento:%s\n Escuela:%s\n Grado:%d\n Carrera:%s\n Genero:%c\n",i+1,alu[i].mat,alu[i].nom,alu[i].ap,alu[i].nac,alu[i].esc,alu[i].g,alu[i].carrera,alu[i].genero);
	}

	return 0;
}
