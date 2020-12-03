#include <stdlib.h>
#include <string.h>
#include <stdio.h>
struct Datos{
    int mat;//1909997
    int P1,P2,PIA;
    float Final;
}Datos;
/*Guarda el contenido en el archivo*/
int main(){
	int i=0;
    FILE *fp;
    int mat,P1,P2,PIA;
    float Final;
    fp=fopen("C://Users/Windows/Desktop/3er Semestre/Programacion/Archivos en c/Prueba.csv","w+");
    fprintf(fp,"Matricula ,P1\t,P2\t,PIA\t,Final\n");
    for(i=0;i<10;i++)
	{
    	Datos.mat=1802150-(20*i);
    	Datos.P1=80-(i);
    	Datos.P2=70-(i);
    	Datos.PIA=89-(i);
    	Datos.Final=100-(i);
    fprintf(fp,"%d\t,%d\t,%d\t,%d\t,%.2f\n",Datos.mat,Datos.P1,Datos.P2,Datos.PIA,Datos.Final);
	}
    fclose(fp);
    printf("Archivo guardado...\n");
return 0;
}


