#include<stdio.h>
void main()
{
int a=8,b=2;
printf("a=%d,b=%d",a,b);
a=a-b;
b=a-b;
a=a+b;
printf("a=%d,b=%d",a,b);
}
