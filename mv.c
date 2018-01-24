#include<stdio.h>
void main()
{
int min,hour,m;
printf("/n enter the time in min /n");
scanf("%d",&min);
hour=min/60;
m=min%60;
printf("/n the hour and minutes are %d %d /n",hour,m);
}
