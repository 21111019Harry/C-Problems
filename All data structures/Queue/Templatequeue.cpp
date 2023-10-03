#include<iostream>

using namespace std;

template<class T>
struct Node
{
	T data;
	struct Node *next;
};

template<class T>
class Queue
{
	private:
		struct Node<T> *Head;
		struct Node<T> *Tail;
	public:
		Queue();
		void Enqueue(T no);//ith aapn int no lihaycho tr aata ith kahihi yeu shkt int,char,float bcz he template ahe
		T Dequeue();
		void Display();
};
template<class T>
Queue<T>::Queue()
{
	Head = NULL;
	Tail = NULL;
}
template<class T>
void Queue<T>::Enqueue(T no)//like InsertLast
{
	struct Node<T> *newN = NULL;
//	newN = (struct Node<T>*)malloc(sizeof(struct Node<T>));//newN = new NODE;//he c madhl dynamic memory allocation ahe
	newN = new struct Node<T>;//he c++ madhl dynamic memory allocation ahe

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
template<class T>
T Queue<T>::Dequeue()//like DeleteFirst
{
	if((Head==NULL) && (Tail==NULL))
	{ 
		return -1;
	}
	if(Head==Tail)
	{
		T Temp;
		Temp = Head -> data;
		delete Head;
		Head = NULL;
		Tail = NULL;
		return Temp;
	}
	else
	{
		T Temp;
		Temp = Head -> data;
		struct Node<T> *ptr = NULL;
		ptr = Head;
		Head = Head -> next;
		delete ptr;
		return Temp;
	}
}
template<class T>
void Queue<T>::Display()
{
	struct Node<T> *Temp = Head;
	while(Temp!=NULL)
	{
		cout<<"|"<<Temp -> data<<"|-";
		Temp = Temp -> next;
	}
	cout<<"\n";
}
int main()
{
	Queue <int>obj1;
	Queue <char>obj2;
	int iRet = 0;

	obj1.Enqueue(21);
	obj1.Enqueue(41);
	obj1.Enqueue(51);
	obj1.Display();

	obj2.Enqueue('A');
	obj2.Enqueue('B');
	obj2.Enqueue('C');

	iRet = obj1.Dequeue();
	cout<<"\n"<<iRet<<"\n";

	obj1.Display();
	cout<<"\n";

	cout<<"|"<<obj2.Dequeue()<<"|\n";

	obj2.Enqueue('P');
	obj2.Enqueue('Q');
	obj2.Enqueue('R');

	obj2.Display();
	return 0;
}
