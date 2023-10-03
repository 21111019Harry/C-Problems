#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


typedef struct Node
{
	int data;
	struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int no);
void Display(PNODE First, PNODE Last);
void DeleteFirst(PPNODE First, PPNODE Last);
void DeleteLast(PPNODE First, PPNODE Last);
int Sumation(PNODE First, PNODE Last);
int Maximum(PNODE First, PNODE Last);
int main()
{
	PNODE Head = NULL;
	PNODE Tail = NULL;

	int iRet = 0, iAns = 0;

	InsertFirst(&Head,&Tail,40);
	InsertFirst(&Head,&Tail,30);
	InsertFirst(&Head,&Tail,50);
	InsertFirst(&Head,&Tail,10);

	Display(Head,Tail);

	DeleteFirst(&Head,&Tail);

	Display(Head,Tail);

	DeleteLast(&Head,&Tail);

	Display(Head,Tail);

	iRet = Sumation(Head, Tail);

	printf("%d\n",iRet);

	iAns = Maximum(Head,Tail);

	printf("%d\n",iAns);

	return 0;
}
void InsertFirst(PPNODE First, PPNODE Last,int no)
{
	PNODE newN = NULL;

	newN = (PNODE)malloc(sizeof(NODE));

	newN -> data = no;
	newN -> next = NULL;

	if((*First==NULL) && (*Last==NULL))
	{
		*First = newN;
		*Last = newN;
		(*Last) -> next = *First;
	}
	else 
	{
		newN -> next = *First;
		*First = newN;
		(*Last) -> next = *First;
	}
}
void Display(PNODE First, PNODE Last)
{
	if((First==NULL) && (Last==NULL))
	{
		return ;
	}
	do
	{
		printf("|%d|->",First -> data);
		First = First -> next;
	}while(First != Last -> next );
	printf("\n");
}
void DeleteFirst(PPNODE First, PPNODE Last)
{
	PNODE Temp = NULL;

	if((First==NULL) && (Last==NULL))
	{
		return ;
	}
	else if(First==Last)
	{	
		free(*First);
		*First = *Last = NULL;
	}
	else
	{
		Temp = *First;
		*First = (*First) -> next;
		(*Last) -> next = *First;
		free(Temp);
	}

}
void DeleteLast(PPNODE First, PPNODE Last)
{
	PNODE Temp =NULL;

	if((*First==NULL) && (*Last==NULL))
	{
		return ;
	}
	else if(*First==*Last)
	{
	        free(*First);
		*First = *Last = NULL;
	}
	else
	{
		Temp = *First;
		while(Temp -> next != *Last)
		{
			Temp = Temp -> next;
		}
		free(Temp -> next);
		*Last = Temp;
		(*Last) -> next = *First;
	}
}
int Sumation(PNODE First, PNODE Last)
{
	int iCnt = 0;
	if((First==NULL) && (Last==NULL))
	{
		return 0;
	}
	do
	{
		iCnt = First -> data + iCnt;
		First = First -> next;
	}while(First != Last -> next);
	return iCnt;

}
int Maximum(PNODE First, PNODE Last)
{
	int iMax = 0;

	if((First==NULL) && (Last==NULL))
	{
		return 0;
	}
	do
	{
		if((First -> data)> iMax)
		{
			iMax = First -> data;
		}
		First = First -> next;
	}while(First != Last -> next);
	return iMax;
}
