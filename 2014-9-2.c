#include<stdio.h>
#include<stdlib.h>
int ph[100][100];
int main()
{
	for(int i=0;i<100;i++)
	{
		for(int j=0;j<100;j++)
		{
			ph[i][j] = 0;
		}
	}
	int n;
	scanf("%d",&n);
	int x1,x2,y1,y2;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		for(int x=x1;x<x2;x++)
		{
			for(int y=y1;y<y2;y++)
			{
				ph[x][y] = 1;
			}
		}
	}
	int count = 0;
	for(int i=0;i<100;i++)
	{
		for(int j=0;j<100;j++)
		{
			if(ph[i][j] == 1)
			{
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
}
