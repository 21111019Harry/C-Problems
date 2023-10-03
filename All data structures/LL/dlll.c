#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>



typedef struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;

}NODE ,*PNODE, **PPNODE;

void InsertFirst(PPNODE First, int no);
void DisplayF(PNODE First);
void DisplayRecursive(PNODE First);
void DisplayB(PNODE First);
void InsertLast(PPNODE First, int no);
int Count(PNODE First);
void DeleteFirst(PPNODE First);
void DeleteLast(PPNODE First);
void InsertAtPos(PPNODE First, int no, int iPos);
void DeleteAtPos(PPNODE First, int iPos);
int main()
{
	int iRet = 0;
	PNODE Head = NULL;

	InsertFirst(&Head,51);
	InsertFirst(&Head,21);
	InsertFirst(&Head,11);

	DisplayF(Head);

	InsertLast(&Head,111);
	InsertLast(&Head,121);
	InsertLast(&Head,151);
	InsertLast(&Head,161);
	InsertLast(&Head,171);
	InsertLast(&Head,181);

	DisplayF(Head);

	DisplayRecursive(Head);
	printf("\n");

	iRet = Count(Head);

	printf("%d\n",iRet);

	DeleteFirst(&Head);

	DisplayF(Head);

	DisplayB(Head);

	DeleteFirst(&Head);

	DisplayF(Head);

	DeleteLast(&Head);

	DisplayF(Head);

	InsertAtPos(&Head,152,5);

	DisplayF(Head);

	DeleteAtPos(&Head,6);

	DisplayF(Head);

	return 0;
}
void InsertFirst(PPNODE First, int no)
{
	PNODE newN = NULL;

	newN = (PNODE)malloc(sizeof(NODE));

	newN -> data = no;
	newN -> next = NULL;
	newN -> prev = NULL;

	if(*First==NULL)
	{
		*First = newN;
		newN -> prev = NULL;
	}
	else
	{
		newN -> next = *First;
		(*First) -> prev = newN;
		*First = newN;
	}

}
void DisplayF(PNODE First)
{
	while(First!=NULL)
	{
		printf("|%d|->",First -> data);
		First = First -> next;
	}
	printf("\n");
}
void DisplayRecursive(PNODE First)
{
	if(First!=NULL)
	{
		printf("|%d|->",First -> data);
		First = First -> next;
		DisplayRecursive(First);
	}
}
void DisplayB(PNODE First)
{
	PNODE Temp = First;
	while(Temp -> next != NULL)
	{
		Temp = Temp -> next;
	}
	do
	{
		printf("|%d|->",Temp -> data);
		Temp = Temp -> prev;
	}while(Temp!=NULL);
	printf("\n");
}
void InsertLast(PPNODE First, int no)
{
	PNODE newN = NULL;
	PNODE Temp = NULL;

	newN = (PNODE)malloc(sizeof(NODE));

	newN -> data = no;
	newN -> next = NULL;
	newN -> prev = NULL;

	if(*First==NULL)
	{
		*First = newN;
		newN -> prev = NULL;
	}
	else
	{
		Temp = *First;

		while(Temp -> next != NULL)
		{
			Temp = Temp -> next;
		}
		Temp -> next = newN;
		newN -> prev = Temp;
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
void DeleteFirst(PPNODE First)
{
	PNODE Temp = NULL;

	if(*First==NULL)
	{
		return ;
	}
	else   // he aapn Temp variable use krun kel ahe.
	{
		Temp = *First;
		*First = (*First) -> next;
		(*First) -> prev = NULL;
		free(Temp);

	/*	*First = (*First) -> next; //aaon deleteLast he Without Temp variable pn kru shkto.
		free((*First) -> prev);
		*First -> prev = NULL;*/
	}
}
void DeleteLast(PPNODE First)
{
	PNODE Temp = NULL;

	if(*First==NULL)
	{
		return ;
	}
	else
	{
		Temp = *First;

		while(Temp -> next -> next!=NULL)// aapn ya loop mule second last node la thambun tyahvya next node la delete kel
		{
			Temp = Temp -> next;
		}
		free(Temp -> next);
		Temp -> next = NULL;

/*		while(Temp -> next!=NULL)//aapn ya loop mule direct last node thambun tyala delete kel
		{
			Temp = Temp -> next;
		}
		Temp -> prev -> next = NULL;
		free(Temp);*/
	}

}
void InsertAtPos(PPNODE First, int no, int iPos)
{	
	PNODE newN = NULL;
	PNODE Temp = NULL;
	int iSize = 0, iCnt = 0;

	iSize = Count(*First);

	if((iPos<1) || (iPos>iSize+1))	
	{
		return ;
	}
	else if(iPos==1)
	{
		InsertFirst(First,no);
	}
	else if(iPos==iSize+1)
	{
		InsertLast(First,no);
	}
	else
	{

		Temp = *First;

		newN = (PNODE)malloc(sizeof(NODE));

		newN -> data = no;
		newN -> next = NULL;
		newN -> prev = NULL;

		for(iCnt=1;iCnt<iPos;iCnt++)
		{
			Temp = Temp -> next;
		}
		Temp -> prev ->next = newN;
		newN -> prev = Temp -> prev;
		newN -> next = Temp;
		Temp -> prev = newN;

       	/*	for(iCnt=1;iCnt<iPos;iCnt++)
		{
			Temp = Temp -> next;
		}
		newN -> next = Temp -> next;
		Temp -> next -> prev = newN;
		newN -> next = newN -> prev;*/

	}
}
void DeleteAtPos(PPNODE First, int iPos)
{
	PNODE Temp = NULL;
	int iSize = 0;
	int iCnt = 0;

	iSize = Count(*First);
	
	if((iPos<1) || (iPos>iSize))
	{
		return ;
	}
	else if(iPos==1)
	{
		DeleteFirst(First);
	}
	else if(iPos==iSize)
	{
		DeleteLast(First);
	}
	else
	{
		Temp = *First;

		for(iCnt=1;iCnt<iPos-1;iCnt++)
		{
			Temp = Temp -> next;
		}
		Temp -> next = Temp -> next -> next;
		free(Temp -> next -> prev);
		Temp -> next -> prev = Temp;//NULL;
	}

}
