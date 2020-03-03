#include<stdio.h>
int main()
{
	int n,count=0,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		if(n==1)
		{
			count=0;
			sum+=1;
		}
		else if(n==2)
		{
			count++;
			sum+=count*2;
		}
		scanf("%d",&n);
	}
	printf("%d",sum);

	return 0;
}
