#include<stdio.h>

void mostrar_lista(int*);

main()
{
	int vector_b[50], i, j, aux, n;
	
	printf ("*** Este es el Metodo por Insercion ***\n\n");
	printf("***Ingrese los numeros al arreglo***\n");
	for(i=0; i<8; i++)
	{
		printf("\nV[%d]: ", i);
		scanf("%d", &vector_b[i]);
	}
	printf("\n\n");
	printf("Mi vector es: ");
	for(i=0; i<8; i++)
	{
		printf("[%d] ", vector_b[i]);
	}
	printf("\n\n");
	for(i=1; i<=8; i++)
	{
		aux=*(vector_b+i);
		j=i-1;
		while(j>=0 && *(vector_b+j)>aux)
		{
			*(vector_b+j+1)=*(vector_b+j);
			j--;
		}
		*(vector_b+j+1)=aux;
		mostrar_lista(vector_b);
	}
}

void mostrar_lista (int *vector_b)
{
	int i;
	for (i=0; i<8; i++){
		printf("%d ",*(vector_b+i));
	}
	printf("\n");;
}


