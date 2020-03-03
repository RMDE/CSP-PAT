#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int num[n];
	for(int i=0;i<n;i++)
		num[i]=1;
	int count=n;
	int no=1;
	int i=0;
	while(count>0)
	{
		if(num[i]==0)
		{
			i++;
			continue;
		}
		if(i>=n)
		{
			i=0;
			continue;
		}
		if(no%10==k||no%k==0)
		{
			num[i]=0;
			count--;
		}
		no++;
		i++;
	}
	printf("%d",i);
	return 0;
}
