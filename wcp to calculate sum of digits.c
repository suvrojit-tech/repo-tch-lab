//wcp to claculate sum of digits.
#include<stdio.h>
int main()
{
	int sum=0,num,digit;
	printf("enter the num:");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		num/=10;
		sum+=digit;
	}
	printf("sum of digits= %d",sum);
	return 0;
}
