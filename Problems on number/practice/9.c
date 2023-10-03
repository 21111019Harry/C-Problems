#include<stdio.h>

void perfect(int iValue)
{
	int iCnt=iValue/2,iSum=0;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	while(iCnt<=1)
	{
		if((iValue%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
		iCnt++;
	}
	if(iSum==iValue)
	{
		printf("YES");
	}
	else
		printf("NO");
}
int main()
{
	int iNo;
	printf("Enter the No:");
	scanf("%d",&iNo);
	perfect(iNo);
	return 0;
}
