//everty sheduler is inernally implimented as queue(process scheduler).
//

#include<iostream>

using namespace std;

typedef struct Node
{
	int data;
	struct Node *next;
}NODE, *PNODE;

class Queue
{
	private:
		PNODE Head;
		PNODE Tail;
	public:
		Queue();
		void Enqueue(int no);
		int Dequeue();
		void Display();
		int Count();
};
Queue::Queue()
{
	Head = NULL;
	Tail = NULL;
}
void Queue::Enqueue(int no)//like InsertLast
{
	PNODE newN = NULL;
	newN = new NODE;
	
	newN -> data = no;
	newN -> next = NULL;

	if((Head==NULL) && (Tail==NULL))
	{
		Head = newN;
		Tail = newN;
	}
	else
	{
		Tail -> next = newN;
		Tail = Tail -> next;		
	}
}
int Queue::Dequeue()//like DeleteFirst
{
	if((Head==NULL) && (Tail==NULL))
	{
		return 0;
	}
	if(Head==Tail)
	{
		int no = Head -> data;
		delete Head;
		Head = NULL;
		Tail = NULL;
		return no;

	}
	else
	{
		int no = Head -> data;
		PNODE ptr = NULL;
		ptr = Head;
		Head = Head -> next;
		delete ptr;
		return no;
	}
}
void Queue::Display()
{
	PNODE Temp = Head;
	while(Temp!=NULL)
	{
		cout<<"|"<<Temp -> data<<"|-";
		Temp = Temp -> next;
	}
}
int Queue::Count()
{
	int iCnt = 0;
	PNODE Temp = Head;
	while(Temp!=NULL)
	{
		iCnt++;
		Temp = Temp -> next;
	}
	return iCnt;
}
int main()
{
	Queue obj1;
	Queue obj2;
	int iRet = 0;

	obj1.Enqueue(11);
	obj1.Enqueue(21);
	obj1.Enqueue(51);

	obj1.Display();

	obj1.Dequeue();

	cout<<"\n";
	obj1.Display();

	iRet = obj1.Count();

	cout<<"\n"<<iRet<<"\n";
	return 0;
}
