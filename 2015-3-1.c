#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	unsigned short num[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	for(int j=m-1;j>=0;j--)
	{
		for(int i=0;i<n;i++)
		{
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
