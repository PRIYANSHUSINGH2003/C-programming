//Q3:Write a program to make use of arrays with structures in following ways: a) Use array as a structure b) Create array of structure variables.
#include<stdio.h>
#include<conio.h>
struct Student
{
    char name[20];
    int roll;
    char qualification[10];
};
void main()
{
    struct Student stu[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter Name :- ");
        scanf("%s",&stu[i].name);
        printf("Enter Roll No:- ");
        scanf("%d",&stu[i].roll);
        printf("Enter your Qualification :- ");
        scanf("%s",&stu[i].qualification);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\nStudent Name : %s\n",stu[i].name);
        printf("\nStudent Name : %d",stu[i].roll);
        printf("\nStudent Qualification : %s\n",stu[i].qualification);
    }
    getch();
}
