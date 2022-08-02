#include <stdio.h>
#include <stdlib.h>
#include <iostream>

bool ordenValido(int orden);
void ingresarOrden(int &orden);

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
		printf("Valido.");
	}
	else{
		while(!ordenValido(orden)){
			printf("\nError, no se introdujo un valor valido. Reintente.\n");
			system("pause");
			system("CLS");
			ingresarOrden(orden);
		}
		printf("Valido.");
	}
}
	

bool ordenValido(int orden){
	if (orden > 0) return true;
	else return false;
}

void ingresarOrden(int &orden){
	printf("Por favor, ingrese el orden del vector (solo se admiten numeros naturales): ");
	scanf("%d", &orden);
}
