#include<stdio.h>


void Perfect(int iValue)
{
	int iCnt=1,iSum=0;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	while(iCnt<iValue)
	{
		if((iValue%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
		iCnt++;
	}
	if(iSum==iValue)
	{
		printf("Perfect No");
	}
	else
		printf("Not Perfect");
}
int main()
{
	int iNo;
	printf("Enter the No:");
	scanf("%d",&iNo);
	Perfect(iNo);
	return 0;
}
