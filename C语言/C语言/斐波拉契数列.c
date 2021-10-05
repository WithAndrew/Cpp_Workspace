//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
////int fun(int n)
////{
////	if(1 == n)
////	{
////		return 1;
////	}
////	else if (2 == n)
////	{
////		return 1;
////	}
////	else
////	{
////		return fun(n-1) + fun(n-2);
////	}
////}
////
////
////int fun1(int n)
////{
////	if (1 == n )
////	{
////		return 1;
////	}
////	else
////	{
////		return n*fun1(n-1);
////	}
////}
////
//int main(void)
//{
//	//printf ("%d\n", fun1(4));
//	char c[10];
//	char *p = &c[0];
//	const char* p1 = "asdasd";
//
//	*p = 'a';
//	*(p+1) = 'a';
//	p[2] = 'x';
//	p[3] = '\0';
//
//	pow() * 12 ;
//
//	*p1 = 'w';
//
//	printf ("%s", p1);
//
//	system("pause");
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>

typedef struct _node
{
	int data;
	struct _node *next;
}Node;

Node *phead = NULL;
Node *pend = NULL;

void headAddList(int num)
{
	Node *temp = (Node *)malloc(sizeof(Node));
	temp->data = num;
	temp->next = NULL;
	if (phead == NULL)
	{
		phead = temp;
		pend = temp;
	}
	else
	{
		temp->next = phead;
		phead = temp;
	}
}
void showList()
{
	Node *pphead = phead;
	while (pphead != NULL)
	{
		printf("%d\n", pphead->data);
		pphead = pphead->next;
	}
}

int lengthList(Node *head)
{
	int length = 0;
	Node * temp = head;
	while (temp != NULL)
	{
		length++;
		temp = temp->next;
	}
	return length;
}

void  sortList(Node *head)
{
	int len = lengthList(phead);
	Node *phead, *q = NULL, *p = NULL, *temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (p->data > q->data)
			{
				temp = p->data;
				p->data = q->data;
				q->data = temp;
			}

		}
	}
}
int main(void)
{
	int arr[] = { 2,4,88,33,66,99,44,55 };
	phead;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		headAddList(*(arr + i));
	}
	showList();
	sortList(phead);
	showList();
	

	system("pause");
	return 0;
}
