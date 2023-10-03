#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


struct Node
{
	int data;
	struct Node *next;
};
typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;



void InsertFirst(PPNODE First, int no);
void Display(PNODE First);
int main()
{
	PNODE Head = NULL;
	
	InsertFirst(&Head,40);
	InsertFirst(&Head,30);
	InsertFirst(&Head,20);
	InsertFirst(&Head,10);

	Display(Head);

	return 0;
}
void InsertFirst(PPNODE First, int no)
{
	PNODE newN = NULL;

	newN = (PNODE)malloc(sizeof(NODE));

	newN -> data = no;
	newN -> next = NULL;

	if(First==NULL)
	{
		*First = newN;
	}
	else
	{
		newN -> next = *First; 
		*First = newN;
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
void Prime(PNODE First)
{

}
