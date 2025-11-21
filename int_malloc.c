#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p=(int*)malloc(4*sizeof(int));
    p[0]=78;
    p[1]=12;
    p[2]=34;
    p[3]=25;
    printf("%d ",p[3]);
    free(p);
}