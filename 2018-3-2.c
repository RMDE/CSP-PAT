#include<stdio.h>
typedef struct {
	int speed;
	int location;
}Ball;

int main()
{
	int n,L,t,temp;
	scanf("%d %d %d",&n,&L,&t);
	Ball ball[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ball[i].location);
		ball[i].speed=1;
	}
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<n;j++)
		{
			ball[j].location+=ball[j].speed;
			if(ball[j].location>=L)
				ball[j].speed=-1;
			else if(ball[j].location<=0)
				ball[j].speed=1;
			for(int p=0;p<n;p++)
			{
				if(ball[j].location==ball[p].location)
				{
					temp=ball[j].speed;
					ball[j].speed=ball[p].speed;
					ball[p].speed=temp;
					break;
				}
			}
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ",ball[i].location);
	return 0;
}
