#include <stdio.h>


typedef int item;

#define key(a) (a) // key(a) (a.chave)
#define less(a,b) (key(a)<key(b))
#define exch(a,b) {item t=a; a=b; b=t;}
#define cmpexch(a,b) {if(less(b,a)) exch(a,b);}
