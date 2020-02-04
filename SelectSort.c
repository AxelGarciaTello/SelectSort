/*
Instituto Politecnico Nacional
Escuela Superior de Cómputo
Analisis de algoritmos
Grupo: 3CV2
Alumnos: García Tello Axel
Profesor: Benjamin Luna Benoso
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
Select Sort

Fecha: 29 de enero de 2020
*/
#include <stdlib.h>
#include <stdio.h>

void SelectSort(int arreglo[]){
	int i,j,k,x,numero;
	for(j=0;j<=10;j++){
		k=j;
		for(i=j+1;i<=9;i++){
			if(arreglo[i]<arreglo[k]){
				k=i;
			}
		}
		numero=arreglo[j];
		arreglo[j]=arreglo[k];
		arreglo[k]=numero;
		for(x=0;x<10;x++){
			printf("%d,",arreglo[x]);
		}
		printf("\n");
	}
}

int main(void){
	int arreglo[10],x;
	for(x=0;x<10;x++){
		arreglo[x]=rand()%100;
	}
	SelectSort(arreglo);
}