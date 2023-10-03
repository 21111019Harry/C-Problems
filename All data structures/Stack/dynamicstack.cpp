#include<iostream>


using namespace std;

typedef struct Node
{
	int data;
	struct Node *next;
}NODE , *PNODE;

class Stack
{
	private:
		PNODE Head;
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
void Stack::Push(int no)//like InsertFirst
{
	PNODE newN = NULL;
	newN = new NODE;//dynamic memory allocation

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
int Stack::Pop()//like DeleteLast
{
	if(Head==NULL)
	{
		cout<<"Stack is Empty:-";
		return 0;
	}
	else
	{
		PNODE Temp = Head;
		int no = Head -> data;//ith aapn fkt data kadhun ghetla no madhe
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
	Stack obj2i;
	int iRet = 0;

	obj1.Push(11);
	obj1.Push(21);
	obj1.Push(51);
	obj1.Display();

	obj1.Pop();

	cout<<"\n";
	obj1.Display();

	obj2.Push('A');
	obj2.Display();

	return 0;
}
