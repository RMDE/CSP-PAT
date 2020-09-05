#include<stdio.h>
#include<stdlib.h>
struct Window{
	int no;
	int x1,y1;
	int x2,y2;
	struct Window *next;
};
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	Window *head;
	head = (Window*)malloc(sizeof(Window));
	head->next = NULL;
	Window *p,*q;
	for(int i=0;i<n;i++)
	{
		p = (Window*)malloc(sizeof(Window));
		scanf("%d %d %d %d",&p->x1,&p->y1,&p->x2,&p->y2);
		p->no = i+1;
		p->next = head->next;
		head->next = p;
	}
	int x,y;
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&x,&y);
		p = head ->next;
		q = head;
		while(p != NULL)
		{
			if(p->x1<=x && p->x2>=x && p->y1<=y &&p->y2>=y)
			{
				printf("%d\n",p->no);
				q->next = p->next;
				p->next = head->next;
				head->next = p;
				break;
			}
			else
			{
				q = p;
				p = p->next;
			}
		}
		if(p == NULL)
		{
			printf("IGNORED\n");
		}
	}
	return 0;
}
