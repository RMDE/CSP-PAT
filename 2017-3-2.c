#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d\n%d",&n,&m);
	int list[n+1];
	for(int i=1;i<=n;i++)
		list[i]=i;
	int no,step,flag;
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&no,&step);
		if(step>0)
		{
			for(int j=1;j<=n;j++)
				if(list[j]==no)
				{
					flag=j;
					break;
				}
			for(int j=flag;j<flag+step;j++)
				list[j]=list[j+1];
			list[flag+step]=no;
		}
		else
		{
			for(int j=1;j<=n;j++)
				if(list[j]==no)
				{
					flag=j;
					break;
				}
			for(int j=flag;j>flag+step;j--)
				list[j]=list[j-1];
			list[flag+step]=no;
		}
	}
	for(int i=1;i<=n;i++)
		printf("%d ",list[i]);
	return 0;
}
