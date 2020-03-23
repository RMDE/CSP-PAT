#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,max=0,t,pre,diff;
	scanf("%d",&n);
	scanf("%d",&pre);
	for(int i=1;i<n;i++)
	{
		scanf("%d",&t);
		diff=abs(t-pre);
		if(diff>max)
			max=diff;
		pre=t;
	}
	printf("%d",max);

	return 0;
}
