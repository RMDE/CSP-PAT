#include<stdio.h>
int main()
{
	unsigned long long int n;
	scanf("%lld",&n);
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
