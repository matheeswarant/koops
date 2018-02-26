#include <stdio.h>

int main()
{
	int i=70;
	int k=120;
	printf("value of before swapping",i,k);
	i=i^k;
	k=i^k;
	i=i^k;
	printf("value of after swpping",i,k);
	return 0;
}
