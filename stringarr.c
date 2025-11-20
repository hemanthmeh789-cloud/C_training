#include<stdio.h>
#include<string.h>
void main()
{
    char name [10]="hEMANTH";
    char new[100]="hello";
    printf("%c\n",name[4]);
//length
    printf("Leangth of the string is%d\n",strlen(name));
 //concatenation
    strcat(new,name);
    printf("%s",new);
    //serch for the char in string!
    printf("%zs",strstr(new,"H"));
}
