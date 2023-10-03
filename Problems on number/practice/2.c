#include<stdio.h>

void Reverse(int iValue)
{
	int iCnt=iValue;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	while(iCnt>=1)
	{
		if((iCnt%iValue)==0)
		{
			printf("%d\n",iCnt);
		}
		iCnt--;
	}
}
int main()
{
	int iNo;
	printf("Enter the No:");
	scanf("%d",&iNo);
	Reverse(iNo);
	return 0;
}
