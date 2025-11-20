
#include<stdio.h>
 float perimeter ( int r)
 {
    const float pi=3.14;
    float peri=2*pi*r;
    return peri;
 }
 void main()
 {
    int r = 23;
    float peri;
    printf("%f", perimeter (r));
 }

