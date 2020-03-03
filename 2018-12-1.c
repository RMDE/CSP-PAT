#include<stdio.h>

int main()
{
	long long int sum=0,r,y,g,t;
	int k,n;
	scanf("%d %d %d",&r,&y,&g);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&k,&t);
		switch(k)
		{
			case 0:
				sum+=t;break;
			case 1:
				sum+=t;break;
			case 2:
				sum=sum+t+r;break;
			case 3:
				break;
			default:
				break;
		}
	}
	printf("%lld",sum);
	return 0;
} 
