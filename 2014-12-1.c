#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
	{
		num[i] = 0;
	}
	int a;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		num[a] ++;
		printf("%d ",num[a]);
	}
	return 0;
}
	
