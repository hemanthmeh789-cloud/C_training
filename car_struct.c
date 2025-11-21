//srtructure with 3 variable name of the car,mazmum speed,price
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct car
{
    char name[100];
    float speed;
    int price;
};

void main()
{
    int n;
    printf("enter the number of cars");
    scanf("%d",&n);
    struct car b[n];
    for ( int i=0;i<n;i++)
    {
        printf("enter the name of the car");
        scanf("%s",b[i].name);
         
        printf("enter the its maximum speed"); 
        scanf("%f",b[i].speed);

        printf("enter the price of the car");
        scanf("%d",b[i].price);
    }
    printf("your information\n");
    for(int i=0;i<n;i++)
    { 
      printf("%s\n",b[i].name);
      printf("%f\n",b[i].speed);
      printf("%d",b[i].price);
    }
}
