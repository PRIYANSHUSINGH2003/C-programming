#include <stdio.h>
#include <conio.h>
void main()
{
    int ch;
    printf("\n Menu");
    printf("\n 1. Print Armstrong number \n 2. Display prime number between 1 to n \n 3. Reberse of an integer \n choose the option :- ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    {
        int num, temp, rem, sum;
        printf("\n Enter Number :-");
        scanf("%d", &num);
        temp = num;
        for(sum=0;num>0;num=num/10)
        {
            
            rem = num % 10;
            sum = sum + (rem * rem * rem);
        }
        if (temp == sum)
        {
            printf("\n Armstrong number :=%d",sum);
        }
        else
            printf("\n This is not Armstrong number :=%d",sum); 
            break;
    }
    case 2:
    {
        int num, i, count, n;
        printf("\n Enter max range : ");
        scanf("%d", &n);
        for (num = 1; num <= n; num++)
        {
            count = 0;
            for (i = 2; i <= num / 2; i++)
            {
                if (num % i == 0)
                {
                    count++;
                }
            }
            if (count == 0 && num != 1)
                printf("\t %d", num);
        }
        break;
    }
    case 3:
    {
        long int i, n, rev = 0, d;
        printf("\n Enter the number");
        scanf("%lu", &n);
        for (i = n; i != 0; i = i / 10)
        {
            d = i % 10;
            rev = (rev * 10) + d;
        }
        printf("\n the reverse of the calcred number is :%lu", rev);
        break;
    }
    default:
        break;
    }
    getch();
}