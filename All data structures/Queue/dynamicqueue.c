#include<stdio.h>
#include<malloc.h>

typedef struct Node
{
	int data;
	struct Node *next;
}NODE, *PNODE;




void Enqueue(int no);
int Dequeue();
void Display(PNODE First);

int main()
{
	PNODE Head = NULL;
	PNODE Tail = NULL;

	Enqueue(11);
	Enqueue(21);
	Enqueue(51);

	Display(Head);
	return 0;
}

void Enqueue(int no)
{
	PNODE Head = NULL;
	PNODE Tail = NULL;
	PNODE newN = NULL;

	newN = (PNODE)malloc(sizeof(NODE));

	newN -> data = no;
	newN -> next = NULL;

	if((Head==NULL) && (Tail==NULL))
	{
		Head = newN;
		Tail = newN;
	}
	else
	{
		Tail -> next = newN;
		Tail = Tail -> next;
	}
}
int Dequeue()
{
	int no = 0;
	PNODE Head = NULL;
	PNODE Tail = NULL;
	PNODE Temp = Head;

	if(((Head==NULL) && (Tail==NULL)))
	{
		return 0; 
	}
	if(Head==Tail)
	{
		no = Head -> data;
		free(Head);
		Head = NULL;
		Tail = NULL;
		return no;
	}
	else
	{
		no = Head -> data;
		Head = Head -> next;
		free(Temp);
		return no;
	}
}
void Display(PNODE First)
{
	while(First!=NULL)
	{
		printf("|%d|-",First -> data);
		First = First -> next;
	}
}
