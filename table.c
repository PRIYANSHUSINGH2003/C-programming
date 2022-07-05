//wap to creat a program with display the table of entered number.//
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("\n Enter a number :");
    scanf("%d",&n);
    printf("\n Table of :%d",n);
    for (i=1; i<=10; i++)
    {
        printf("\n %d*%d=%d",n,i,(n*i));
    }
    getch();
}