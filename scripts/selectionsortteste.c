#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef int item;

#define key(a) (a) // key(a) (a.chave)
#define less(a,b) (key(a)<key(b))
#define exch(a,b) {item t=a; a=b; b=t;}
#define cmpexch(a,b) {if(less(b,a)) exch(a,b);}



//versao recursiva
void selectionsortrecu( item*v, int l, int r){
    int mim = l;
    if(l==r) return;

    for(int j=l+1; j<=r; j++){
        if(less(v[j],v[mim]))
            mim = j;
    }
    exch(v[mim],v[l]);

    selectionsortrecu(v,l+1,r);

}

/*
//versao iterativa
void selectionsortite( item*v, int l, int r){
    for(int i=l;i<r;i++){
        int mim = i;

        for(int j=i+1; j<=r; j++){
            if(less(v[j],v[mim]))
                mim = j;
             }
        exch(v[mim],v[i]);
    }
}

*/

int main(){
    item vet[1001];
    for(int i=0;i<1000;i++)
        vet[i] = rand();
}

int maine(){

    int item,vet[1001];
    item*vet[1001] ;
    selectionsortrecu(vet[],1,999);


    return 0;
}
