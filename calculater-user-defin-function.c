#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int sub(int a,int b);
int div(int a,int b);
int mult(int a,int b);
void main()
{
   int num;
   printf("\n 1.(+) \n 2.(-) \n 3.(/) \n 4.(*) \n choose the option given below :-");
   scanf("%d",&num);
   if (num==1)
   {
       int a,b,c;
       printf("\n Enter any value :");
       scanf("%d%d",&a,&b);
       c=add(a,b);
       printf("\n a=%d and b=%d is =%d",a,b,c);
   }
   else if (num==2)
   {
       int a,b,c;
       printf("\n Enter any value :");
       scanf("%d%d",&a,&b);
       c=sub(a,b);
       printf("\n a=%d and b=%d is =%d",a,b,c);
   }
   else if (num==3)
   {
       int a,b,c;
       printf("\n Enter any value :");
       scanf("%d%d",&a,&b);
       c=div(a,b);
       printf("\n a=%d and b=%d is =%d",a,b,c);
   }
    else if (num==4)
   {
       int a,b,c;
       printf("\n Enter any value :");
       scanf("%d%d",&a,&b);
       c=mult(a,b);
       printf("\n a=%d and b=%d is =%d",a,b,c);
   }
   else
   printf("\n this is not valid :-");
   getch();
}
int add(int a,int b)
{
    int v;
    v=a+b;
    return v;
}
int sub(int a,int b)
{
    int v;
    v=a-b;
    return v;
}
int div(int a,int b)
{
    int v;
    v=a/b;
    return v;
}
int mult(int a,int b)
{
    int v;
    v=a*b;
    return v;
}