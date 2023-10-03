#include<stdio.h>


void Display(int iValue)
{
	if(iValue<10)
	{	
		printf("Hello\n");//ith jr if condi madhe jr ekch statment asl tr {} curly braket nahi lihili tri chale
	}
	else
	{
		printf("Demo\n");
	}
}
int main()
{
	int iNo;
	printf("Entr the no:");
	scanf("%d",&iNo);
	Display(iNo);
	return 0;
}
