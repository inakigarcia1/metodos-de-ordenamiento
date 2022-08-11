#include <stdio.h>
#include <stdlib.h>

// Libreria contenedora de todos los metodos de ordenamiento


// Metodo burbuja mejorado
void burbuja_mejorado(int vector[], int orden){
	
	int vectorMod[orden] = {0};
	
	for (int i = 0; i < orden; i++){
		vectorMod[i] = vector[i];
	}
	
	int bandera=1, temporal, ciclos;
	
	printf ("\n*** Usted ha escogido el metodo Burbuja Mejorado ***\n\n");

	printf ("\n***El arreglo a ordenar es:***\n\n");
	for(int i = 0; i < orden; i++)
	{
		printf(" [%d] ", vectorMod[i]);
	}
	for(int i = 0; i < (orden - 1) && bandera == 1; i++)
	{
		bandera = 0;
		for (int j = 0; j < (orden - 1); j++)
		{
			if(vectorMod[j] > vectorMod[j+1])
			{
				bandera = 1;
				temporal = vectorMod[j];
				vectorMod[j] = vectorMod[j+1];
				vectorMod[j+1] = temporal;
			}
		}
	}
	printf ("\n\n***   Arreglo Ordenado   ***\n\n");
	for(int i = 0; i < orden; i++)
	{
		printf(" [%d] ", vectorMod[i]);
	}
	printf("\n");
}

void insercion(int vector[], int orden){
	
	int vectorMod[orden] = {0};
	
	for (int i = 0; i < orden; i++){
		vectorMod[i] = vector[i];
	}
	
	
	int j, aux, n;
	
	printf ("*** Este es el Metodo por Insercion ***\n\n");

	printf("\n\n");
	
	printf("Mi vector es: ");
	
	for(int i=0; i < orden; i++)
	{
		printf("[%d] ", vectorMod[i]);
	}
	
	printf("\n\n");
	
	for(int i = 1; i <= orden; i++)
	{
		aux = *(vectorMod+i);
		j = i-1;
		while(j >= 0 && *(vectorMod+j) > aux)
		{
			*(vectorMod+j+1)=*(vectorMod+j);
			j--;
		}
		*(vectorMod+j+1)=aux;
		
		for (int i = 0; i < orden; i++){
			printf("%d ",*(vectorMod+i));
		}
		printf("\n");;
	}
}
