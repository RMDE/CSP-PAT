#include<stdio.h>
int main()
{
	long long int sum=0;
	int k,n,r,y,g,t,offset;
	scanf("%d %d %d",&r,&y,&g);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&k,&t);
		if(k==0)
			sum+=t;
		else {
			switch(k)
			{
				case 1:
					offset=r-t;break;
				case 2:
					offset=y-t+r+g;break;
				case 3:
					offset=g-t+r;break;
			}
			offset=(offset+sum)%(r+g+y);
			if(offset>=0&&offset<=r)
			{
				sum+=(r-offset);
			}
			else if(offset>=(r+g)&&offset<=(r+y+g))
			{
				sum+=(r+y+g-offset+r);
			}
		}
	}
	printf("%lld",sum);
	return 0;
}
