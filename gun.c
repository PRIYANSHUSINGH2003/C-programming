#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int snakewaterGun(char you, char comp)
{
    if(you==comp)
    {
        return 0;
    }
    if(you=='s' && comp=='w')
    {
        return 1;
    }
    else if(you=='s' && comp=='g')
    {
        return -1;
    }
    if(you=='g' && comp=='s')
    {
        return 1;
    }
    else if(you=='w' && comp=='s')
    {
        return -1;
    }
    if(you=='w' && comp=='g')
    {
        return 1;
    }
    else if(you=='g' && comp=='w')
    {
        return -1;
    }
}
void main()
{
    char you , comp ;
    int result,number;
    // srand(time(0));
    // number = rand()%100+1;
    // if(number<33)
    // {
    //     comp = 's';
    // }
    // else if(number>33 && number<66)
    // {
    //     comp = 'w';
    // }
    // else{
    //     comp = 'g';
    // }
    comp = 's';
    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c",&you);
    result = snakewaterGun(you,comp);
    printf("You choose %c and computer choose %c. ",you,comp);
    if(result==0)
    {
        printf("Game draw\n");
    }
    else if(result==1)
    {
        printf("You Win\n");
    }
    else
    {
        printf("You Lose\n");
    }
    getch();
}