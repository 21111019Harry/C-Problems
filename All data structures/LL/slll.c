#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


struct Node
{
	int data;
	struct Node *next;
};

typedef struct Node NODE;//temporary name dil 'struct node' la 'Node' he.
typedef struct Node* PNODE;// -//-  'struct Node*' 'PNODE'
typedef struct Node** PPNODE;// -//- 'struct NODE**' 'PPNODE'

void InsertFirst(PPNODE First, int no);  
void Display(PNODE First);
void DisplayRecursive(PNODE First);
void DisplayReverse(PNODE First);
int Count(PNODE First);
void InsertLast(PPNODE First, int no);
void DeleteFirst(PPNODE First);
void DeleteLast(PPNODE First);
void InsertAtPosition(PPNODE First, int no ,int iPos);
void DeleteAtPosition(PPNODE First, int iPos);
int main()
{
	PNODE Head = NULL;//ha head ptr 1st node cha address hold krnar ahe but ith head ptr null la initilize ahe.

	int iRet = 0, iNew = 0;

	InsertFirst(&Head,30); 
	InsertFirst(&Head,20);
	InsertFirst(&Head,10); 

	Display(Head);

	iRet = Count(Head);

	printf("The Node in linked list is:- %d\n",iRet);

	InsertLast(&Head,40);
	InsertLast(&Head,50);
	InsertLast(&Head,60);

	Display(Head);

	DisplayRecursive(Head);

	printf("This is the Reverse LL using recursion:-\n");

	DisplayReverse(Head);

	printf("\n");

	DeleteFirst(&Head);

	Display(Head);

	DeleteLast(&Head);

	Display(Head);

	InsertAtPosition(&Head,10,1);
	InsertAtPosition(&Head,35,4);

	Display(Head);

	DeleteAtPosition(&Head,2);

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
		printf("|%d|->",First -> data);//printf("%d",*First);
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
	printf("\n");
}
void DisplayReverse(PNODE First)//display reverse linked list using recursion
{
	if(First==NULL)
	{
		return;
	}
	DisplayReverse(First->next);
	printf("|%d|->",First -> data);
}
int Count(PNODE First)
{
	int iCnt = 0;
	while(First!=NULL)//ha loop purn linked list travel krto aani direct last la thambto mhnje jeva loop thambel teva First madhe NULL asel.
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

		while(Temp -> next!=NULL)//ha loop purn linked list travel krto pn last node chya next madhe thambel tevha Temp chya next madhe NULL asel.
		{ 
			Temp = Temp -> next;
		//	*First = *First -> next;//error memory leak bcz aapn direct head madhli value change krtoy
		//	jr head madhli value change keli tr first node cha tithun jail mg purn linked listch jail
		//	mhnun aapn temp ha temperory pointer ghetlay.
		}
		Temp -> next = newN;
	}
}
void DeleteFirst(PPNODE First)
{
	//ith Temp ghen imp hot karn jr linked list madhe jr 2,3 node asle aani aaplyala first node dilete kraychay tr aapn direct *First=*First->next kelki to first node delete honar pn mg pudhchi linked list janar karn aapn head madhla address delete kela aata head madhe null ahe. mhnun aapn temparory Temp navacha pointer ghetlay.
	
	PNODE Temp = *First;

	if(Temp!=NULL) //(*First!=NULL)
	{
		*First = (*First) -> next;
		free(Temp);
	}
}
void DeleteLast(PPNODE First)
{
	PNODE Temp = NULL;

	if(*First==NULL)//control comes into this if condi if linked list is empty.
	{
		return ;
	}
	else if((*First) -> next==NULL)//if linked list contains single node then control comes into this else if.
	{
		free(*First);
		*First = NULL;
		//as it contains a single node we have to delete that node and store NULL in head pointer through 
		//first pointer. 
	}
	else   //if linked list contains more than one node then control comes into this else part
	{
		Temp = *First;
		while(Temp -> next -> next!=NULL)//ha loop purn linked list travel krto pn second last node la thambel aani Temp chya next chya next madhe NULL asel.
		{
			Temp = Temp -> next;
		}
		free(Temp -> next);
		Temp -> next = NULL;
	}
}
void InsertAtPosition(PPNODE First, int no, int iPos)
{
	PNODE newN = NULL;
	PNODE Temp = NULL;
	int iCnt = 0;

	int iSize = 0;

	iSize = Count(*First);

	if((iPos<1) || (iPos>iSize+1))//if position is invalid than we have to return from the function
	{
		return ;
	}
	if(iPos == 1)//if position is 1 than we have to call InsertFirst function 
	{
		InsertFirst(First, no);
	}
	else if(iPos == iSize+1)//if position is last position than we have to InsertLast
	{
		InsertLast(First, no);
	}
	else   //control comes into else part if position is in between first and last node
	{
		Temp = *First;

		newN = (PNODE)malloc(sizeof(NODE));

		newN -> data = no;
		newN -> next = NULL;
		
		for(iCnt=1;iCnt<iPos-1;iCnt++)//by using the for loop we travel the temp node till the previous position from the targeted node
		{
			Temp = Temp -> next;
		}
		newN -> next = Temp -> next;
		Temp -> next = newN;
	}
}
void DeleteAtPosition(PPNODE First, int iPos)
{
	PNODE Temp = NULL;
	PNODE Target = NULL;
	int iSize = 0;
	int iCnt = 0;

	iSize = Count(*First);


	if((iPos<1) || (iPos>iSize))//if the position is invalid then return from the function
	{
		return ;
	}
	if(iPos == 1)//if position is 1 then call DeleteFirst function
	{
		DeleteFirst(First);//ith aapn direct InsertFirst function pn lihu shkto
	}
	else if(iPos == iSize)//if position is last than call DeleteLast dunction
	{
		DeleteLast(First);//ith aapn direct InsertLast function pn lihu shkto
	}
	else   //if position is between 1st and last node then controlls comes into else part
	{
		Temp = *First;

		for(iCnt=1;iCnt<iPos-1;iCnt++)//by using the for loop we travel the inked list till the node which is the previous node from the Targeted node
		{
			Temp = Temp -> next;
		}
		Target = Temp -> next;
		Temp -> next = Target -> next;//Temp -> next = Temp -> next -> next;
		free(Target);

	}
}

//generalize linked list not a generic linked list ,aani java madhe Jacked array asto. 
