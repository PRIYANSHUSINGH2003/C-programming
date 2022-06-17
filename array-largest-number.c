#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],size,i,max;
    printf("\nEnter Size of array : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("greatest number in array is %d",max);
    getch();
}