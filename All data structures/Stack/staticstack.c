#include<stdio.h>



	int arr[5];
	int iSize = 5;
	int Top = -1;
void Push(int no)
{
	if(Top==iSize-1)
	{
		printf("Stack is Full:-");
		return ;
	}
	Top++;
	arr[Top] = no;
}
int Pop()
{
	if(Top==-1)
	{
		printf("Stack is Empty:-");
		return 0;
	}
	else
	{
		int no = arr[Top];
		Top--;
		return no;
	}
}
int main()
{
	int i = 0;

	Push(30);
	Push(20);
	Push(10);

//	Pop();

	for(i=1;i<4;i++)
	{
		printf("|%d|\n",Pop());
	}
	return 0;
}
