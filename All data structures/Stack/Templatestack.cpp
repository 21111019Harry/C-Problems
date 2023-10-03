#include<iostream>


using namespace std;

template<class T>
struct Node
{
	T data;
	struct Node *next;
};

template<class T>
class Stack
{
	private:
		struct Node<T> *Head;
	public:
		Stack();
		void Push(T no);
		T Pop();
		void Display();
};
template<class T>
Stack<T>::Stack()
{
	Head = NULL;
}
template<class T>
void Stack<T>::Push(T no)
{
	struct Node<T> *newN = NULL;
	newN = new struct Node<T>;

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
template<class T>
T Stack<T>::Pop()
{
	if(Head==NULL)
	{
		cout<<"Stack is Empty:";
		return 0;
	}
	else
	{
		struct Node<T> *Temp = Head;
		int no = Head -> data;
		Head = Head -> next;
		delete Temp;
		return no;
	}
}
template<class T>
void Stack<T>::Display()
{
	struct Node<T> *Temp = Head;
	while(Temp!=NULL)
	{
		cout<<"|"<<Temp -> data<<"|\n";
		Temp = Temp -> next;
	}
	cout<<"\n";
}
int main()
{
	Stack <int>obj1;
	Stack <char>obj2;

	obj1.Push(30);
	obj1.Push(20);
	obj1.Push(10);

	obj1.Display();

	obj1.Pop();

	obj1.Display();

	obj2.Push('C');
	obj2.Push('B');
	obj2.Push('A');

	obj2.Display();
	return 0;
}
