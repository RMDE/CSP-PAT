#include<stdio.h>
#include<stdlib.h>

int check(int year)
{
	if(year%4==0 && year%100!=0)
	{
		return 1;
	}
	else if(year%400==0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int year,day;
	int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d\n%d",&year,&day);
	if(check(year) == 1)
	{
		month[1] +=1;
	}
	int i = 0;
	while(day > month[i])
	{
		day -= month[i];
		i++;
	}
	printf("%d\n%d",i+1,day);

	return 0;
}
