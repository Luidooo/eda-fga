#include <stdio.h>

int main()
{

  char string[501];

 // while (i<100){
 // scanf("%s", string[i]);
 //     i++;    
 // }
  
  for(int i=0; i < 50; i++){
    scanf("%c",&string[i]);
  }
 
//  printf("%c", &string);
  for(int i=500; i>=0; i--){
   printf("%c", string[i]);
  }

  return 0;
}
