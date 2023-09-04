#include <stdio.h>


typedef int item;

#define key(a) (a) // key(a) (a.chave)
#define less(a,b) (key(a)<key(b))
#define exch(a,b) {item t=a; a=b; b=t;}
#define cmpexch(a,b) {if(less(b,a)) exch(a,b);}

void selectionsort( item*v, int l, int r){
    int mim = l;
    for(int j=l+1; j<=r; j++){
        if(less(v[j],v[mim]))
            mim = j;
    }



}
