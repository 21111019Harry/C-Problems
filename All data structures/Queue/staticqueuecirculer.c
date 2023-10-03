#include<stdio.h>



int arr[6];
int size = 6;
int Front = -1;
int Rear = -1;

void Enqueue(int no)
{
	if((Rear==size-1) && (Front==0) || (Rear==(Front==-1%(size-1))) )
	{
		printf("Queue is Full:-");
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
		arr[Rear] = no;
	}
}
int Dequeue()
{
	int Temp = 0;
	if(Front==-1)
	{
		printf("Queue is Empty:-\n");
		return -1;
	}
	Temp = arr[Front];
	if(Front==Rear)
	{
		Rear = -1;
		Front = -1;
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
void Display()
{
	int i = 0;
	if(Front==-1)
	{
		printf("Queue is Empty:-\n");
		return ;
	}
	else
	{
		for(i=Front;i!=Rear;i++)
		{
			printf("|%d|->",arr[i]);
		}
	}
}
int main()
{

	Enqueue(10);
	Enqueue(20);
	Enqueue(30);

	Dequeue();
	Display();
	return 0;
}
