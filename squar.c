// to axcept value of x and y and return the square of x and y
#include<stdio.h>
#include<math.h>
int square( int x, int y)
{
    int s =x*x+y*y;
    return s;
}

void main ()
{
int  x=34;
  int y=45;
printf("%d",square(x,y));
}