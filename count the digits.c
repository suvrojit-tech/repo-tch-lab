//count the digits
#include<stdio.h>
int main()
{
	int c=0,n;
	printf("enter the num:");
	scanf("%d",&n);
	while(n!=0)
	{
		n/=10;
		c++;
	}
	printf("Number of digits= %d",c);
	return 0;
}

