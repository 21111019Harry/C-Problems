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
void DeleteLast(PPNODE First);
int Count(PNODE Head);
void InsertLast(PPNODE First, int no);
void InsertAtPosition(PPNODE First, int iValue, int iPos);
int main()
{
	PNODE Head = NULL;
	int iRet = 0;

	InsertFirst(&Head,40);
	InsertFirst(&Head,30);
	InsertFirst(&Head,20);
	InsertFirst(&Head,10);

	Display(Head);

	DeleteLast(&Head);

	Display(Head);

	InsertLast(&Head,50);

	Display(Head);

	iRet = Count(Head);

	printf("%d\n",iRet);

	InsertAtPosition(&Head,25,3);

	Display(Head);

	return 0;
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
void Display(PNODE First)
{
	while(First!=NULL)
	{
		printf("|%d|->",First -> data);
		First = First -> next;
	}
	printf("\n");
}
void DeleteLast(PPNODE First)
{
	PNODE Temp = NULL;

	if(First==NULL)
	{
		return ;
	}
	else if((*First) -> next==NULL)
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
int Count(PNODE First)
{
	int iCnt = 0;
	while(First!=NULL)
	{
		iCnt++;
		First = First -> next;
	}
	return iCnt;
}
void InsertLast(PPNODE First, int no)
{
	PNODE newN = NULL;
	PNODE Temp = NULL;

	newN = (PNODE)malloc(sizeof(NODE));

	newN -> data = no;
	newN -> next = NULL;

	if(*First==NULL)
	{
		*First = newN;
	}
	else
	{
		Temp = *First;

		while(Temp -> next != NULL)
		{
			Temp = Temp -> next;
		}
		Temp -> next = newN;
	}
}
void InsertAtPosition(PPNODE First, int iValue, int iPos )
{
	PNODE Temp = NULL;
	PNODE newN = NULL;
	int iSize = 0;
	int iCnt = 1;

	iSize = Count(*First);

	if((iPos<1) || (iPos>iSize+1))
	{
		return ;
	}
	if(iPos == 1)
	{
		InsertFirst(First,iValue);
	}
	else if(iPos == iSize+1)
	{
		InsertLast(First,iValue);
	}
	else
	{
		Temp = *First;

		newN = (PNODE)malloc(sizeof(NODE));

		newN -> data = iValue;
		newN -> next = NULL;

		for(iCnt=1;iCnt<iPos-1;iCnt++)
		{
			Temp = Temp -> next;
		}
		newN -> next = Temp -> next;
		Temp -> next = newN;
	}
}
