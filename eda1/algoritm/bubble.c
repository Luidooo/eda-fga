#include <stdio.h>  

int main(void)
{
  int a[] = {7,1,4,3,5,8,0,6,2};
  
  int lenght = 10;

  for (int i = 0; i < lenght; i++)//o loop de fora controla 
  //a quantidade de passadas que se deve fazer no  vetor
  {
    for(int j = 0; j < (lenght - 1); j++)//o loop interno 
    //controla o passes em si e as trocas dentro do vetor
    {
      if (a[j] > a[j+1])
      {
        int temp = a[j];//faz o swap
        a[j] = a[j+1];
        a[j+1] = temp;

      }
    }
  }

  for (int i = 0; i < lenght; i++)
    printf("a[%d] = %d\n", i, a[i]);


  return 0;
}
