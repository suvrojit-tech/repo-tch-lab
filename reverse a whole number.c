//reverse a whole number
#include<stdio.h>
int main()
{
	int n,rev=0,digit;
	printf("enter a whole num:");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	printf("Reverse value will be= %d",rev);
	return 0;
}

