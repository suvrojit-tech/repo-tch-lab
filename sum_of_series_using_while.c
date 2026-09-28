//2+5+8+11+14... up to n terms
#include<stdio.h>
int main()
{
	int i=2,n,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=i;
		i=i+3;
	}
	printf("the sum of the series is: %d",sum);
	return 0;
}
