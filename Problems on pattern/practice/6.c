#include<stdio.h>


void Pattern(int iValue)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		printf("%d",iCnt);
	}
	for(iCnt=iValue;iCnt>=1;iCnt--)
	{
		printf("*");
	}
	for(iCnt=iValue;iCnt>=1;iCnt--)
	{
		printf("%d",iCnt);
	}
}
int main()
{
	int iNo=0;
	printf("Enter the No:");
	scanf("%d",&iNo);
	Pattern(iNo);
	return 0;
}
