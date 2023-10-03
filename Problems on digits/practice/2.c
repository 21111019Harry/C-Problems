#include<stdio.h>

int Add(int iValue)
{
	int iDigit=0,iSum=0;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	while(iValue!=0)
	{
		iDigit=iValue%10;
		iSum=iSum+iDigit;
		iValue=iValue/10;
	}
	return iSum;
}
int main()
{
	int iNo,iRet;
	printf("Enter the No:");
	scanf("%d",&iNo);
	iRet=Add(iNo);
	printf("Add is %d",iRet);
	return 0;
}
