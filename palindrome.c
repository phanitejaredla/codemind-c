#include<stdio.h>
int main()
{
	int n=1234,rem,rev=0;
		while(n!=0)
		{
			rem=n%10;
			n=n/10;
			rev=rev*10+rem;
		}
	printf("%d",rev);
	return 0;
}
