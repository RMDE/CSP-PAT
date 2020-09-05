#include<stdio.h>
#include<stdlib.h>

struct Node{
	int index;
	int value;
	struct Node *next;
};

int main()
{
	long long int n;
	int a,b;
	scanf("%lld %d %d",&n,&a,&b);
	Node *u,*v;
	u = (Node*)malloc(sizeof(Node));
	u->next = NULL;
	v = (Node*)malloc(sizeof(Node));
	v->next = NULL;
	Node *p = NULL,*q = NULL;
	for(int i=0;i<a;i++)
	{
		p =(Node*)malloc(sizeof(Node));
		scanf("%d %d",&p->index,&p->value);
		p->next = u->next;
		u->next = (Node*)p;
	}
	for(int i=0;i<b;i++)
	{
		p =(Node*)malloc(sizeof(Node));
		scanf("%d %d",&p->index,&p->value);
		p->next = v->next;
		v->next = (Node*)p;
	}
	p = u->next;
	q = v->next;
	long long int sum = 0;
	while(p!=NULL && q!=NULL)
	{
		if(q->index > p->index)
		{
			q = q->next;
		}
		else if(p->index == q->index)
		{
			sum += p->value*q->value;
			p = p->next;
			q = q->next;
		}
		else
		{
			p = p->next;
		}
	}
	printf("%lld\n",sum);
	return 0;
}
