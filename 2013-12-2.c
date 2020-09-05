#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[9],index = 0;
	char ch;
	for(int i=0;i<12;i++)
	{
		scanf("%c",&ch);
		if(ch>='0' && ch<='9')
		{
			num[index++] = ch-'0';
		}
	}
	scanf("%c",&ch);
	int sum = 0;
	for(int i=0;i<9;i++)
	{
		sum += num[i]*(i+1);
	}
	int res = sum%11;
	if(res == 10)
	{
		if(ch == 'X')
		{
			printf("Right");
		}
		else
		{
			printf("%d-%d%d%d-%d%d%d%d%d-X",num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8]);
		}
	}
	else
	{
		if(ch == '0'+res)
		{
			printf("Right");
		}
		else
		{
			printf("%d-%d%d%d-%d%d%d%d%d-%d",num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],res);
		}
	}
	return 0;
}
				

