#include<stdio.h>
#include<stdlib.h>

int burbuja_mejorado(int);

main()
{
	burbuja_mejorado();
}

void burbuja_mejorado(int)
{
	system("cls");
	
	int vector_a[50];
	int bandera=1, i=0, j, temporal, ciclos;
	
	printf ("*** Este es el Burbuja Mejorado ***\n\n");
	printf("***Ingrese los numeros al arreglo***");
	for(i=0; i<8;i++)
	{
		printf("\n\nV[%d]= ", i);
		scanf("\n%d", &vector_a[i]);
	}
	printf ("\n***El arreglo a ordenar es:***\n\n");
	for(i=0; i<8;i++)
	{
		printf(" [%d] ", vector_a[i]);
	}
	for(i=0; i<(8-1) && bandera==1; i++)
	{
		bandera=0;
		for (j=0; j<(8-1); j++)
		{
			if(vector_a[j]>vector_a[j+1])
			{
				bandera=1;
				temporal=vector_a[j];
				vector_a[j]=vector_a[j+1];
				vector_a[j+1]=temporal;
			}
		}
	}
	printf ("\n\n***   Arreglo Ordenado   ***\n\n");
	for(i=0; i<8;i++)
	{
		printf(" [%d] ", vector_a[i]);
	}
	printf("\n");
}
