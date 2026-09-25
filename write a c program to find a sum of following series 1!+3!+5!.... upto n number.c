//write a c program to find a sum of following series 1!+3!+5!.... upto n number
//1!=1
//3!=3*2*1=6
//5!=5*4*3*2*1=120
//up to n!
#include<stdio.h>
int main()
{
	int i=1, c=1, a=1, n;
	long int fact=1, sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(c<=n)
	{
		i=1;
		fact=1;
		while(i<=a)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		c++;
		a=a+2;
	}
	printf("sum of numbers = %d",sum);
	return 0;
}
