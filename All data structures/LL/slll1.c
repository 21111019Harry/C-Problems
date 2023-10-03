#include<stdio.h>
#include<malloc.h>


typedef struct Node
{
	int data;
	struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE First, int no);
void Display(PNODE First);
void DisplayRev(PNODE First);
void InsertLast(PPNODE First, int no);
void DeleteFirst(PPNODE First);
void DeleteLast(PPNODE First);
int count(PNODE First);
void InsertAtPos(PPNODE First, int no, int iPos);

int main()
{
	PNODE Head = NULL;
	int iRet = 0;
	
	InsertFirst(&Head,40);
	InsertFirst(&Head,30);
	InsertFirst(&Head,20);
	InsertFirst(&Head,10);
	InsertLast(&Head,50);
	InsertLast(&Head,60);
	InsertLast(&Head,70);
//	Display(Head);
	Display(Head);
	DisplayRev(Head);
	DeleteFirst(&Head);
	Display(Head);
	DeleteLast(&Head);
	Display(Head);
	iRet = count(Head);

	printf("%d\n",iRet);
	InsertAtPos(&Head,42,4);
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
void Display(PNODE First)
{
	PNODE Temp = First;
	while(Temp!=NULL)
	{
		printf("|%d|->",Temp -> data);
		Temp = Temp -> next;
	}
	printf("\n");
}
int count(PNODE First)
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
	PNODE Temp = *First;

	newN = (PNODE)malloc(sizeof(NODE));

	newN -> data = no;
	newN -> next = NULL;

	if(*First==NULL)
	{
		*First = newN;
	}
	else
	{
		while(Temp -> next!= NULL)
		{
			Temp = Temp -> next;
		}
		Temp -> next = newN;
	}
}
void DisplayRev(PNODE First)
{
	PNODE Temp = NULL;
	if(Temp!=NULL)
	{
		printf("|%d|->",Temp -> data);
		Temp = Temp -> next;
		DisplayRev(First);
	}
}
void DeleteFirst(PPNODE First)
{
	PNODE Temp = *First;
	if(*First==NULL)
	{
		return ;
	}
	else
	{
		Temp = *First;
		*First = (*First) -> next;
		free (Temp);
	}
}
void DeleteLast(PPNODE First)
{
	PNODE  Temp = NULL;
	if(*First==NULL)
	{
		return ;
	}
	else if((*First) -> next == NULL)
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
void InsertAtPos(PPNODE First, int no, int iPos)
{
	PNODE newN = NULL;
	PNODE Temp = NULL;
	int iSize = 0;
	int i = 0;

	iSize = count(*First);

	if((iPos<1) || (iPos>iSize+1))
	{
		return ;
	}
	if (iPos==1)
	{
		InsertFirst(First,no);
	}
	if(iPos==iSize+1)
	{
		InsertLast(First,no);
	}
	else
	{
		Temp = *First;

		newN = (PNODE)malloc(sizeof(NODE));
		newN -> data = no;
		newN -> next = NULL;

		for(i=1;i<iSize-1;i++)
		{
			Temp = Temp -> next;
		}
		newN -> next = Temp -> next;
		Temp -> next = newN;
	}
}
