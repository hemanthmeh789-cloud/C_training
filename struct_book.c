#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Book
{
    char name[100]; 
    char author[100];
    int year;
};

void main()
{
    int n;
    printf("Enter the num of the book");
    scanf("%d",&n);
    struct Book b[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the name of the book");
        scanf("%s",b[i].name);

        printf("Enter the  author mame of the book");
        scanf("%s", b[i].author);

         printf(" enter the year of its publication");
         scanf("%d",&b[i].year);

    }
      printf("your information\n");
       for(int i=0;i<n;i++)

   {
    printf("%s\n",b[i].name);
    printf("%s\n",b[i].author);
    printf("%d\n",b[i].year);
   }

}
