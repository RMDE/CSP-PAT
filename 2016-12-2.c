#include<stdio.h>
int main()
{
	int v,res;
	scanf("%d",&v);
	if(v<=3500)
		printf("%d",v);
	else
	{
		res=3500;
		v=v-3500;
		int a=1500*0.97;
		int b=a+3000*0.9;
		int c=b+4500*0.8;
		int d=c+(26000/4)*3;
		int e=d+20000*0.7;
		int f=e+25000*0.65;
		if(v<a)
		{
			v=(v/97)*100;
			res+=v;
		}
		else if(v<b)
		{
			v=((v-a)/9)*10;
			res+=1500+v;
		}
		else if(v<c)
		{
			v=((v-b)/8)*10;
			res+=4500+v;
		}
		else if(v<d)
		{
			v=((v-c)/75)*100;
			res+=9000+v;
		}
		else if(v<e)
		{
			v=((v-d)/7)*10;
			res+=35000+v;
		}
		else if(v<f)
		{
			v=((v-e)/65)*100;
			res+=55000+v;
		}
		else
		{
			v=((v-f)/55)*100;
			res+=80000+v;
		}
		printf("%d",res);
	}
	return 0;
}
