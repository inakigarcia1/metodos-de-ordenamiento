#include <stdio.h>
#include <stdlib.h>

// Libreria contenedora de todos los metodos de ordenamiento


// Metodo burbuja mejorado
void burbuja_mejorado(int vector[], int orden){
	
	int bandera=1, temporal, ciclos;
	
	printf ("\n*** Este es el Burbuja Mejorado ***\n\n");

	printf ("\n***El arreglo a ordenar es:***\n\n");
	for(int i = 0; i < orden; i++)
	{
		printf(" [%d] ", vector[i]);
	}
	for(int i = 0; i < (orden - 1) && bandera == 1; i++)
	{
		bandera = 0;
		for (int j = 0; j < (orden - 1); j++)
		{
			if(vector[j] > vector[j+1])
			{
				bandera = 1;
				temporal = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = temporal;
			}
		}
	}
	printf ("\n\n***   Arreglo Ordenado   ***\n\n");
	for(int i = 0; i < orden; i++)
	{
		printf(" [%d] ", vector[i]);
	}
	printf("\n");
}
