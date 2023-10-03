#include<stdio.h>


int Odd(int iValue)
{
	int iDigit=0,iSum=0,iMult=0;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	while(iValue>0)
	{
		iDigit=iValue%10;
		if((iDigit%2)!=0)
		{
		/*	if(iMult==0)
			{
				iMult=1;
			}*/
			iMult=iMult+iDigit;
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
	printf("Addition is %d",iRet);
	return 0;
}

