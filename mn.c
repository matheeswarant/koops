#include<stdio.h>
int main()
{
int m,t,diff,sum=0,temp,i;
scanf("%d,%d,%d",&m,&t,&diff);
for(i=0;i<n;i++)
{
temp=sum+t;
sum=temp;
t=t+diff;
}
printf("%d",temp);
return 0;
}
