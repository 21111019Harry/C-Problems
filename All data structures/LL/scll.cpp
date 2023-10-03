#include<iostream>

using namespace std;

typedef struct Node
{
	int data;
	struct Node *next;
}NODE, *PNODE;

class SCLL
{
	private:
		PNODE Head;
		PNODE Tail;
		int iSize;
	public:
		SCLL();
		void InsertFirst(int no);
		void Display();
		void InsertLast(int no);
		void DeleteFirst();
		void DeleteLast();
		void InsertAtPos(int no, int iPos);
		void DeleteAtPos(int iPos);
};
SCLL::SCLL()
{
	Head = NULL;
	Tail = NULL;
	iSize = 0;
}
void SCLL::InsertFirst(int no)
{
	PNODE newN = NULL;
	newN = new NODE;

	newN -> data = no;
	newN -> next = NULL;

	if((Head==NULL) && (Tail==NULL))
	{
		Head = newN;
		Tail = newN;
		Tail -> next = Head;
	}
	else 
	{
		newN -> next = Head;
		Head = newN;
		Tail -> next = Head;
	}
	iSize++;
}
void SCLL::Display()
{
	PNODE Temp = Head;
	do
	{
		cout<<"|"<<Temp -> data<<"|->";
		Temp = Temp -> next;
	}while(Temp != Tail -> next);
	cout<<"\n";
}
void SCLL::InsertLast(int no)
{
	PNODE newN = NULL;
	newN = new NODE;

	newN -> data = no;
	newN -> next = NULL;

	if((Head==NULL) && (Tail==NULL))
	{
		Head = newN;
		Tail = newN;
		Tail -> next = Head;
	}
	else
	{
		Tail -> next = newN;
		Tail = Tail -> next;
		Tail -> next = Head;
	}
	iSize++;

}
void SCLL::DeleteFirst()
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
		PNODE Temp = Head;
		Head = Head -> next;
		Tail -> next = Head;
		delete Temp;
	}
	iSize--;
}
void SCLL::DeleteLast()
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
		PNODE Temp = Head;
		while(Temp -> next != Tail)	
		{
			Temp = Temp -> next;
		}
		delete Temp -> next;
		Tail = Temp;
		Tail -> next = Head;
	}
	iSize--;
}
void SCLL::InsertAtPos(int no, int iPos)
{
	PNODE newN = NULL;
	newN = new NODE;

	newN -> data = no;
	newN -> next = NULL;

	if((iSize<1) || (iPos>iSize+1))
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
		PNODE Temp = Head;
		for(int iCnt=1;iCnt<(iPos-1);iCnt++)
		{
			Temp = Temp -> next;
		}
		newN -> next = Temp -> next;
		Temp -> next = newN;
		iSize++;
	}
}
void SCLL::DeleteAtPos(int iPos)
{
	if((iSize<1) || (iPos>iSize))
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
		PNODE Temp = Head;
		PNODE Target = NULL;
		for(int iCnt=1;iCnt<(iPos-1);iCnt++)
		{
			Temp = Temp -> next;
		}
		Target = Temp -> next;
		Temp -> next = Target -> next;
		delete Target;
	}
}
int main()
{
	SCLL obj1;

	obj1.InsertFirst(30);
	obj1.InsertFirst(20);
	obj1.InsertFirst(10);

	obj1.Display();

	obj1.InsertLast(40);
	obj1.InsertLast(50);
	obj1.InsertLast(60);

	obj1.Display();

	obj1.DeleteFirst();

	obj1.Display();

	obj1.DeleteLast();

	obj1.Display();

	obj1.InsertAtPos(35,3);

	obj1.Display();

	obj1.DeleteAtPos(3);

	obj1.Display();

	return 0;

}
