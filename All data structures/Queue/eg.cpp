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
};
Queue::Queue()
{
	Head = NULL;
	Tail = NULL;
}
void Queue::Enqueue(int no)
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
int Queue::Dequeue()
{
	if((Head==NULL) && (Tail==NULL))
	{
		cout<<"Queue is Empty:";
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
	cout<<"\n";
}
int main()
{
	Queue obj1;
	obj1.Enqueue(10);
	obj1.Enqueue(20);
	obj1.Enqueue(30);

	obj1.Display();

	cout<<obj1.Dequeue()<<"\n";

	obj1.Display();

	return 0;
}
