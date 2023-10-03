#include<stdio.h>


void Add(int iValue)
{
	int iDigit=0,iEven=0,iOdd=0,iCnt=0;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	if(iValue==0)
	{
		printf("No");
	}
	while(iValue!=0)
	{
		iDigit=iValue%10;
		if((iDigit%2)==0)
		{
			iCnt++;
		//	iEven++;
		//	iEven=iEven+iDigit;
		}
		else
		{
			iCnt--;
		//	iOdd++;
		//	iOdd=iOdd+iDigit;
		}
		iValue=iValue/10;
	}
	if(iCnt==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
int main()
{
	int iNo=0;
	printf("Enter the No:");
	scanf("%d",&iNo);
	Add(iNo);
	return 0;
}
