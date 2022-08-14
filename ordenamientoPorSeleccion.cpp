#include <iostream>
#include <conio.h>
#include <iomanip>
using std::setw;
using namespace std;
 
	
	void ordenarArreglo(int * const , const int );
	void intercambiar( int * const , int * const );
	void imprimirArreglo( const int * const , const int );
 
	int main()
	{
		//Se inicializa el arreglo
		const int ordenArreglo = 4;
		int a[ ordenArreglo ] = {54, 2 , 46 , 7};
 
 
		//operaciones para ordenamiento e impresión
		ordenarArreglo( a, ordenArreglo );
		imprimirArreglo(a, ordenArreglo);
 
 
		getch();
 
		return 0;
	}
 
 
	void ordenarArreglo(int * const arreglo, const int orden)
	{
		int minimo; 
		for(int i = 0; i < orden; i++ )
		{
			minimo = i; 
			for( int j = i + 1; j < orden; j++)
			{
				if( arreglo[j] < arreglo[minimo])
				minimo = j; 
 
			intercambiar( &arreglo[i] , &arreglo[minimo] ); 
 
			}
		}
	}
 
	void intercambiar( int * const aPtr, int * const bPtr)
	{
		int aux = *aPtr;
		*aPtr = *bPtr;
		*bPtr = aux;
	}
 
	void imprimirArreglo( const int * const a, const int ordenArreglo)
	{
		for(int i = 0; i < ordenArreglo; i++ )
			cout<<setw(5)<<a[i];
	}
