#include<iostream>


using namespace std;

class Stack
{
	private:
		int *arr;//ya class chya  characteristics ahet
		int iSize;//-//-
		int Top;//-//-
	public:
		Stack(int no);
		~Stack();
		void Push(int iValue);
		int Pop();
		void Display();

	/*	Stack(int no = 5)//ha paramatries with default constructor ahe mhnje value nahi dili tr to 5 consider krel aani ha 5 aapn random dila ahe tumhi ith kahihi deu shkta. js aapn arr[10]; kraycho as.
		{
			iSize = no;
			Top = -1;//-1 mhnje stack empty ahe to first time create hotoy.
			arr = new int [iSize];
		}
		~Stack()
		{
			delete []arr;//ith aapn ti dynamic allocate keleli memory delete hoil
		}
		void Push(int iValue)
		{
			if(Top==iSize-1)
			{
				return ;
			}
			Top++;//ith aapn stack madhe value aali ki tyala count krtoy
			arr[Top] = iValue;//ith aaleli value hi aapn array madhe taktoy.
		}
		int Pop()
		{
			if(Top==-1)
			{
				cout<<"Stack is Empty:-";
				return 0;
			}
			else
			{
				int no = arr[Top];
				Top--;
				return no;
			}
		}*/

};
Stack::Stack(int no = 5)
{
	iSize = no;
	Top = -1;
	arr = new int [iSize];
}
Stack::~Stack()
{
	delete []arr;
}
void Stack::Push(int iValue)
{
	if(Top==iSize-1)
	{
		 cout<<"Stack is Full:-\n";
		 return ;
	}
	Top++;
	arr[Top] = iValue;
}
int Stack::Pop()
{
	if(Top==-1)
	{
		cout<<"Stack is Empty:-";
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
	int size=Top;
	if(Top!=-1)
	{
		cout<<"Elements Are : \n";	
		while(size!=1)
		{
			cout<<"|"<<arr[size]<<"|\n";
			size--;
		}
	}

}
int main()
{
	Stack obj1;
	Stack obj2(3);//ith aapn object create kela ani tyala size 3 dili jr size nahi dili tr to ti 5 consider krel

	obj1.Push(11);
	obj1.Push(21);
	obj1.Push(51);
	obj1.Push(61);
	obj1.Push(71);

	obj1.Display();

	cout<<obj1.Pop()<<"\n";//71
	cout<<obj1.Pop()<<"\n";//61
	cout<<obj1.Pop()<<"\n";//51
	cout<<obj1.Pop()<<"\n";//21
	cout<<obj1.Pop()<<"\n";//11
	cout<<obj1.Pop()<<"\n";//Stack is Empty

	obj2.Push(300);
	obj2.Push(200);
	obj2.Push(100);
//	obj2.Push(400);//he nahi janar bcz aapla stack 3 cha ahe ith Stack is Full as print hoil.

	cout<<obj2.Pop()<<"\n";//100
	cout<<obj2.Pop()<<"\n";//200
	cout<<obj2.Pop()<<"\n";//300
	cout<<obj2.Pop()<<"\n";//Stack is Empty

	return 0;
}
