#include<stdio.h>
int main()
{
	int n,temp;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	int flag=a[1]-a[0];
	for(int i=2;i<n;i++)
	{
		if(a[i]-a[i-1]<flag)
			flag=a[i]-a[i-1];
	}
	printf("%d",flag);
	return 0;
}
