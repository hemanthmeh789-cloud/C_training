#include<stdio.h>
void main()
{
    int a=450;
    int *p=&a;
    printf(" a valure is%d\n",a);
    printf("a adressis%p\n",p);
    printf("p point to %d\n",*p);
}