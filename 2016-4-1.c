#include<stdio.h>
int main()
{
	int n,count=0,cur,pre,trend;
	scanf("%d",&n);
	scanf("%d",&pre);
	scanf("%d",&cur);
	if(cur>pre)
		trend=1;
	else
		trend=-1;
	pre=cur;
	for(int i=2;i<n;i++)
	{
		scanf("%d",&cur);
		if((trend==1&&cur<pre)||(trend==-1&&cur>pre))
		{
			count++;
			trend=-trend;
		}
		pre=cur;
	}
	printf("%d",count);
	return 0;
}

