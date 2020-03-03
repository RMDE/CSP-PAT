#include<stdio.h>
int time[1000001]={0};
int main()
{
	int n;
	int t1,t2;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&t1,&t2);
		for(int j=t1+1;j<=t2;j++)
			time[j]=1;

	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&t1,&t2);
		for(int j=t1+1;j<=t2;j++)
		{
			if(time[j]==1)
				sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
