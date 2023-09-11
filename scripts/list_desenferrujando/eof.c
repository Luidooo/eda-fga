#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define max 1000001

int main()
{

    int i=0,cont=0, v[max];

    while(scanf("%d", &v[i]) != EOF){
        cont++;
        i++;
    }

    printf("%d\n", cont);

    return 0;
}
