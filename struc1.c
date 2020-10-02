
#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int roll;
    float marks;
}s;
 void read()
 {

      printf("enter the name of the student");
      scanf("%s",s.name);
      printf("enter the roll no.");
      scanf("%d",&s.roll);
      printf("enter the marks");
      scanf("%f",&s.marks);
 }
 void display()
 {

      printf("the name of the student is %s",s.name);
      printf("roll no. %d",s.roll);
      printf("marks obtained is %f",s.marks);
 }
 void main()
 {
     read();
     display();
 }
