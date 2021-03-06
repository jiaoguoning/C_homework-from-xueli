#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{ 
	char   name[15];
	int    score;
	struct student *next;
}STU;
STU * create(int n)//创建链表                          正向创建链表
{
	int i;
	STU *h, *q ,*p;
	h = q = (STU *)malloc(sizeof(STU));
	for(i = 0;i<n;i++)
	{
		p = (STU *)malloc(sizeof(STU));
		scanf("%s",p->name);
		scanf("%d",&p->score);
		p->next = NULL;
		q -> next = p ;
		q = p ;
	}
	return h;
}
void sort(STU *head)//排序     冒泡排序
{ 
	STU * p,* q;
	char t;
	for(p=head -> next; NULL != p; p=p->next)
	{
		for(q=p->next; NULL !=q; q=q->next)
		{ 
			if(p->score> q->score)
			{
			    int m=0;                       //交换数据区域
				m=p->score;
				p->score = q->score ;
				q->score = m ;
				
				t=*p->name;                //交换地址区域
				*p->name=*q->name;
				*q->name=t;
			}
		}
	}
}
void visit(STU *h)//遍历
{
	STU * p=h->next;
	for(;p!= NULL;p=p -> next)
	{
		printf("name: %s,score: %d \n",p -> name,p -> score);
	}
}
int main(void)
{
	STU *head;
	int num;
	scanf("%d",&num);
	head=create(num);
	visit(head);
	sort(head);
	visit(head);
	return 0;
}
