#include<iostream>


using namespace std;

template<class T>
class Queue
{
	private:
		T *arr;
		int Size;
		int Front;
		int Rear;
	public:
		Queue(int length);//paramatrized constructure
		~Queue();
		void Enqueue(T no);
		T Dequeue();
		void Display();
};
template<class T>
Queue<T>::Queue(int length)
{
	Size = length;//this -> length
	Front = -1;
	Rear = -1;
	arr = new T[Size];//he dynamic memory allocation ahe
}
template<class T>
Queue<T>::~Queue()
{
	delete []arr;
}
template<class T>
void Queue<T>::Enqueue(T no)
{
	if((Rear==Size-1 && (Front==0)) || (Rear==(Front==-1%(Size-1)))) 
	{
		cout<<"Queue is Full:-\n";
		return ;
	}
	else if(Front==-1)//ith first element yeil aani Front 0 hoil
	{
		Front = 0;
		Rear = 0;
		arr[Rear] = no;
	}
	else if((Rear==Size-1) && (Front!=0))
	{
		Rear = 0;
		arr[Rear] = no;
	}
	else
	{
		Rear++;//ith 2nd element pasun pudhche sgle element yetil
		arr[Rear] = no;
	}
}
template<class T>
T Queue<T>::Dequeue()
{
	T Temp;
	if(Front==-1)
	{
		cout<<"Queue is Empty:-\n";
		return -1;
	}
	Temp = arr[Front];
	if(Front==Rear)
	{
		Front = -1;
		Rear = 1;
	}
	else if(Front==Size-1)
	{
		Front = 0;
	}
	else
	{
		Front++;
	}
	return Temp;
}
template<class T>
void Queue<T>::Display()
{
	int iCnt = 1;
	if(Front==-1)		
	{
		cout<<"Queue is Empty:-";
		return ;
	}
	else
	{
		for(iCnt=Front;iCnt!=Rear;iCnt++)
		{
			cout<<"|"<<arr[iCnt]<<"|-";
			
		}
	}
}
int main()
{
	Queue <int>obj1(4);
	Queue <char>obj2(5);


	obj1.Enqueue(11);
	obj1.Enqueue(21);
	obj1.Enqueue(51);
	obj1.Enqueue(101);
	obj1.Enqueue(75);//ha call error deil bcz queue full zali ahe

//	cout<<obj1.Display();
	
	obj1.Dequeue();
	obj1.Dequeue();

	obj1.Enqueue(111);
	obj1.Enqueue(121);
	obj1.Enqueue(151);//ha call error deil bcz queue full zali ahe prt

	obj1.Dequeue();
	obj1.Enqueue(151);

	return 0;
}
