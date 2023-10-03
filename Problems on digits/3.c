#include<stdio.h>

//accept no from user return addition of digits which are greater than 5
int GreaterDigit(int iNo)//he function aapn i/p dilyavr tyachyatlya 5 peksha mothya digit chi addition krun deil 
{
	int iSum=0,iCnt=0,iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;

		if(iDigit>5)
		{
		 	iSum=iSum+iDigit;
		}
		iNo=iNo/10;
	}
	return iSum;
}
int GreaterDigitX(int iNo1,int iNo2)//he function aapn i/p dilyavr aaplyalach vicharnar ki kiti number peksha mothya no chi addition krun pahije
{
	int iSum=0,iDigit=0;
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	while(iNo1>0)
	{
		iDigit=iNo1%10;
		if(iDigit>iNo2)
		{
			iSum=iSum+iDigit;
		}
		iNo1=iNo1/10;
	}
	return iSum;
}
int main()
{
	int iValue=0,iRet=0;
	int iValue1=0,iValue2=0,iRet1=0;
	///////////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue);
	iRet=GreaterDigit(iValue);
	printf("the addition is :%d\n",iRet);
	
	/////////////////////////////////////
	printf("Enter the no:");
	scanf("%d %d",&iValue1,&iValue2);
	iRet1=GreaterDigitX(iValue1,iValue2);
	printf("the addition is :%d",iRet1);
	return 0;
}





