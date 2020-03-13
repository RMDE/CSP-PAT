#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
		scanf("%d",&num[i]);
	int temp;
	for(int i=n-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(num[j]>num[j+1])
			{
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
	int mid=num[n/2],min=0,max=0;
	for(int i=0;i<n;i++)
	{
		if(num[i]<mid)
			min++;
		else if(num[i]>mid)
			max++;
	}
	if(min==max)
		printf("%d",mid);
	else
		printf("-1");
	return 0;
}
