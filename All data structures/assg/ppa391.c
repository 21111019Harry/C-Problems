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
int Frequency(PNODE First, PNODE Last, int no);
int FirstOcc(PNODE First, PNODE Last, int no);
int main()
{
	int iRet = 0, iFrq = 0, iAns = 0;
	PNODE Head = NULL;
	PNODE Tail = NULL;

	InsertFirst(&Head,&Tail,30);
	InsertFirst(&Head,&Tail,40);
	InsertFirst(&Head,&Tail,30);
	InsertFirst(&Head,&Tail,20);
	InsertFirst(&Head,&Tail,30);

	Display(Head,Tail);

	iRet = Frequency(Head,Tail,30);

	printf("%d\n",iRet);

	iAns = FirstOcc(Head,Tail,70);

	if(iAns==0)
	{
		printf("Invalid Input");
	}
	else
	{
		printf("%d\n",iAns);
	}

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
	if((First==NULL) && (Last==NULL))
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
int Frequency(PNODE First, PNODE Last, int no)
{
	int iCnt = 0;
	if((First==NULL) && (Last==NULL))
	{
		return iCnt;
	}
	do
	{
		if(First -> data == no)
		{
			iCnt++;
		}
		First = First -> next;
	}while(First != Last -> next);
	return iCnt;
}
int FirstOcc(PNODE First, PNODE Last, int no)
{
	int iCnt = 0;
	if((First==NULL) && (Last==NULL))
	{
		return ;
	}
	do
	{
		iCnt++;

		if(First -> data == no)
		{
			return iCnt;
		}
		First = First -> next;
	}while(First != Last -> next);

}
