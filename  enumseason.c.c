#include<stdio.h>
enum month
{
    jan=1,
    feb,march,april,may,june,jul,aug,sept,oct,nov,dec

};
void main()
{
    enum month m;
    m =may;
    char *season;
    switch(m)
    {
         case feb: case jan: case dec:
         season ="Winter";
         break;
         case march: case april: case may:
         season="summer";
         break;
         case june: case jul: case aug:
         season="Monsoon";
         break;
         case sept: case oct: case nov:

    }
    printf("%is %s\n",m,season);
}