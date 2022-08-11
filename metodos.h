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
