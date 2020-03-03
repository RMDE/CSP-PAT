#include<stdio.h>
int main(){
	int n=0,a=0,d=0;
	scanf("%d",&n); 
	int x=0;
	float b=0,c=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(i==1)
			a=x;
		if(i==n/2)
			b=x;
		if(i==n/2+1)
			c=x;
		if(i==n)
			d=x; 
	}
	if(a<d)
	{
		a=a+d;
		d=a-d;
		a=a-d;
	}
	if(n%2==0)
		c=(b+c)/2.0;
	int num=(int)c;
	if(c==num)
		printf("%d %d %d",a,num,d);
	else
		printf("%d %.1f %d",a,c,d);
	return 0;
}
