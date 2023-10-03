#include<iostream>


using namespace std;

typedef struct Node
{
	int data;
	struct Node* next;
}NODE, *PNODE;

class SinglyLL
{
	private:
		PNODE Head;
		int iSize;
	public:
		SinglyLL();
	//	~SinglyLL();
		void InsertFirst(int no);
		void InsertLast(int no);
		void DeleteFirst();
		void DeleteLast();
		void Display();
		void InsertAtPos(int no, int iPos);
		void DeleteAtPos(int iPos);
};
SinglyLL::SinglyLL()
{
	Head = NULL;
	iSize = 0;
}
void SinglyLL::InsertFirst(int no)
{
	PNODE newN = NULL;
	newN = new NODE;

	newN -> data = no;
	newN -> next = NULL;

	if(Head==NULL)	
	{
		Head = newN;
	}
	else 
	{
		newN -> next = Head;
		Head = newN;
	}
	iSize++;
}
void SinglyLL::InsertLast(int no)
{
	PNODE Temp = NULL;
	PNODE newN = NULL;
	newN = new NODE;

	newN -> data = no;
	newN -> next = NULL;

	if(Head==NULL)
	{
		Head = newN;
	}
	else
	{
		Temp = Head;

		while(Temp -> next!=NULL)
		{
			Temp = Temp -> next;
		}
		Temp -> next = newN;
	}
	iSize++;
}
void SinglyLL::Display()
{
	PNODE Temp = Head;

	while(Temp!=NULL)
	{
		cout<<"|"<<Temp -> data<<"|->";
		Temp = Temp -> next;
	}
	cout<<"\n";
}
void SinglyLL::DeleteFirst()
{
	if(Head==NULL)
	{
		return ;
	}
	else
	{
		PNODE Temp = Head;
		Head = Head -> next;
		delete Temp;
	}
	iSize--;
}
void SinglyLL::DeleteLast()
{
	if(Head==NULL)
	{
		return ;
	}
	else
	{
		PNODE Temp = Head;
		while(Temp -> next -> next != NULL)
		{
			Temp = Temp -> next;
		}
		delete Temp -> next;
		Temp -> next = NULL;
	}
	iSize--;
}
void SinglyLL::InsertAtPos(int no, int iPos)
{
	PNODE newN = NULL;
	newN = new NODE;

	newN -> data = no;
	newN -> next = NULL;

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
void SinglyLL::DeleteAtPos(int iPos)
{
	if((iPos<1) || (iPos>iSize+1))
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
		iSize--;
	}
}
int main()
{
	SinglyLL obj1;

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
