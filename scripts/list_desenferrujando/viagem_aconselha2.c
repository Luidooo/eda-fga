#include <stdio.h>

int main()
{
    int n,dia=0,r, v[401],mres;

    while(scanf(" %d", &n) != EOF){
        scanf("%d", &r);

        for(int i=1;i<=(2*r);i++)
            scanf("%d", &v[i]);

        for(int i=1;i < (2*r);i++){
            if(v[i+1] >= v[i+3]){
                if(v[i+1] == v[i+3]){
                    if(v[i]>v[i+2])
                        mres = v[i];
                    else
                        mres = v[i+2];
                    mres = v[i+1];
                }
                mres = v[i];
            }
        printf("Dia %d\n%d\n",++dia,mres);
        }


    }


    return 0;
}
