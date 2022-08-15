#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <iomanip>

// Libreria contenedora de todos los metodos de ordenamiento

// Metodo burbuja mejorado
void burbuja_mejorado(int vector[], int orden){
	
	int vectorMod[orden] = {0};
	
	for (int i = 0; i < orden; i++){
		vectorMod[i] = vector[i];
	}
	
	int bandera=1, temporal, ciclos;
	
	printf("\n*** Usted ha escogido el metodo Burbuja Mejorado ***\n\n");

	printf ("\n***El arreglo a ordenar es:***\n\n");
	for(int i = 0; i < orden; i++)
	{
		printf(" [%d] ", vectorMod[i]);
	}
	
	printf("\n\n");
	printf("***Paso a paso***");
	printf("\n\n");
	
	for(int i = 0; i < (orden - 1) && bandera == 1; i++)
	{
		printf(" %d) ", i + 1);
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
		for(int i = 0; i < orden; i++)
		{	
			printf(" [%d] ", vectorMod[i]);
		}
		
		if (i == (orden - 2)){
			printf("--> Vector ordenado.");
		}
		else{
			printf("\n");
		}
	}
}

// Metodo de insercion o baraja
void insercion(int vector[], int orden){
	
	int vectorMod[orden] = {0};
	
	for (int i = 0; i <= orden; i++){
		vectorMod[i] = vector[i];
	}
	
	
	int j, aux, n;
	
	printf ("\n*** Usted ha escogido el metodo por insercion ***\n\n");

	printf ("\n***El arreglo a ordenar es:***\n\n");
	for(int i = 0; i < orden; i++)
	{
		printf(" [%d] ", vectorMod[i]);
	}
	
	printf("\n\n");
	printf("***Paso a paso***");
	printf("\n\n");
	
	for(int i = 1; i <= orden-1; i++)
	{
		printf(" %d) ", i);
		aux = *(vectorMod+i);
		j = i-1;
		while(j >= 0 && *(vectorMod+j) > aux)
		{
			*(vectorMod+j+1)=*(vectorMod+j);
			j--;
		}
		*(vectorMod+j+1)=aux;
		for (int i = 0; i < orden; i++)
		{
			printf(" [%d] ",*(vectorMod+i));
		}
		
		
		if (i == (orden - 1)){
			printf("--> Vector ordenado.");
		}
		else{
			printf("\n");
		}
	}
}

// Metodo QuickSort
void quickSort(int vectorMod[], int orden, int primero, int ultimo){
	
    int i,j,p,t;

    i = primero;
    j = ultimo;
    p = vectorMod[(primero + ultimo) / 2];

    do { 
        while (vectorMod[i] < p) i++; 
        while (p < vectorMod[j]) j--;
        if (i <= j){
            t = vectorMod[i]; 
            vectorMod[i] = vectorMod[j]; 
            vectorMod[j] = t; 
            i++;
			j--;
        }
    }
	while (i <= j);
	
    if (primero < j)
		quickSort(vectorMod, orden, primero, j); 
    if (i < ultimo)
		quickSort(vectorMod, orden, i, ultimo);	
}

// Funcion soporte del metodo de seleccion
void intercambiar( int * const aPtr, int * const bPtr){
	int aux = *aPtr;
	*aPtr = *bPtr;
	*bPtr = aux;
}

// Metodo de seleccion
void seleccion(int * const vector, const int orden){
	
	int vectorMod[orden] = {0};
	
	for (int i = 0; i < orden; i++){
		vectorMod[i] = vector[i];
	}
	
	
	printf("\n*** Usted ha escogido el metodo por seleccion ***\n\n");

	printf ("\n***El arreglo a ordenar es:***\n\n");
	for(int i = 0; i < orden; i++)
	{
		printf(" [%d] ", vectorMod[i]);
	}
	
	printf("\n\n");
	
	int minimo; 
	for(int i = 0; i < orden; i++ )
	{
		minimo = i; 
		for( int j = i + 1; j < orden; j++)
		{
			if(vectorMod[j] < vectorMod[minimo])
			minimo = j; 
 
		intercambiar( &vectorMod[i] , &vectorMod[minimo] ); 
 
		}
	}
	
	for(int i = 0; i < orden; i++)
			printf(" [%d] ", vectorMod[i]);
	printf("--> Vector ordenado.");
}
 
// Funcion soporte de MergeSort
void combinar(int vector[], int izq, int med, int der){
    int i;
    int j;
    int k;
    
    int num1 = med - izq + 1;
    int num2 = der - med;
 
    int vectorIzq[num1];
	int vectorDer[num2];
 
    for (i = 0; i < num1; i++)
        vectorIzq[i] = vector[izq + i];
    for (j = 0; j < num2; j++)
        vectorDer[j] = vector[med + 1 + j];
 
    i = 0;
    j = 0;
    k = izq;
    
    while (i < num1 && j < num2) {
        if (vectorIzq[i] <= vectorDer[j]) {
            vector[k] = vectorIzq[i];
            i++;
        }
        else {
            vector[k] = vectorDer[j];
            j++;
        }
        k++;
    }
 
    while (i < num1) {
        vector[k] = vectorIzq[i];
        i++;
        k++;
    }
 
    while (j < num2) {
        vector[k] = vectorDer[j];
        j++;
        k++;
    }
}
 
// Metodo MergeSort
void mergeSort(int vector[], int izq, int der){
    if (izq < der) {
        int med = izq + (der - izq) / 2;
 
        mergeSort(vector, izq, med);
        mergeSort(vector, med + 1, der);
 
        combinar(vector, izq, med, der);
    }
}

// Funcion para imprimir los vectores originales de los metodos recursivos (QuickSort y MergeSort)
void imprimirInfo(int vector[], int orden, int opcion){
	
	if (opcion == 4){
		printf("\n*** Usted ha escogido el metodo QuickSort ***\n\n");
	}
	
	if (opcion == 5){
		printf("\n*** Usted ha escogido el metodo MergeSort ***\n\n");
	}
	
	printf("\n***El arreglo a ordenar es:***\n\n");
	for(int i = 0; i < orden; i++)
	{
		printf(" [%d] ", vector[i]);
	}
		
	printf("\n\n");
}
