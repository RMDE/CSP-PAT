#include<stdio.h>
#include<stdlib.h>
#define N 10001
int main()
{
	int n,a,max = 0;
	int num[N];
	for(int i=0;i<N;i++)
	{
		num[i] = 0;
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		num[a] += 1;
		if(num[a] > max)
		{
			max = num[a];
		}
	}
	for(int i=0;i<N;i++)
	{
		if(num[i] == max)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
