#include<stdio.h>
#define True 1
#define False 0
int Prime(int iValue)
{
	int iCnt=iValue/2;
	if((iValue==1) || (iCnt==-1) || (iCnt==0))
	{
		return False;
	}
	if(iValue<0)
	{
		iValue=-iValue;
	}
	while(iCnt>1)
	{
		if((iValue%iCnt)==0)
		{
			break;
		}
		iCnt--;
	}
	if(iCnt==1)
	{
		return True;
	}
	else
		return False;
}
int main()
{
	int iNo,iRet;
	printf("Enter the No:");
	scanf("%d",&iNo);
	iRet=Prime(iNo);
	if(iRet==True)
	{
		printf("Prime No:");
	}
	else
		printf("Not Prime");
	return 0;
}
