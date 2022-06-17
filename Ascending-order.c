#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],n,i,s;
    printf("\n Enter value of N ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter Element to search :=");
    scanf("%d",&s);
    for (i=0;i<n;i++)
    {
        if (a[i]==s)
        {
            printf("\n Number Found at position %d",i);
        }
    }
    getch();
}