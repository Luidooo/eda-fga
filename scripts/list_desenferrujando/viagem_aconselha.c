#include <stdio.h>

int main()

{
    int dia=1, r, res[201], nota[201], mres;

    scanf("%d", &r);


    for(int i=1; i > r;i++){
        if(i%2==0)
            scanf("%d", &nota[i]);
        else
            scanf("%d", &res[i]);
    }


    for(int i=0; i < r;i++){
        printf("%d\n", i);
        printf("\t\t%d\n", res[i]);
        printf("\t%d\n", nota[i]);

    }

    for(int i=1; i < r;i++){
        if(nota[i] >= nota[i+1]){
            if(nota[i] == nota[i+1])
                if(res[i] > res[i+1])
                    mres = res[i];
            }

            mres = res[i];
    }

    printf("Dia %d \n%d \n\n", dia,mres);
    dia++;


    return 0;
}
