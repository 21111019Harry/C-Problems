//SLLL vs SCLL ya dhoghanmadhun konti linked list best ahe tr ans ahe jevha period travel asel tr SCLL use kra aani jr ekdach jaych asel tr SLLL use kra.

//ya SCLL madhe InsertLast function madhe loop lagnar nahi ki jo SLLL madhe lagt hota ith nahi lagnar karn aapnlyakde diract tail cha mhnje linked list chya last node cha address ahe aata direct Last -> next = newN as takl ki last node insert hoil.mg nantr Last = Last -> next yachyane last node pudh jail.aani shivti fkt Last -> next = First he takaych karn aapn shevtcha node insert kela aani ya statment mule last node madhe first node ch address takla.
//ajun DeleteLast function la loop lagnar ahe karn DeleteLast la aaplyala second last node la thambav lagt aani tithun tyacha next node delete krava lagto mhnun ith aaplyala loop lagel Temp -> next -> next asa.
//aani aapn SLLL madhe while loop use krt hoto karn tith terminating condi hoti First!=NULL hi.aata SCLL madhe aaplyala do while loop use krava lagnar ahe karn ith terminating condi nahi ye.


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct Node //ith aapn direct structure declear kelya kelya tyala typedef kely.
{
	int data;
	struct Node *next;

}NODE, * PNODE, ** PPNODE; //he internally typedef struct Node NODE asech jat *PNODE,**PPNODE he pn tsch ahe

/*
struct Node     //he same ahe previous code sarkh.
{
	int data;
	struct Node *next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;
*/

