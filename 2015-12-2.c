#include<stdio.h>
int main()
{
	int n,m;
	int chess[30][30];
	int flag[30][30]={0};
	int count=1;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",&chess[i][j]);
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			if(chess[i][j]==chess[i][j-1])
			{
				count++;
				if(j==m-1&&count>=3)
				{
					for(int p=j;p>j-count;p--)
						flag[i][p]=1;
					count=1;
				}
			}

			else
			{
				if(count>=3)
				{
					for(int p=j-1;p>=j-count;p--)
						flag[i][p]=1;
				}
				count=1;
			}
		}
		count=1;
	}
	count=1;
	for(int j=0;j<m;j++)
	{
		for(int i=1;i<n;i++)
		{
			if(chess[i][j]==chess[i-1][j])
			{
				count++;
				if(i==n-1&&count>=3)
				{
					for(int q=i;q>i-count;q--)
						flag[q][j]=1;
					count=1;
				}
			}
			else
			{
				if(count>=3)
				{
					for(int q=i-1;q>=i-count;q--)
						flag[q][j]=1;
				}
				count=1;
			}
		}
		count=1;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(flag[i][j]==1)
				printf("0 ");
			else
				printf("%d ",chess[i][j]);
		}
		printf("\n");
	}
	return 0;
}

