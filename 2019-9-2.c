#include<stdio.h>

int main()
{
	int fruits[1005]={0};
	int n,m,t;
	int flag[1005]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(int j=0;j<m;j++)
		{
			scanf("%d",&t);
			if(t>0)
			{
				if(fruits[i]>t)
					flag[i]=1;
				fruits[i]=t;
			}
			else
				fruits[i]+=t;
		}
	}
	long long int sum=0,count1=0,count2=0;
	int len;
	for(int i=0;i<n;i++)
	{
		sum+=fruits[i];
		if(flag[i]==1)
		{
			count1++;
			if(len==2)
				count2++;
			else
				len++;
		}
		else
		{
			len=0;
		}			
	}
	if(flag[n-2]&flag[n-1]&flag[0]!=0)
		count2++;
	if(flag[n-1]&flag[0]&flag[1]!=0)
		count2++;
	printf("%d %d %d",sum,count1,count2);
	return 0;
}
