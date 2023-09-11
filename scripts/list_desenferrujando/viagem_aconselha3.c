#include <stdio.h>

int main()
{
    int r,res,mres=0,mnota=0,nota,dia=0;

    while(scanf(" %d", &r) != EOF){
        for(int i=0;i < r;i++){
            scanf(" %d %d" , &res, &nota);
            mres = mres>=res?res:mres;
            mres = nota == mnota?mres:res;
            mnota = nota>=mnota?nota:mnota;
            printf(" %d %d\n", res, nota);
            printf(" %d %d\n\n", mres, mnota);
        }
        printf(" Dia %d\n %d\n\n", ++dia, mres);
        mnota=0;
        mres=0;
    }

    return 0;
 }
