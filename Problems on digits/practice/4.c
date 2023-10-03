#include<stdio.h>

int Odd(int iValue)
{
	int iSum=0,iDigit=0,iMult=0;
	while(iValue!=0)
	{
		iDigit=iValue%10;
		if((iDigit%2)!=0)
		{
			if(iMult==0)
			{
				iMult=1;
			}
			iMult=iMult*iDigit;
		}
		iValue=iValue/10;
	}
	return iMult;
}
int main()
{
	int iNo,iRet;
	printf("Enter the No:");
	scanf("%d",&iNo);
	iRet=Odd(iNo);
	printf("Ans is %d",iRet);
	return 0;
}
