#include <stdio.h>

int main()
{
    int r,res,mres=10000001,mnota=0,nota,dia=0;

    while(scanf(" %d", &r) != EOF){
        for(int i=0;i < r;i++){
            scanf(" %d %d" , &res, &nota);
            //mnota = nota>=mnota?nota:mnota;
            if(nota>mnota){
                mnota = nota;
                mres = res;
            }
            if(nota == mnota)
                mres = mres>res?res:mres;
            //mres = nota>=mnota?(mres>=res?mres:res):mres;
        }
        printf("Dia %d\n %d\n\n", ++dia, mres);
        mnota=0;
        mres=10000001;

    }

    return 0;
 }
