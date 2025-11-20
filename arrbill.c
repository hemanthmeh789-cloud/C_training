#include<stdio.h>
void main()
{
    int t;
    int sale;
int quant[]={3,4,10};
int price[]={4,6,1};
for(int i=0;i<3;i++)
{
    t=quant[i]*price[i];
    sale =sale+t;
}
printf("total sales is %d",sale);
}
