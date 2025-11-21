#include<stdio.h>
void name(char first[],char last[],int sw)
{
    int i=0;
    char full[100];
    while(first[i]!='\0')
    {
        full[i]=first[i];
        i++;
    }
    full[i]=' ';
    i++;

    int j=0;
    while(last[j]!='\0')
    {
        full[i]=last[j];
         i++;
         j++;
    }
    full[i] = '\0';
     printf("%s",full);
     int len=i+1;
     if(len<sw)
     printf("Fits in the screen");
     else
     printf("do not fit in the screen");
}

void main()
 {
    char first[100]= "cr 7";
    char last[100]= "ronaldo";
    int sw =14;
    name( first,last,sw);
 }