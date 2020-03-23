#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,*p,number[20];   //to save the number of available seats of each row
	for(i=0;i<20;i++)
		number[i]=5;
	scanf("%d",&n);
	int flag=0;
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<20;j++)
		{
			if(number[j]>=p[i])
			{
				for(int r=0;r<p[i];r++)
				{
					printf("%d ",5*(j+1)-number[j]+1);
					number[j]--;
				}
				flag=1;
				break;
			}
		}
		if(flag==0)        //while there aren't enough seats in the same row 
		{
			j=0;
			while(p[i])
			{
				if(number[j]>0)
				{
					printf("%d ",5*(j+1)-number[j]+1);
					number[j]--;
					p[i]--;
				}
				else j++;
			}
		}
		flag=0;
		if(i!=n-1)printf("\n");
	}
	return 0;
 } 
