#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node
{
	int data;
	struct Node * next;
};
typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE First, int no);
int EvenAddition(PNODE First);
int Count(PNODE First);
void EvenDisplay(PNODE First);
int Frequency(PNODE First, int iNo);
int SumElement(PNODE First);
int main()
{
	PNODE Head = NULL;

	int iRet = 0, iCount = 0, iValue = 0, iFreq = 0, iAdd = 0;

	printf("Enter the NO:-");
	scanf("%d",&iValue);

//	InsertFirst(&Head,21);
	InsertFirst(&Head,100);
	InsertFirst(&Head,50);
	InsertFirst(&Head,21);
	InsertFirst(&Head,11);
//	InsertFirst(&Head,21);

	iRet = EvenAddition(Head);

	printf("Even Data Addition is:-%d\n",iRet);

	EvenDisplay(Head);

	iCount = Count(Head);

	printf("In Linked list the Node is:- %d\n",iCount);

	iFreq = Frequency(Head,iValue);

	printf("Frequency of %d is:-%d\n",iValue,iFreq);

	iAdd = SumElement(Head);

	printf("Addition of linked list is:-%d",iAdd);

	return 0;
}
void InsertFirst(PPNODE First,int no)
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
int EvenAddition(PNODE First)
{
	int EvenSum = 0;

	if(First==NULL)
	{
		return -1;
	}
	else
	{
		while(First!=NULL)
		{
			if((First -> data%2)==0)
			{
				EvenSum = EvenSum + First -> data;
			}
			First = First -> next;
		}
	}
	return EvenSum;
}
void EvenDisplay(PNODE First)
{
	while(First!=NULL)
	{
		if((First -> data%2)==0)
		{
		printf("|%d|->",First -> data);
	//	First = First -> next;
		}
		First = First -> next;
	}
	printf("\n");
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
int Frequency(PNODE First, int iNo)
{
	int iCnt = 0;
	if(First==NULL)
	{
		return 0;
	}
	else
	{
		while(First!=NULL)
		{
			if(First -> data==iNo)
			{
				iCnt++;
			}
			First = First -> next;
		}
	}
	return iCnt;
}
int SumElement(PNODE First)
{
	int iAdd = 0;

	while(First!=NULL)
	{
		iAdd = iAdd + First -> data;
		First = First -> next;
	}
	return iAdd;
}

