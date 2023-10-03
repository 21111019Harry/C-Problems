#include<stdio.h>

void Pattern(int iValue)
{
	int iCnt=0;
	for(iCnt=-iValue;iCnt<=iValue;iCnt++)
	{
		printf("%d * ",iCnt);
	}
}
int main()
{
	int iNo;
	printf("Enter the No:");
	scanf("%d",&iNo);
	Pattern(iNo);
	return 0;
}
