/*
**A+B where A and B are two polynomials.
**input:K N1 aN1 N2 aN2 ... NK aNK
**K means the number of nonzero terms in the polynomial
**Ni and aNi(i=1,2,...,K) are the exponents and coefficients, respectively. 
**It is given that 1¡ÜK¡Ü10£¬0¡ÜNK<...<N2<N1¡Ü1000.
**@Author:RMDE 
*/
#include<stdio.h>
int main()
{
	float poly[1001]={0};
	int k=0,n=0,max=0,count=0;
	float num=0;
	for(int j=0;j<2;j++)
	{
		scanf("%d",&k);
		for(int i=0;i<k;i++)
		{
			scanf("%d",&n);
			if(n>max)
				max=n;
			if(poly[n]==0)
				count++;
			scanf("%f",&num);
			poly[n]+=num;
			if(poly[n]==0)
				count--;
		}
	}
	printf("%d",count);
	for(int i=max;i>=0;i--)
	{
		if(poly[i]!=0)
		{
			printf(" ");
			printf("%d %.1f",i,poly[i]);
		}
	}
}
