#include<stdio.h>

void Display(int iValue)
{
	int iDigit=0;
	while(iValue>0)
	{
		iDigit=iValue%10;
		if((iDigit%3)==0)
		{
			printf("%d\n",iDigit);
		}
		iValue=iValue/10;
	}
}
int main()
{
	int iNo;
	printf("Enter the No:");
	scanf("%d",&iNo);
	Display(iNo);
	return 0;
}
