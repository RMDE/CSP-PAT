#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a,count = 0;
	scanf("%d",&n);
	int num[1001];
	for(int i=0;i<1001;i++)
	{
		num[i] = 0;
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(num[a] == 0)
		{
			count++;
		}
		num[a] ++;
	}
	int max = 0,index = -1;
	while(count > 0)
	{
		max = 0;
		index = -1;
		for(int i=0;i<1001;i++)
		{
			if(num[i] > max)
			{
				max = num[i];
				index = i;
			}
		}
		printf("%d %d\n",index,max);
		count --;
		num[index] = 0;
	}
	return 0;
}
