#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	scanf("%d",&n);
	sum+=(n/50)*7;
	n=n%50;
	sum+=(n/30)*4;
	sum+=(n%30)/10;
	printf("%d",sum);
	return 0;
}
