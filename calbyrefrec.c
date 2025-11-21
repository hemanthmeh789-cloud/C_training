// function which will multiply 3 numbers and call it by reerence
#include<stdio.h>
void prod(int *a,int *b,int *c);
{
    int product=(*a)(*b)(*c);
    printf("%d",product);
}
void main ()
{
    int a=9;
    int b=8;
    int c=45;
    prod(&a,&b,&c);
}
