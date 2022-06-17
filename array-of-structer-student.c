#include<stdio.h>
#include<conio.h>
struct Student
{
    char name[20];
    int roll;
    float marks;
};
void main()
{
    struct Student s,*p;
        printf("Enter Name :- ");
        gets(s.name);
        printf("Enter Roll No:- ");
        fflush(stdin);
        scanf("%d",&s.roll);
        printf("Enter your Marks :- ");
        fflush(stdin);
        scanf("%f",&s.marks);
        p=&s;
        printf("\nStudent Datails...\n");
        printf("\nStudent Name : %s\n",p->name);
        printf("\nStudent Roll No : %d",p->roll);
        printf("\nStudent Marks : %f\n",p->marks);
    getch();
}
