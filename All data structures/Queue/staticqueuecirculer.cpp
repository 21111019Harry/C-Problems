#include<iostream>


using namespace std;

class CirQueue
{
	private:
		int *arr;
		int size;
		int Front;
		int Rear;
	public:
		CirQueue(int length);
		~CirQueue();
		void Enqueue(int no);
		int Dequeue();
		void Display();
};
CirQueue::CirQueue(int length)
{
	size = length;
	Front = -1;
	Rear = -1;
	arr = new int[size];
}
CirQueue::~CirQueue()
{
	delete []arr;
}
void CirQueue::Enqueue(int no)
{
	if((Rear==size-1 && (Front==0)) || (Rear==(Front==-1%(size-1))))
	{
		cout<<"Queue is Full:-\n";
		return ;
	}
	else if(Front==-1)
	{
		Front = 0;
		Rear = 0;
		arr[Rear] = no;
	}
	else if((Rear==size-1) && (Front!=0))
	{
		Rear = 0;
		arr[Rear] = no;
	}
	else
	{
		Rear++;
		arr[Rear];
	}
}
int CirQueue::Dequeue()
{
	int Temp = 0;
	if(Front==-1)
	{
		cout<<"Queue is Empty:-";
		return -1;
	}
	Temp = arr[Front];

	if(Front==Rear)
	{
		Front = -1;
		Rear = 1;	
	}
	else if(Front==size-1)
	{
		Front = 0;
	}
	else
	{
		Front++;
	}
	return Temp;
}
void CirQueue::Display()
{
	int i = 0;
	if(Front==-1)
	{
		cout<<"Queue is Empty:-";
		return ;
	}
	else
	{
		for(i=Front;i!=Rear;i++)
		{
			cout<<"|"<<arr[i]<<"|-";
		}
		cout<<"\n";
	}

}
int main()
{
	CirQueue obj1(5);

	obj1.Enqueue(10);
	obj1.Enqueue(20);
	obj1.Enqueue(30);
	obj1.Enqueue(40);
	obj1.Enqueue(50);

	obj1.Dequeue();

	obj1.Display();

}
