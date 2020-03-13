#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int sum=0,a,count=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum+=a;
		if(sum>=k||i==n-1)
		{
			count++;
			sum=0;
		}
	}
	printf("%d",count);
	return 0;
}
