#include<stdio.h>
int main()
{
int a,j, a[90],n,temp;
printf("enter number ");
scanf("%d",&n);
printf("enter array");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
