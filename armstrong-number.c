//Write a program to print all Armstrong number between 1 and 500.
#include<stdio.h>
#include<conio.h>        
void main()
{       
        int num, temp=1, rem, sum;
        while (temp<=500)
        {
            num = temp;
            sum = 0;
        for(sum=0;num>0;num=num/10)
        {
            
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }
        if (temp == sum)
        {
            printf("\n Armstrong number :=%d",temp);
        }
        temp++;
        }
        getch();
}