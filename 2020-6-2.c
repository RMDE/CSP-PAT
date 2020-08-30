#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int n;
	int a,b;
	scanf("%d %d %d",&n,&a,&b);
	long long int u[a][2],v[b][2];
	for(int i=0;i<a;i++)
	{
		scanf("%lld %lld",&u[i][0],&u[i][1]);
	}
	for(int i=0;i<b;i++)
	{
		scanf("%lld %lld",&v[i][0],&v[i][1]);
	}
	int k1 = 0,k2 = 0;
	double sum = 0;
	while(k1<a && k2<b)
	{
		while( v[k2][0]<u[k1][0])
		{
			k2++;
		}
		if(v[k2][0]==u[k1][0])
		{
			sum += v[k2][1]*u[k1][1];
			k2++;
			k1++;
		}
		while(v[k2][0]>u[k1][0])
		{
			k1++;
		}
	}
	printf("%lld",(int)sum);
	return 0;
}
