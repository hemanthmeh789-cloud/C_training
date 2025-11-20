#include<stdio.h>
int myadd( int a,int b)
{
    int sum = a+b;
    return sum;
}
void main()

{
    int a=45;
    int b=34;
    printf("%d\n",myadd(a,b));
    int c=45,d=90;
    printf("%d\n",myadd(c,d));
}