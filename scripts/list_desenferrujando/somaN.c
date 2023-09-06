#include <stdio.h>

int main()
{

    int n,sum=0;
    scanf("%d", &n);
    int v[n];

    for(int i=0;i < n;i++)
        scanf("%d", &v[i]);
    for(int i=0; i < n;i++)
        sum += v[i];

    printf("%d", sum);

    return 0;
}
