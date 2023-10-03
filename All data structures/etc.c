#include<stdio.h>
#include<malloc.h>

void Push(int no, int iTop, int arr[]);
int Pop(int iTop, int arr[]);
void Display(int Top, int arr[]);
int main()
{
	int Top = -1, no = 5, iRet = 0;
	int iSize = 0;
	int arr[10];

	Push(no, Top, arr);
	iRet = Pop(Top,arr);
	printf("%d",iRet);
	Display(Top, arr);
	return 0;
}
void Push(int no, int iTop, int arr[])
{

//	newN = (int *)malloc(no*sizeof(int));

	if(iTop==no-1)
	{
		printf("Stack is Full:-");
		return ;
	}
	iTop++;
	arr[iTop] = no;
}
int Pop(int iTop, int arr[])
{
	int iValue = 0;

	if(iTop==-1)
	{
		printf("Stack is Empty:-");
		return 0;
	}
	else
	{
		iValue = arr[iTop];
		iTop--;
		return iValue;
	}
}
void Dispaly(int Top,  int arr[])
{
	while(Top!=-1)
	{
		printf("%d",arr[Top]);
		Top--;
	}
}
