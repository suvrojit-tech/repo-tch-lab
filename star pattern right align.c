//write a c program to print right align
#include <stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the number of lines: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=n;k>=i;k--)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ",j);
		}
		printf("\n");
	}
	return 0;
}
