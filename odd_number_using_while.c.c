// write a program to display odd numbers from 1 to n
#include <stdio.h>
int main()
{
	int n, i=1;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		i=i+2;
	}

	return 0;
}
