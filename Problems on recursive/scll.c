#include<stdio.h>
#include<malloc.h>

typedef struct Node
{
	int data;
	struct Node *next;
}NODE , *PNODE , **PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int no);
void Display(PNODE First, PNODE Last);
int count(PNODE Head, PNODE Tail);
void DisplayRev(PNODE First, PNODE Last);
void InsertLast(PPNODE First, PPNODE Last, int no);
void DeleteFirst(PPNODE First,PPNODE Last);
void DeleteLast(PPNODE First, PPNODE Last);
void InsertAtPos(PPNODE First, PPNODE Last, int no, int Pos);
int main()
{
	PNODE Head = NULL;
	PNODE Tail = NULL;
	int iRet = 0;

	InsertFirst(&Head,&Tail,30);
	InsertFirst(&Head,&Tail,20);
	InsertFirst(&Head,&Tail,10);

	Display(Head,Tail);

	printf("Reverse:\n");

//	DisplayRev(Head,Head);

	printf("Rev:\n");

	InsertLast(&Head,&Tail,40);
	InsertLast(&Head,&Tail,50);
	InsertLast(&Head,&Tail,60);

	Display(Head,Tail);

	iRet = count(Head,Tail);

	printf("%d\n",iRet);

	DeleteFirst(&Head,&Tail);

	Display(Head,Tail);

	DeleteLast(&Head,&Tail);

	Display(Head,Tail);

	InsertAtPos(&Head,&Tail,35,3);

	Display(Head,Tail);

	return 0;
}
void InsertFirst(PPNODE First, PPNODE Last, int no)
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
	do
	{
		printf("|%d|->",First -> data);
		First = First -> next;
	}while(First != Last -> next);
	printf("\n");
}
int count(PNODE First, PNODE Last)
{
	int iCnt = 0;
	do
	{
		iCnt++;
		First = First -> next;
	}while(First != Last -> next);
	return iCnt;
}
/*void DisplayRev(PNODE First, PNODE Last)
{
	if(First == Last -> next)
	{
		return;
	}
	DisplayRev(First,Last -> next);
	printf("|%d|->",Last -> data);

}*/
void InsertLast(PPNODE First, PPNODE Last, int no)
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
		(*Last) -> next = newN;
		*Last = newN;
		(*Last) -> next = *First;
	}
}
void DeleteFirst(PPNODE First, PPNODE Last)
{
	PNODE Temp = NULL;

	if((*First==NULL) && (*Last==NULL))
	{
		return;
	}
	else if(*First==*Last)
	{
		free(*First);
		*First = NULL;
		*Last = NULL;
	}
	else 
	{
		Temp = *First;
		*First = (*First) -> next;
		free(Temp);
	}
}
void DeleteLast(PPNODE First, PPNODE Last)
{
	PNODE Temp = NULL;
	if((*First==NULL) && (*Last==NULL))
	{
		return;
	}
	else if(*First==*Last)
	{
		free(*First);
		*First = NULL;
		*Last = NULL;
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
void InsertAtPos(PPNODE First, PPNODE Last, int no, int Pos)
{
	int iSize = 0, i = 0;
	PNODE Temp = NULL;
	PNODE newN = NULL;

	iSize = count(*First, *Last);

	if((Pos<1) || (Pos>iSize+1))
	{
		return ;
	}
	else if(Pos==1)
	{
		InsertFirst(First,Last,no);
	}
	else if(Pos==iSize+1)
	{
		InsertLast(First,Last,no);
	}
	else
	{
		Temp = *First;

		newN = (PNODE)malloc(sizeof(NODE));

		newN -> data = no;
		newN -> next = NULL;

		for(i=1;i<Pos-1;i++)
		{
			Temp = Temp -> next;
		}
		newN -> next = Temp -> next;
		Temp -> next = newN;
	}
}
