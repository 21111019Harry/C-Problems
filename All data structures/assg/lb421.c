#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


struct Node
{
	int data;
	struct Node* next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE First, int no);
void Display(PNODE First);
int SearchFirstOcc(PNODE First, int no);
int Count(PNODE First);
int SearchLastOcc(PNODE First, int no);
int Maximum(PNODE First);
int main()
{
	int iRet = 0;
	int iCnt = 0;
	int iRet1 = 0;
	int iAns = 0;

	PNODE Head = NULL;

	InsertFirst(&Head,60);
	InsertFirst(&Head,50);
	InsertFirst(&Head,40);
	InsertFirst(&Head,90);
	InsertFirst(&Head,20);
	InsertFirst(&Head,10);

	Display(Head);

	iCnt = Count(Head);

	printf("%d\n",iCnt);

	iRet = SearchFirstOcc(Head,90);
	
	if(iRet==0)
	{
		printf("Invalid Input:-\n");
	}
	else
	{
		printf("%d\n",iRet);
	}

/*	iRet1 = SearchLastOcc(Head,50);

	if(iRet1==0)
	{
		printf("Invalid Input:-\n");
	}
	else
	{
		printf("%d\n",iRet1);
	}*/

	iAns = Maximum(Head);

	printf("%d",iAns);

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
int SearchFirstOcc(PNODE First, int no)
{
	int iCnt = 0;

	while(First!=NULL)
	{
		iCnt++;

		if(First -> data == no)
		{
			return iCnt;
		}
		First = First -> next;
	}
}
/*int SearchLastOcc(PNODE First, int no)
{
	int iSize = 0;
	int iCnt = 0;

	iSize = Count(First);

	for(iCnt=iSize;iCnt>=1;iCnt--)
	{
		if((First -> next) == no)
		{
			return iCnt;
		}
	}

}*/
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
int Maximum(PNODE First)
{
	int iMax = 0;
	while(First!=NULL)
	{
		if((First -> data) > (iMax))
		{
			iMax = First -> data;
		}
		First = First -> next;
	}
	return iMax;
}














