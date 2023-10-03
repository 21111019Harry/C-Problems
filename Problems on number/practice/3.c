#include<stdio.h>

int LFD(int iValue)
{
	int iCnt=iValue/2;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	while(iCnt>=1)
	{
		if((iValue%iCnt)==0)
		{
			break;
		}
		iCnt--;
	}
	return iCnt;
}
int main()
{
	int iNo,iRet;
	printf("Enter the No:");
	scanf("%d",&iNo);
	iRet=LFD(iNo);
	printf("The LFD %d",iRet);
	return 0;
}
