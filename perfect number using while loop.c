//w.c.p. to check if a number is perfect or not using while loop
#include <stdio.h>
int main()
{
	int n, i=1, sum=0;
	printf("enter a number: ");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			sum+=i;
		}
		i++;
	}
	if(n<=0)
	{
		printf("%d is not a perfect number",n);
	}
	else if (sum==n)
	{
		printf("%d is a perfect number",n);
	}
	else
	{
		printf("%d is not a perfect number",n);
	}
	return 0;
}
