#include<stdio.h>
void main()
{
int n;
int result=1;
printf("Enter the valueofn");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    result=result*i ;
}
printf("the product is%d " ,result);
}
