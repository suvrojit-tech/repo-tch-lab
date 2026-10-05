//tribonacci
#include<stdio.h>
int main()
{
	int next, a=0,b=1,c=1,i=1,n;
	printf("Enter the terms: ");
	scanf("%d",&n);
	printf("tribonacci series: ");
	while(i<=n)
	{
		printf("%d  ",a);
		next=a+b+c;
		a=b;
		b=c;
		c=next;
		i++;
	}
	printf("\n");
	return 0;
}
