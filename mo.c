#include<stdio.h>
void maain()
{
int a,b,c;
printf("\n enter the value of a,b,c /n");
scanf("%d,%d,%d",&a,&b,&c);
if((b<a)&&(c<a))
printf("\n %d is large /n",a);
elseif((b>c)&&(b>a))
printf("\n %d is large /n",b);
else
printf("%d is large",c);
}
