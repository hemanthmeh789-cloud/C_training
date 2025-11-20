#include<stdio.h>
int volume(int l,int b,int h)
{
    int v=l*b*h;
    return v;
}
void main()
{
int l=34;
int b=67;
int h=45;
printf("%d",volume (l,b,h));
}