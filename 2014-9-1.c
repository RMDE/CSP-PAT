#include<stdio.h>
#include<stdlib.h>
#define N 10001
int main()
{
	int num[N];
	for(int i=0;i<N;i++)
	{
		num[i] = 0;
	}
	int n,a;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		num[a] = 1;
	}
	int count = 0;
	for(int i=1;i<N;i++)
	{
		if(num[i]==1 && num[i-1]==1)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
