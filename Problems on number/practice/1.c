#include<stdio.h>


int Factorial(int iValue)
{
	int iCnt=0,iSum=0;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	for(iCnt=1;iCnt<iValue;iCnt++)
	{
		if((iValue%iCnt)==0)
		{
		//	printf("%d\n",iCnt);
			iSum=iSum+iCnt;
		}
	}
	if(iSum==iValue)
	{
		printf("prime no:");
	}
	else
		printf("not prime no:");
}
int main()
{
	int iNo,iRet;
	printf("Enter the no.");
	scanf("%d",&iNo);
	iRet=Factorial(iNo);
//	printf("Addition is %d",iRet);
	return 0;
}
