#include<stdio.h>
void main()
{
    int arr[4]={23,45,78,12};
    int *p= arr;
    printf("%d",*(p+3));
}