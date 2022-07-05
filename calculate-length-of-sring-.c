#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int ch,n;
    char s1[10],s2[10];
    printf("\n Menu");
    printf("\n 1. Calculate Length of String \n 2. Copy one String to another \n 3. Copy nth String to another \n Enter Choice :-  ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        fflush(stdin);
        printf("\n Enter String := ");
        gets(s1);
        printf("\n Length of String :- %d",strlen(s1));
        break;
    case 2:
        fflush(stdin);
        printf("\n  Enter String 1 := ");
        gets(s1);
        strcpy(s2,s1);
        printf("\n Copied in String 2 := ");
        puts(s2);
        break;
    case 3:
        fflush(stdin);
        printf("\n  Enter String 1 := ");
        gets(s1);
        printf("\n Enter Value of N := ");
        scanf("%d",&n);
        strncpy(s2,s1,n);
        printf("\n Copied in String 2 := ");
        puts(s2);
        break;
    default:
        printf("\n Invalid Choice");
    }
    getch();
}