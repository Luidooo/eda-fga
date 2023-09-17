#include <stdio.h>
//dividir o vetor em vetores unitarios e vir comparando-os e
//agrupando-os ate termos um vetor ordenado

void merge(int a[], int length);
void merge_recursion(int a[], int l, int r);
void merge_arrays(int a[], int l, int m, int r);

int main()
{
  int a[] = {9, 4, 8, 1,7,0,3,2,5,6};
  int length = 10;

  merge(a, length);

  for(int i=0; i < length; i++)
    printf("%d", a[i]);
  printf("\n");

  return 0;
}

void merge(int a[], int length)
{
  merge_recursion( a, 0, length - 1);
}

void merge_recursion(int a[], int l, int r)
{
  int m = l + (r -1)/2;

  merge_recursion(a,l,m);
  merde_recursion(a,m+1,r);
  merge_arrays(int[a], int l, int m,)
}
