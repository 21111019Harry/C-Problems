#include<iostream>

using namespace std;

typedef struct Node
{
	int data;
	struct Node *next;
}NODE, *PNODE;

class Stack
{
	private:
		PNODE Head ;
	public:
		Stack();
		void Push(int no);
		int Pop();
		void Display();
};
Stack::Stack()
{
	Head = NULL;
}
void Stack::Push(int no)
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
}
int Stack::Pop()
{
	if(Head==NULL)
	{
		cout<<"Stack is Empty:-";
		return 0;
	}
	else
	{
		PNODE Temp = Head;
		int no = Head -> data;
		Head = Head -> next;
		delete Temp;
		return no;
	}
}
void Stack::Display()
{
	PNODE Temp = Head;

	while(Temp!=NULL)
	{
		cout<<"|"<<Temp -> data<<"|\n";
		Temp = Temp -> next;
	}
}
int main()
{
	Stack obj1;
	
	obj1.Push(30);
	obj1.Push(20);
	obj1.Push(10);

	obj1.Display();

//	obj1.Pop();
	cout<<obj1.Pop()<<"\n";

	obj1.Display();

	return 0;
}
