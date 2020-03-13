#include<stdio.h>

void sort(long long int box[][3],int n)
{
	int a,b,c;
	for(int i=n-1;i>0;i--)
		for(int j=0;j<i;j++)
			if(box[j][1]>box[j+1][1]||(box[j][1]==box[j+1][1]&&box[j][2]==box[j+1][2]&&box[j][0]>box[j+1][0])||(box[j][1]==box[j+1][1]&&box[j][2]>box[j+1][2]))
			{
				a=box[j][0];
				b=box[j][1];
				c=box[j][2];
				box[j][0]=box[j+1][0];
				box[j][1]=box[j+1][1];
				box[j][2]=box[j+1][2];
				box[j+1][0]=a;
				box[j+1][1]=b;
				box[j+1][2]=c;
			}
}

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	long long int box[2*k][3];
	int xx[n+1];
	for(int i=1;i<=n;i++)
		xx[i]=i;
	long long int key,time,clock;
	for(int i=0;i<k;i++)
	{
		scanf("%d %d %d",&key,&clock,&time);
		box[2*i][0]=key;
		box[2*i][1]=clock;
		box[2*i][2]=1;//means borrow
		box[2*i+1][0]=key;
		box[2*i+1][1]=clock+time;
		box[2*i+1][2]=0;
	}
	sort(box,2*k);
	int no;
	//for(int i=0;i<2*k;i++)
		//printf("%d %d %d\n",box[i][0],box[i][1],box[i][2]);
	for(int i=0;i<2*k;i++)
	{
		if(box[i][2]==1)
		{
			for(int j=1;j<=n;j++)
				if(xx[j]==box[i][0])
				{
					no=j;
					break;
				}
			xx[no]=0;//no keys
		}
		else
		{
			for(int j=1;j<=n;j++)
				if(xx[j]==0)
				{
					no=j;
					break;
				}
			xx[no]=box[i][0];
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ",xx[i+1]);
	return 0;
}

