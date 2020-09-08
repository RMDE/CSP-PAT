#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,cur,pre = -1,sum = 0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&cur);
		if(cur != pre)
		{
			sum++;
		}
		pre = cur;
	}
	printf("%d",sum);
	return 0;
}