void InsertFirst(PPNODE First, PPNODE Last, int no);
void InsertLast(PPNODE First, PPNODE Last, int no);
void DisplayF(PNODE First, PNODE Last);
void DisplayB(PNODE First, PNODE Last);
int Count(PNODE First, PNODE Last);
void DeleteFirst(PPNODE First, PPNODE Last);
void DeleteLast(PPNODE First, PPNODE Last);
void InsertAtPos(PPNODE First, PPNODE Last, int no, int iPos);
void DeleteAtPos(PPNODE First, PPNODE Last, int no);
int main()
{
	PNODE Head = NULL;
	PNODE Tail = NULL;// he slll madhe navt bcz tith tail pointer navta tith last node madhe null hot
	int iRet = 0;

	InsertFirst(&Head,&Tail,51);//&Tail he slll madhe navat
	InsertFirst(&Head,&Tail,21);
	InsertFirst(&Head,&Tail,11);

	InsertLast(&Head,&Tail,101);
	InsertLast(&Head,&Tail,111);
	InsertLast(&Head,&Tail,121);

	DisplayF(Head,Tail);

//	DisplayB(Head,Tail);

	iRet = Count(Head,Tail);

	printf("%d\n",iRet);

	DeleteFirst(&Head,&Tail);

	DisplayF(Head,Tail);

	DeleteLast(&Head,&Tail);

	DisplayF(Head,Tail);

	InsertAtPos(&Head,&Tail,52,3);

	DisplayF(Head,Tail);

	DeleteAtPos(&Head,&Tail,4);

	DisplayF(Head,Tail);

	return 0;
}
void InsertFirst(PPNODE First,PPNODE Last, int no)
{
	PNODE newN = NULL;

	newN = (PNODE)malloc(sizeof(NODE));

	newN -> data = no;
	newN -> next = NULL;
	
	if((*First==NULL) && (*Last==NULL))//jevha linked list empty asel tevha ya if madhe entry hoil
	{
		*First = newN;
		*Last = newN;
		(*Last) -> next = *First; //he statement sglya thikani lagel bcz sgli linked zalyavr linked list chya last node madhe first node cha address takava lagel bcz hi SCLL ahe mhnun he SLLL madhe navt.tr ya statment la aapn direct comman kadhl tri chalel bcz he if,else if,else... sglyana lagnar ahe.sglya function la.Insert,Delete chya.
	}
	else  //else madhe aalo mhnje linked list madhe ektri node ahe
	{
		newN -> next = *First;
		*First = newN;
		(*Last) -> next = *First;
	}
//	(*Last) -> next = *First;//he te statement ahe ki je aapn comman pn lihu shkto
}
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
		(*Last) -> next = *First;//he aapn comman lihu shkto
	}
	else
	{
		(*Last) -> next = newN;
		*Last = (*Last) -> next;//ith he pn lihil tri chalel *Last = newN;
		(*Last) -> next = *First;
	}
}
void DisplayF(PNODE First, PNODE Last)
{
//	while(First!=Last)//ith while ha loop chalnar nahi karn ya while loop mule linked list cha last node access nahi zala karn to last node pryant jatoy ani baher padtoy aani tr linked list madhe 1 node asel tr to aatch jat nahiye tr ith do while loop lagel bcz do while loop mhnto ki tumhi aadhi aat ya aani mg to condi check krto.
//	mhnje eg 5 node ahet tr to 1st la direct aata yeu deto mg loop chya khali check krto ki First!=Last->next hi condi true asli tr to do kde jato mg same tsch 2nd la to direct aata yeu deto aani mg loop chya khali condi chek krto ki First!=Last->next asch to...5th la pn krto aani 5th la pn aat yru deto aani mg loop chya khali condi check krto ki First!=Last->next mg hi condi false zali ki ha ithunch loop chya baher jato.
//aaplyala do while loop lihaycha asel tr tyachya aadhi filter lihavch lagel.bcz jevha linked list empty asel tr ha tya NULL la aat yeu dyil. mg check krel while chi condi mhnun do while loop cha aadhi filter lihavch lagt.

	if((First==NULL) && (Last==NULL))//he filter linked list empty asel tevha use hoil.
	{
		return ;
	}
	do          //ha loop linked list madhe 1 or more node astil tevha use hoil
	{
		printf("|%d|->",First -> data);
		First = First -> next;
	}while(First != Last -> next);
	printf("\n");

}
int Count(PNODE First, PNODE Last)
{
	int iCnt = 0;

	if((First==NULL) && (Last==NULL))//he filter linked list empty asel tevha use hoil
	{
		return iCnt;
	}
	do            //ha loop linked list madhe 1 or more node astil tevha use hoil
	{
		iCnt++;
		First = First -> next;
	}while(First != Last -> next);//ith he pn lihil tri chalel(Last -> next!= First)
	return iCnt;
	
}
void DeleteFirst(PPNODE First, PPNODE Last)
{
	PNODE Temp = NULL;

	if((*First==NULL) && (*Last==NULL))// when linked is empty
	{
		return ;
	}
	else if((*First==*Last))// when single node
	{
		free(*First); //ith free(*Last) as pn lihu shkto
		*First = *Last = NULL;
	}
	else        // when more than 1 node
	{
		//aapn he without Temp variable kely ts Temp use krun pn krta yet te aapn khali dil ahe
	/*	*First = (*First) -> next;
		free (*Last) -> next;
		(*Last) -> next = *First;
		*/
		Temp = *First;
		*First = (*First) -> next;
		(*Last) -> next = *First;
		free(Temp);
	}
}
void DeleteLast(PPNODE First, PPNODE Last)
{
	PNODE Temp = NULL;

	if((*First==NULL) && (*Last==NULL))
	{
		return ;
	}
	else if(*First==*Last)
	{
		free(*First);// free(*Last)
		*First = *Last = NULL;
	}
	else
	{
		Temp = *First;

		while(Temp -> next != *Last)
		{
			Temp = Temp -> next;
		}
		free(Temp -> next);// ith aapn free(*Last); as pn lihu shkto
		*Last = Temp;
		(*Last) -> next = *First;
	}
}
void InsertAtPos(PPNODE First, PPNODE Last, int no, int iPos)
{
	int iSize = 0, i = 0;
	PNODE Temp = NULL;

	iSize = Count(*First, *Last);
	
	if((iPos<1) || (iPos>iSize+1))//Invalid position
	{
		return ;
	}
	else if((iPos==1))
	{
		InsertFirst(First,Last,no);//ith aapn direct InsertFirst function pn lihu shkto
	}
	else if(iPos==iSize+1)
	{
		InsertLast(First,Last,no);//ith aapn direct InsertLast Function pn lihu shkto
	}
	else
	{
		PNODE newN = NULL;
		Temp = *First;
		
		newN = (PNODE)malloc(sizeof(NODE));

		newN -> data = no;
		newN -> next = NULL;

		for(i=1;i<iPos-1;i++)
		{
			Temp = Temp -> next;
		}
		newN -> next = Temp -> next;
		Temp -> next = newN;
	}
}
void DeleteAtPos(PPNODE First, PPNODE Last, int iPos)
{
	PNODE Temp = NULL;
	PNODE Target = NULL;
	int iSize = 0, i = 0;

	iSize = Count(*First,*Last);


	if((iPos<1) || (iPos>iSize))
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
		Temp = *First;

		for(i=1;i<iPos-1;i++)
		{
			Temp = Temp -> next;
		}
		Target = Temp -> next;
		Temp -> next = Target -> next;
		free(Target);
	}
}
