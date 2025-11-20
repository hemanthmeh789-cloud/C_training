#include<stdio.h>
void main()
{
    int result=0;
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    for( int i=1;i<=n;i++)
    {
        result=result+i;
    }
    printf("sumis %d",result);
}
