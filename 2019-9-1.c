#include<stdio.h>

int main(){
	int n,m,t;
	long long int sum=0;
	int init,pro[1000]={0};
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&init);
		sum+=init;
		for(int j=0;j<m;j++)
		{
			scanf("%d",&t);
			pro[i]+=t;
		}
	}
	int max=pro[0];
	int flag=0;
	for(int i=0;i<n;i++)
	{
		sum+=pro[i];
		if(pro[i]<max)
		{
			max=pro[i];
			flag=i;
		}
	}
	max=-max;
	printf("%d %d %d",sum,flag+1,max);
	return 0;
} 
