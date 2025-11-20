#include<stdio.h>
#include<string.h>

void main()
{
    char des[100]="i am a good boy";
    char se [10]="GOOD";
    if((strstr(des,se))!=NULL)
    printf("found");
    else
    printf("Not found");
}