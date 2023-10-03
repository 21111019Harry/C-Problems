//os che sgle internal data structures he sgle dublyll circule linked list madhe ahet.


#include<stdio.h>
#include<stdlib.h>



typedef struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int no);
void DisplayF(PNODE First, PNODE Last);
void DisplayB(PNODE First,PNODE Last);
int Count(PNODE First, PNODE Last);
void InsertLast(PPNODE First, PPNODE Last, int no);
void DeleteFirst(PPNODE First, PPNODE Last);
void DeleteLast(PPNODE First, PPNODE Last);
void InsertAtPos(PPNODE First, PPNODE Last, int no, int iPos);
void DeleteAtPos(PPNODE First, PPNODE Last, int iPos);
int main()
{
	int iRet = 0;
	PNODE Head = NULL;
	PNODE Tail = NULL;


	InsertFirst(&Head,&Tail,70);
	InsertFirst(&Head,&Tail,60);
	InsertFirst(&Head,&Tail,50);
	InsertFirst(&Head,&Tail,40);
	InsertFirst(&Head,&Tail,30);
	InsertFirst(&Head,&Tail,20);
	InsertFirst(&Head,&Tail,10);

	DisplayF(Head,Tail);

	DisplayB(Head,Tail);

	iRet = Count(Head,Tail);

	printf("%d\n",iRet);

	InsertLast(&Head,&Tail,80);

	DisplayF(Head,Tail);

	DeleteFirst(&Head,&Tail);

	DisplayF(Head,Tail);

	DeleteLast(&Head,&Tail);

	DisplayF(Head,Tail);

	InsertAtPos(&Head,&Tail,35,3);

	DisplayF(Head,Tail);

	DeleteAtPos(&Head,&Tail,6);

	DisplayF(Head,Tail);

	return 0;
}
void InsertFirst(PPNODE First, PPNODE Last, int no)
{
	PNODE newN = NULL;

	newN = (PNODE)malloc(sizeof(NODE));

	newN -> data = no;
	newN -> next = NULL;
	newN -> prev = NULL;

	if((*First==NULL) && (*Last==NULL))
	{
		*First = newN;
		*Last = newN;
		(*Last) -> next = *First;
		(*First) -> prev = *Last;
	}
	else
	{
		newN -> next = *First;
		(*First) -> prev = newN;
		*First = newN;
		(*Last) -> next = *First;
		(*First) -> prev = *Last;
	}
}
void DisplayF(PNODE First, PNODE Last)
{
	if((First==NULL) || (Last==NULL))
	{
		return ;
	}
	do
	{
		printf("|%d|->",First -> data);
		First = First -> next;
	}while(First != Last -> next);
	printf("\n");
}
void DisplayB(PNODE First,PNODE Last)
{
	PNODE Temp = NULL;
	Temp = Last;
	do
	{
		printf("|%d|->",Temp -> data);
		Temp = Temp -> prev;
	}while(Temp!=Last);
	printf("\n");
}
int Count(PNODE First, PNODE Last)
{
	int iCnt = 0;

	do
	{
		iCnt++;
		First = First -> next;

	}while(First != Last -> next);
	return iCnt;
}
void InsertLast(PPNODE First, PPNODE Last, int no)
{
	PNODE newN = NULL;
	PNODE Temp = NULL;

	newN = (PNODE)malloc(sizeof(NODE));

	newN -> data = no;
	newN -> next = NULL;
	newN -> prev = NULL;

	if((*First==NULL) && (*Last==NULL))
	{
		*First = newN;
		*Last = newN;
		(*Last) -> next = *First;
		(*First) -> prev = *Last;
	}
	else
	{
		(*Last) -> next = newN;
		newN -> prev = *Last;
		newN -> next = *First;
		(*Last) = (*Last) -> next;
		(*Last) -> next = *First;
		(*First) -> prev = *Last;
//		(*First) -> prev = *First;/////////////////////////////////////
//		(*Last) = (*Last) -> next;
	}
}
void DeleteFirst(PPNODE First, PPNODE Last)
{
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
		PNODE Temp = *First;
		*First = (*First) -> next;
		free (Temp);
		(*First) -> prev = *Last;
		(*Last) -> next = *First;

	}
}
void DeleteLast(PPNODE First, PPNODE Last)
{
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
		PNODE Temp = *Last;
		*Last = (*Last) -> prev;
		free(Temp);
		(*First) -> prev = *Last;
		(*Last) -> next = *First;

	}
}
void InsertAtPos(PPNODE First, PPNODE Last, int no, int iPos)
{
	PNODE newN = NULL;
	newN = (PNODE)malloc(sizeof(NODE));

	newN -> data = no;
	newN -> next = NULL;
	int iSize = 0, iCnt = 0;

	iSize = Count(*First, *Last);

	if((iSize<1) && (iPos>iSize+1))
	{
		return ;
	}
	else if(iPos==1)
	{
		InsertFirst(First, Last, no);
	}
	else if(iPos==iSize+1)
	{
		InsertLast(First, Last, no);
	}
	else
	{
		PNODE Temp = *First;
		for(iCnt=1;iCnt<(iPos-1);iCnt++)
		{
			Temp = Temp -> next;
		}
		newN -> next = Temp -> next;
		Temp -> next -> prev = newN;
		Temp -> next = newN;
		newN -> prev = Temp;
	}
}
void DeleteAtPos(PPNODE First, PPNODE Last, int iPos)
{
	int iSize = 0, iCnt = 0;

	iSize = Count(*First,*Last);

	if((iPos<1) && (iPos>iSize))
	{
		return ;
	}
	else if(iPos==1)
	{
		DeleteFirst(First,Last);
	}
	else if(iPos==iSize)
	{
		DeleteLast(First,Last);
	}
	else
	{
		PNODE Temp = *First;
		PNODE Target = NULL;
		for(iCnt=1;iCnt<(iPos-1);iCnt++)
		{
			Temp = Temp -> next;
		}
		Target = Temp -> next;
		Temp -> next = Target -> next;
		Target -> next -> prev = Temp;
		free(Target);

	}
}
