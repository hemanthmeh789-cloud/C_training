#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p=(float*)malloc(4*sizeof(float));
    p[0]=78;
    p[1]=12;
    p[2]=34;
    p[3]=25;
    printf("%f ",p[2]);
    free(p);
}