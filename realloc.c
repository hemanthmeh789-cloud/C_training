#include<stdio.h>
#include<stdlib.h>

    void main()
    {
        int i;
        int*p=(int*)malloc(3*sizeof(int));
        p[0]=1;
        p[1]=23;
        p[2]=56;
        
    
    p=(int*)realloc(p,5*sizeof(int));
    p[3]=34;
    p[4]=67;
    for( i=0;i<5;i++)
    printf("%d \n",p[i]);
    }