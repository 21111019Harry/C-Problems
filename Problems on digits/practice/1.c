#include<stdio.h>


int Digit(int iValue)
{
	int iCnt;
	if(iValue==0)
	{
		printf("No is 1");
	}
	if(iValue<0)
	{
		iValue=-iValue;
	}
	for(iCnt=0;iValue!=0;iCnt++)
	{
		iValue=iValue/10;
	}
	return iCnt;
}
int main()
{
	int iNo,iRet;
	printf("Enter the No:");
	scanf("%d",&iNo);
	iRet=Digit(iNo);
	printf("No is %d",iRet);
	return 0;
}

