#include<stdio.h>
void fibo(int n)
{
    int sum;
    int  a=0;
    int b=1;
    for (int i=0;i<n;i++)
    { 
        printf("%d    ", a);
      sum=a+b;
      a=b;
      b=sum;
    }
}
void main()
{
    int a;
    printf("Enter n");
    scanf("%d",&a);
    fibo(a);
}
