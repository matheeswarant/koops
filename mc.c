#include<stdio.h>
#include<conio.h>
void main()
{
int year;
printf("enter the year");
scanf("%d",&year);
if(year%10==0)
{
printf("the year is not leap year");
}
else
{
printf("the year is leap year");
}
getch();
}
