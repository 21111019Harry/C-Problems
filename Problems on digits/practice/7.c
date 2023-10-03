#include<stdio.h>


int Product(int iValue)
{
	int iDigit=0,iMult=0;
	while(iValue!=0)
	{
		iDigit=iValue%10;
		if(iMult==0)
		{
			iMult=1;
		}
		iMult=iMult*iDigit;
		iValue=iValue/10;
	}
	return iMult;
}
int main()
{
	int iNo=0,iRet=0;
	printf("Enter the No:");
	scanf("%d",&iNo);
	iRet=Product(iNo);
	printf("Ans is %d",iRet);
	return 0;
}

