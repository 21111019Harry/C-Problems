#include<stdio.h>
#include<malloc.h>


typedef struct Node
{
	int data;
	struct Node *next;
}NODE , *PNODE;

void Push(int no);
int Pop();
void Display(PNODE First);
int main()
{
	PNODE Head = NULL;

	Push(30);
	Push(20);
	Push(10);

	Display(Head);

	Pop();

//	free(newN);

	return 0;
}
void Push(int no)
{
	PNODE Head = NULL;
	PNODE newN = NULL;

	newN = (PNODE)malloc(sizeof(NODE));

	newN -> data = no;
	newN -> next = NULL;
	if(Head==NULL)
	{
		Head = newN;
	}
	else
	{
		newN -> next = Head;
		Head = newN;
	}
}
int Pop()
{
	int no;
	PNODE Head = NULL;
	PNODE Temp = NULL;

	if(Head==NULL)
	{
		printf("Stack is Empty:-");
		return 0;
	}
	else
	{
		Temp = Head;
		no  = Head -> data;
		Head = Head -> next;
		free(Temp);
		return no;
	}
}
void Display(PNODE First)
{
	PNODE Temp = First;
	while(Temp!=-1)
	{
		printf("%d",Temp -> data);
		Temp = Temp -> next;
	}
}
