#include<stdio.h>
#include<stdlib.h>
unsigned short matrix[1000][1000];
int  main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<2*n-1;i++)
	{
		for(int j=0;j<2*n-1;j++)
		{
			matrix[i][j] = 0;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	unsigned short sort[(2*n)*(2*n-1)/2];
	int index = 0,a,b;
	for(int i=0;i<2*n-1;i++)
	{
		if(i%2 == 0)
		{
			a = i;
			b = 0;
			while(a >= 0)
			{
				sort[index] = matrix[a][b];
				index ++;
				a --;
				b ++;
			}
		}
		else
		{
			a = 0;
			b = i;
			while(b >= 0)
			{
				sort[index] = matrix[a][b];
				index ++;
				a ++;
				b --;
			}
		}
	}
	for(int i=0;i<(2*n)*(2*n-1)/2;i++)
	{
		if(sort[i] != 0)
		{
			printf("%d ",sort[i]);
		}
	}

	return 0;
}
