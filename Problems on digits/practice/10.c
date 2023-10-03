#include<stdio.h>


void Check(int iValue)
{
	int iDigit=0,iCnt=0;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	for(iCnt=0;iValue!=0;iCnt++)
	{
		iDigit=iValue%10;
		if(iDigit==5)
		{
			break;
		}
		iValue=iValue/10;
	}
	if(iDigit==5)
	{
		printf("Yes");
	}
	else
		printf("No");
}
int main()
{
	int iNo=0;
	printf("Enter the No:");
	scanf("%d",&iNo);
	Check(iNo);
	return 0;
}
