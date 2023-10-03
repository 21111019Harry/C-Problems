#include<iostream>

using namespace std;

class Stack
{
	private:
		int Top; 
		int *arr;
		int iSize;
	public:
		Stack(int no);
		void Push(int iValue);
		int Pop();
		void Display();
};

Stack::Stack(int no = 5)
{
	Top = -1;
	iSize = no;
	arr = new int [iSize];
}
void Stack::Push(int iValue)
{
	if(Top==iSize-1)
	{
		cout<<"Stack is Empty:-";
		return ;
	}
	Top++;
	arr[Top] = iValue;
}
int Stack::Pop()
{
	if(Top==-1)
	{
		cout<<"Stack is Full:-";
		return 0;
	}
	else
	{
		int no = arr[Top];
		Top--;
		return no;
	}
}
void Stack::Display()
{
	int Temp = Top;
	while(Temp!=-1)
	{
		cout<<"|"<<arr[Temp]<<"|\n";
		Temp--;
	}
}
int main()
{
	Stack obj1;

	obj1.Push(30);
	obj1.Push(20);
	obj1.Push(10);

	obj1.Display();

	return 0;
}

