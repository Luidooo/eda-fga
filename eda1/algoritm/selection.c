#include <stdio.h>

//achar o menor elemento dentro do vetor e trocalo de posicao
//com o primeiro elemento, depois achar o segundo menor e trocar
//com o segundo elemento do vetor...

int main()
{
  int a[] = {5, 9, 7, 6, 4, 0, 2, 3, 8, 1};
  int lenght = 10;


 //loop responsavel por passar pelo vetor uma poscicao por vez
  for(int i = 0; i < lenght-1; i++)
  {
      int min_pos = i;
      for(int j = i+1; j < lenght; j++)
        if (a[j] < a[min_pos]) min_pos = j;
      
      if(min_pos != i)
      {
        int temp = a[i];
        a[i] = a[min_pos];
        a[min_pos] = temp;
    }
      {

      }
  }

  for(int i = 0; i < lenght; i++)
    printf("a[%d] = %d\n", i, a[i]);

  return 0;
}
