#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
 char name[100];
 int age;
 float marks;
};
void main()
{
  struct student s1;
  s1.age=19;
  s1.marks=99;
  strcpy(s1.name,"ram");

  struct student s2;
  s2.age=20;
  s2.marks=89.7;
  strcpy(s2.name,"mesi");

  struct student s3={"mango",14,90.9};

  printf("%d\n",s2.age);
  printf("%f\n",s2.marks);
  printf("%s\n",s2.name);
  printf("%s",s3.name);
}
