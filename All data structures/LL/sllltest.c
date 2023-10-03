#include<stdio.h>
#include<stdlib.h>



struct Node
{
	int data;
	struct Node *next;
};
typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE First, int no);
void InsertLast(PPNODE First, int no);
void Display(PNODE First);
void DeleteFirst(PPNODE First);
void DeleteLast(PPNODE First);


int main()
{
	PNODE Head = NULL;
	InsertFirst(&Head,10);
	InsertFirst(&Head,20);
	InsertFirst(&Head,30);
	InsertLast(&Head,40);
	Display(Head);
	DeleteFirst(&Head);
	DeleteLast(&Head);
	Display(Head);
}
void InsertFirst(PPNODE First, int no)
{
	PNODE newN = NULL;
	newN = (PNODE)malloc(sizeof(NODE));

	newN -> data = no;
	newN -> next = NULL;

	if(*First==NULL)
	{
		*First = newN;
	}
	else
	{
		newN -> next = *First;
		*First = newN;
	}
}
void InsertLast(PPNODE First, int no)
{
	PNODE newN = NULL;
	PNODE Temp = NULL;

	newN -> data = no;
	newN -> next = NULL;

	if(*First==NULL)
	{
		*First = newN;
	}
	else
	{
		Temp = *First;

		while(Temp -> next!=NULL)
		{
			Temp = Temp -> next;
		}
		Temp -> next = newN;
	}
}
void Display(PNODE First)
{
	while(First!=NULL)
	{
		printf("|%d|->",First -> data);
		First = First -> next;
	}
	printf("\n");
}
void DeleteFirst(PPNODE First)
{
	PNODE Temp = *First;
	if(*First==NULL)
	{
		printf("Linked List is Empty:");
		return ;
	}
	else
	{
		(*First) = (*First) -> next;
		free(Temp);
	}
}
void DeleteLast(PPNODE First)
{
	PNODE Temp = NULL;

	if(*First==NULL)
	{
		printf("Linked List is Empty:");
		return ;
	}
	else if((*First) -> next!=NULL)
	{
		free(*First);
		*First = NULL;
	}
	else
	{
		Temp = *First;
		while(Temp -> next -> next!=NULL)
		{
			Temp = Temp -> next;
		}
		free(Temp -> next);
		Temp -> next = NULL;
	}
}
