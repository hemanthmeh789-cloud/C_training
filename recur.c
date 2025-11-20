#include<stdio.h>
void display(int n)
{
    if(n>6)
     return;
     printf("%d ",n);
     display(n+2);
}
void main()
{
    display(1);
}