#include <stdio.h>

void mergeSort(int a[], int orden);
void mergeSortRecursion(int a[], int l, int r);
void mergeSortedArrays(int a[], int l, int m, int r);


int main()
{
 int array[] = {9,4,8,1,7,0,3,2,5,6};
 int orden = 10;

 mergeSort(array, orden);
 for(int i = 0; i < orden; i++){
 	   printf("%d", array[i]);
 	   printf("\n");
 }
 
 return 0;
}

void mergeSort(int a[], int orden)
{
 mergeSortRecursion(a,0,orden-1);
}

void mergeSortRecursion(int a[], int l, int r)
{
 
 if(l<r)
 {
   int m = l + (r-1) / 2;
   mergeSortRecursion(a,l,m);
   mergeSortRecursion(a,m+1,r);
 
   mergeSortedArrays(a,l,m,r);
 }
}

void mergeSortedArrays(int a[], int l, int m, int r)
{
 int ordenIzq = m - l + 1;
 int ordenDer = r - m;
 
 int auxIzq[ordenIzq];
 int auxDer[ordenDer];
 
 int i, j, k;
 
 for (int i = 0; i<ordenIzq; i++)
 {
  auxIzq[i] = a[l+i];
 }
 
 for (int i = 0; i<ordenDer; i++)
 {
  auxDer[i] = a[m + 1 + i];
 }
 
 for(i=0, j=0, k=l; k <= r; k++)
{
 if((i<ordenIzq) and (j>=ordenDer) or (auxIzq[i] <= auxDer[j]))
 {
  a[k] = auxIzq[i];
  i++;
 }
 else
 {
  a[k] = auxDer[j];
  j++;
 }
}
}

















