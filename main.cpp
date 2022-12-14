#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctype.h>
#include <conio.h>
#include "metodos.h"

bool ordenValido(int orden);
void ingresarOrden(int &orden);
void leerVector(int vector[], int orden);
void reiniciarOpciones();

char pause;

main(){

	int orden = 0;
	bool reintento = false;
	
	while (!ordenValido(orden)){
		
		printf("**********TRABAJO INTEGRADOR GRUPAL**********\n");
		printf("Algoritmos y Estructuras de Datos: 1er Cuatrimestre.\n");
	
		printf("\n\nMetodos de ordenamiento.\n\n");
		printf("\nPresione una tecla para introducir un vector, el cual sera luego ordenado con diferentes algoritmos de ordenamiento.");
		
		if (!reintento) pause=(char)getch();
		
		reintento = true;
		
		ingresarOrden(orden);
		
		if (ordenValido(orden)){
			printf("\n\n\tOrden valido.\n\n");
			printf("\nPresione una tecla para continuar...");
			pause=(char)getch();
			system("CLS");
		}
		else{
			printf("\n\tError, no se introdujo un valor valido. Presione una tecla para reintentar...");
			pause=(char)getch();
			system("CLS");
		}
	
	}
	
	int vectorOriginal[orden] = {0};
	
	leerVector(vectorOriginal, orden);
	
	int opcion = 1;
	
	while (opcion != 0){
		system("cls");
		printf("A continuacion, escoja el metodo deseado para ordenar el vector ingresado:\n\n");
		printf("\t1) Metodo de la burbuja mejorado o intercambio.\n");
		printf("\t2) Metodo de la baraja o insercion.\n");
		printf("\t3) Metodo sencillo o de seleccion.\n");
		printf("\t4) Metodo rapido o QuickSort.\n");
		printf("\t5) Metodo MergeSort o por mezcla.\n\n");
		printf("\t0) Salir.\n");
		
		printf("\n\n\n");
		printf("Ingrese la opcion deseada: ");
		
		_flushall();
		if ((scanf("%d", &opcion)) != 1){
			printf("\nEl valor ingresado no es valido. Presione una tecla para reintentar...");
			pause=(char)getch();
			continue;
		}
		
		
		if (opcion == 1){
			burbuja_mejorado(vectorOriginal, orden);
			reiniciarOpciones();
			continue;
		}
			
		if (opcion == 2){
			insercion(vectorOriginal, orden);
			reiniciarOpciones();
			continue;
		}
		
		if (opcion == 3){
			seleccion(vectorOriginal, orden);
			reiniciarOpciones();
			continue;
		}
		if (opcion == 4){
			imprimirInfo(vectorOriginal, orden, 4);
			
			int vectorMod[orden] = {0};
	
			for (int i = 0; i <= orden; i++){
				vectorMod[i] = vectorOriginal[i];
			}
			
			quickSort(vectorMod, orden, 0, orden - 1);
			
			for (int i = 0; i < orden; i++){
    			printf(" [%d] ", vectorMod[i]);
			}
			printf("--> Vector ordenado.");
			
			reiniciarOpciones();
			continue;
		}
		
		if (opcion == 5){
			imprimirInfo(vectorOriginal, orden, 5);
			
			int vectorMod[orden] = {0};
	
			for (int i = 0; i <= orden; i++){
				vectorMod[i] = vectorOriginal[i];
			}
			
			mergeSort(vectorMod, 0, orden - 1);
			
			for (int i = 0; i < orden; i++){
    			printf(" [%d] ", vectorMod[i]);
			}
			printf("--> Vector ordenado.");
			
			reiniciarOpciones();
			continue;
		}
			
			
		if (opcion == 0){
			printf("\n\nUsted ha finalizado el programa. Saliendo...\n");
			break;
		}
	}
}
	

bool ordenValido(int orden){
	if (orden > 0) return true;
	else return false;
}

void ingresarOrden(int &orden){
	printf("\n\nPor favor, ingrese el orden del vector (solo se admiten numeros naturales): ");
	_flushall();
	scanf("%d", &orden);
}

void leerVector(int vector[], int orden){
	int valor = 0;
	for(int i = 0; i < orden; i++){
		printf("\nIngrese el valor nro. %d del vector (solo numeros enteros): ", i + 1);
		
		_flushall();
		if (scanf("%d", &valor) == 1)
			vector[i] = valor;
		else{
			printf("\nEl valor ingresado no es entero. Presione una tecla para reintentar...");
			pause=(char)getch();
			system("CLS");
			i--;
		}
	}
}

void reiniciarOpciones(){
	printf("\n\n\t* Presione una tecla para volver el menu principal...");
	pause=(char)getch();
}
