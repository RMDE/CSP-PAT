#include<stdio.h>
#include<stdlib.h>

int calculate(int x,int y,int n1,int n2,int n3)
{
	int res;
	res = n1+n2*x+n3*y;
	if(res > 0)
		return 1;
	else
		return !1;
}

int main()
{
	int n,m;
	int A[1000][2],B[1000][2];
	char ch;
	int x,y,a=0,b=0;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %c",&x,&y,&ch);
		if(ch == 'A')
		{
			A[a][0] = x;
			A[a][1] = y;
			a++;
		}
		else if(ch == 'B')
		{
			B[b][0] = x;
			B[b][1] = y;
			b++;
		}
	}
	int n1,n2,n3;
	int res_a,res_b;
	int flag=0;
	for(int i=0;i<m;i++)
	{
		flag = 0;
		scanf("%d %d %d",&n1,&n2,&n3);
		res_a = calculate(A[0][0],A[0][1],n1,n2,n3);
		for(int j=1;j<a;j++)
		{
			if(calculate(A[j][0],A[j][1],n1,n2,n3)!=res_a)
			{
				printf("No\n");
				flag=1;
				break;
			}
		}
		if(flag == 1)
		{
			continue;
		}
		for(int j=0;j<b;j++)
		{
			if(calculate(B[j][0],B[j][1],n1,n2,n3)!=!res_a)
			{
				printf("No\n");
				flag = 1;
				break;
			}
		}
		if(flag != 1)
		{
			printf("Yes\n");
		}
	}
	return 0;
}


