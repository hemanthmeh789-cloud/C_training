#include<stdio.h>
#include<stdlib.h>
void main()
{
    float*p=(float*)calloc(4,sizeof(float));
    p[0]=7.8;
    p[1]=1.2;
    p[2]=3.4;
    p[3]=2.5;
    printf("%f ",p[1]);
    free(p);

}