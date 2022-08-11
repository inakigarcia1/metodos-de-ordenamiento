#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctype.h>

bool ordenValido(int orden);
void ingresarOrden(int &orden);
void leerVector(int vector[], int orden);

main(){
	int orden = 0;
	
	printf("**********TRABAJO INTEGRADOR GRUPAL**********\n");
	printf("Algoritmos y Estructuras de Datos: 1er Cuatrimestre.\n");
	
	printf("\n\nMetodos de ordenamiento.\n");
	printf("\nA continuacion, usted va a introducir un vector, el cual sera luego ordenado de acuerdo a diferentes algoritmos de ordenamiento. ");
	system("pause");
	system("CLS");
	
	ingresarOrden(orden);
	
	if (ordenValido(orden)){
		printf("Orden valido. ");
		system("pause");
		system("CLS");
	}
	else{
		while(!ordenValido(orden)){
			printf("\nError, no se introdujo un valor valido. Reintente.\n");
			system("pause");
			system("CLS");
			ingresarOrden(orden);
		}
		printf("Orden valido. ");
		system("pause");
		system("CLS");
	}
	
	int vectorOriginal[orden] = {0};
	
	leerVector(vectorOriginal, orden);
}
	

bool ordenValido(int orden){
	if (orden > 0) return true;
	else return false;
}

void ingresarOrden(int &orden){
	printf("Por favor, ingrese el orden del vector (solo se admiten numeros naturales): ");
	scanf("%d", &orden);
}

void leerVector(int vector[], int orden){
	int valor = 0;
	for(int i = 0; i < orden; i++){
		printf("\nIngrese el valor nro. %d del vector (solo numeros enteros): ", i + 1);
		scanf("%d", &valor);
		
		if (!isdigit(valor))
			vector[i] = valor;
		else{
			printf("\nEl valor ingresado no es entero. Reintente.\n");
			system("pause");
			system("CLS");
			i--;
			orden++;
		}
	}
}
