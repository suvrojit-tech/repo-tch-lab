//2+5+8+11+14... up to n terms
#include<stdio.h>
int main()
{
	int i=1,n,sum=0, term=2;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=term;
		term=term+3;
		i++;
	}
	printf("the sum of the series is: %d",sum);
	return 0;
}
