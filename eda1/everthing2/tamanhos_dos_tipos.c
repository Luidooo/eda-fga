#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;

    printf("sizeoff(a) = %ld bytes\n", sizeof(a));
    printf("sizeoff(int) = %ld bytes\n", sizeof(int));
    printf("sizeoff(short) = %ld bytes\n", sizeof(short));
    printf("sizeoff(long) = %ld bytes\n", sizeof(long));
    printf("sizeoff(float) = %ld bytes\n", sizeof(float));
    printf("sizeoff(double) = %ld bytes\n", sizeof(double));

    printf("sizeoff(void *) = %ld bytes\n", sizeof(void *));
    printf("sizeoff(int *) = %ld bytes\n", sizeof(int *));
    printf("sizeoff(int **) = %ld bytes\n", sizeof(int **));
    printf("sizeoff(int ***) = %ld bytes\n", sizeof(int ***));
    printf("sizeoff(float *) = %ld bytes\n", sizeof(float *));
    return 0;
}
