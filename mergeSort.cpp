#include <stdio.h>
#include <conio.h>

void mezcla(int L[], int primer, int m, int ultimo);
void mergeSort(int L[], int primer, int ultimo);


//funcion que divide mi lista en sublistas unitarias

void mergeSort(int L[], int primer, int ultimo){
	 int mitad;
	 mitad = (primer+ultimo)/2;
	 if(primer<ultimo){
	  				   mergeSort(L,primer,mitad);
					   mergeSort(L,mitad+1,ultimo);
					   mezcla(L,primer,mitad,ultimo);
	 }
}


// funcion que ordena mi vector

void mezcla(int L[], int primer, int mitad, int ultimo){
	 int aux[20], i,j,k,t;
	 k=0;
	 i=primer;
	 j=mitad+1;

	 
	 //ciclo que hace la mezcla
	 while(i<=mitad and j<=ultimo){
          k++;
  		  if(L[i]<L[j]){
		  				aux[k]=L[i];
						j++;
  		  }
	 }


	 for (t=i; t<=mitad; t++){
	  	 k++;
		 aux[k]=L[t];
	 }

	 for (t=j; t<=ultimo; t++){
	  	 k++;
		 aux[k]=L[t];
	 }

	 //se copia la lista aux a la lista original
	 for(t=1; t<=k; t++){
  	     L[primer+t-1]=aux[t];
	 }
}
