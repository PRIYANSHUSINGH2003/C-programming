// write a program to create a simple calculator using switch case.//
#include<stdio.h>
#include<conio.h>

void main()
{
    char n;
    printf("\t 1.addition ,2.Multiplication and 3.division or 4.subtration:--");
    scanf("%c",&n);
    switch(n)
    {
        case '1':
        {
            int a,b,c;
            printf("enter the number ");
            scanf("%d%d",&a,&b);
            c=a+b;
            printf("your answer:-- %d",c); 
            break;
        }
        case '2':
        {
            int a,b,c;
            printf("enter the number ");
            scanf("%d%d",&a,&b);
            c=a*b;
            printf("your answer:-- %d",c); 
            break;
        }
        case '3':
        {
            int a,b,c;
            printf("enter the number ");
            scanf("%d%d",&a,&b);
            c=a/b;
            printf("your answer:--%d",c); 
            break;
        }
        case '4':
        {
            int a,b,c;
            printf("enter the number ");
            scanf("%d%d",&a,&b);
            c=a-b;
            printf("your answer:-- %d",c); 
            break;
        }
        default:
        {
            printf("\n sorry!! Invalid choice");
            break;
        }
    }
    getch();
}