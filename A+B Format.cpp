/*
**Calculate a+b and output the sum in standard format 
**that is, the digits must be separated into groups of three by commas 
**(unless there are less than four digits).
**@Author:RMDE
*/
#include<stdio.h>
#include<math.h>
void out(int x){
	if(x==0)
	{
		printf("0\n");
		return;
	}
	if(x<0)
	{
		x=-x;
		printf("-");
	}
	int i=6,j=0,p=0;
	int flag=0;
	char num[8]="\0";
	while(i>=0)
	{
		if((p=x/pow(10,i))!=0)
		{
			flag=1;
			num[j]=p+'0';
			x-=p*pow(10,i);
			j++;
		}
		else
		{
			if(flag)
			{
				num[j]='0';
				j++;
			}
		} 
		i--;
	}
	int r=(j)/3,s=(j)%3;
	for(int n=0;n<s;n++)
	{
		printf("%c",num[n]);
	}
	if(r&&s)
		printf(",");
	for(int n=1;n<=r;n++)
	{
		printf("%c%c%c",num[s+n*3-3],num[s+n*3-2],num[s+n*3-1]);
		if(n!=r)printf(",");
	}
	printf("\n");
}
int main(){
	int a,b; 
    while(scanf("%d",&a)!=EOF){
        scanf("%d",&b);
        out(a+b);
    }
    return 0; 
}
