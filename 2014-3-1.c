#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 1001
int main()
{
	int n,a,count = 0;
	scanf("%d",&n);
	int num[N];
	for(int i=0;i<N;i++)
	{
		num[i] = 0;
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		num[abs(a)] += 1;
		if(num[abs(a)] > 1)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
