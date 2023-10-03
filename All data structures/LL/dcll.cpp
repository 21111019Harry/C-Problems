#include<iostream>


using namespace std;


typedef struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
}NODE, *PNODE;

class DoublyCLL
{
	private:
		PNODE Head;
		PNODE Tail;
		int iSize;
	public:
		DoublyCLL();
		~DoublyCLL();
		void InsertFirst(int no);
		void InsertLast(int no);
		void InsertAtPos(int no, int iPos);
		void DisplayF();
		void DisplayB();
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int no);
		int Count();
};
DoublyCLL::DoublyCLL()
{
	Head = NULL;
	Tail = NULL;
	iSize = 0;
}
DoublyCLL::~DoublyCLL()
{
	PNODE Temp = Head;

	if(Head!=NULL)
	{
		for(int i=1;i<=iSize;i++)	
		{
			Temp = Head;
			Head = Head -> next;
			delete Temp;
		}
	}
}
void DoublyCLL::InsertFirst(int no)
{
	PNODE newN = NULL;
	newN = new NODE;	


	newN -> data = no;
	newN -> next = NULL;
	newN -> prev = NULL;

	if((Head==NULL) && (Tail==NULL))
	{
		Head = newN;
		Tail = newN;
		Tail -> next = Head;
		Head -> prev = Tail;
	}
	else
	{
		newN -> next = Head;
		Head -> prev = newN;
		Head = newN;
		Tail -> next = Head;
		Head -> prev = Tail;
	}
	iSize++;
}
void DoublyCLL::DisplayF()
{
	PNODE Temp = Head;

/*	for(int i=1;i<=iSize;i++)
	{
		cout<<"|"<<Temp -> data<<"|->";
		Temp = Temp -> next;
	}
	cout<<"\n";*/
	do
	{
		cout<<"|"<<Temp -> data<<"|->";
		Temp = Temp -> next;
	}while(Temp != Tail -> next); 
	cout<<"\n";
}
void DoublyCLL::DisplayB()
{
	PNODE Temp = Tail;

/*	for(int i=1;i<=iSize;i++)
	{
		cout<<"|"<<Temp -> data<<"|->";
		Temp = Temp -> prev;
	}
	cout<<"\n";*/
	do
	{
		cout<<"|"<<Temp -> data<<"|->";
		Temp = Temp -> prev;
	}while(Temp != Head -> prev);
	cout<<"\n"; 
}
int DoublyCLL::Count()
{
	return iSize;
}
void DoublyCLL::InsertLast(int no)
{
	PNODE newN = NULL;
	newN = new NODE;

	newN -> data = no;
	newN -> next = NULL;
	newN -> prev = NULL;

	if((Head==NULL) && (Tail==NULL))
	{
		Head = newN;
		Tail = newN;
		Tail -> next = Head;
		Head -> prev = Tail;
	}
	else
	{
	
		Tail -> next = newN;
		newN -> prev = Tail;
		Tail = newN;
		Tail -> next = Head;
		Head -> prev = Tail;
	}
	iSize++;
}
void DoublyCLL::InsertAtPos(int no, int iPos)
{
	PNODE Temp = NULL;
	PNODE newN = NULL;
	newN = new NODE;

	newN -> data = no;
	newN -> next = NULL;
	newN -> prev = NULL;

	if((iPos<1) || (iPos>iSize+1))
	{
		return ;
	}
	else if(iPos==1)
	{
		InsertFirst(no);
	}
	else if(iPos==iSize+1)
	{
		InsertLast(no);
	}
	else
	{
		Temp = Head;

		for(int iCnt=1;iCnt<(iPos-1);iCnt++)
		{
			Temp = Temp -> next;
		}
		newN -> next = Temp -> next;
		Temp -> next -> prev = newN;
		newN -> prev = Temp;
		Temp -> next = newN;
		iSize++;//he ith aapn else madhe ghetl bcz vrche 2 else if InsertFirst,InsertLast ya function madhe iSize++ kely tr ith te prt iSize++ krtil mhnje te 2 ne increament hoil mhnun te aapn else madhe takl ahe
	}
}
void DoublyCLL::DeleteFirst()
{
	if((Head==NULL) && (Tail==NULL))
	{
		return ;
	}
	else if(Head==Tail)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		Head = Head -> next;
		delete Head -> prev;	
		Tail -> next = Head;
		Head -> prev = Tail;
	}
	iSize--;
}
void DoublyCLL::DeleteLast()
{
	if((Head==NULL) && (Tail==NULL))
	{
		return ;
	}
	else if(Head==Tail)
	{
		delete Tail;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		Tail = Tail -> prev;
		delete Tail -> next;
		Tail -> next = Head;
		Head -> prev = Tail;

	}
	iSize--;
}
void DoublyCLL::DeleteAtPos(int iPos)
{
	PNODE Temp = NULL;

	if((iPos<1) || (iPos>iSize))
	{
		return ;
	}
	else if(iPos==1)
	{
		DeleteFirst();
	}
	else if(iPos==iSize)
	{
		DeleteLast();
	}
	else
	{
		Temp = Head;
		for(int iCnt=1;iCnt<(iPos-1);iCnt++)
		{
			Temp = Temp -> next;
		}
		Temp -> next = Temp -> next -> next;
		delete Temp -> next -> prev;
		Temp -> next -> prev = Temp;
		iSize--;
	}
}
int main()
{
	DoublyCLL obj1;
	DoublyCLL obj2;   
	
	obj1.InsertFirst(30);
	obj1.InsertFirst(20);
	obj1.InsertFirst(10);

	obj1.DisplayF();

	cout<<"\nnumber of nodes:-"<<obj1.Count()<<"\n";

	obj1.InsertLast(40);
	obj1.InsertLast(50);
	obj1.InsertLast(60);

	obj1.DisplayF();

	obj1.DisplayB();

	obj2.InsertFirst(300);
	obj2.InsertFirst(200);
	obj2.InsertFirst(100);

	obj2.DisplayF();
	cout<<"\nnumber of nodes:-"<<obj2.Count()<<"\n";

	obj2.InsertLast(400);
	obj2.InsertLast(500);

	obj2.DisplayF();
	obj2.DisplayB();

	obj1.InsertAtPos(35,4);

	obj1.DisplayF();

	obj1.DeleteFirst();

	obj1.DisplayF();

	obj1.DeleteLast();

	obj1.DisplayF();

	obj2.DeleteAtPos(3);

	obj2.DisplayF();



	return 0;
}
