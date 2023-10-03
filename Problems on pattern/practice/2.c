#include<stdio.h>

void Pattern(int iValue)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		if((iCnt%2)==0)
		{
			printf(" # ");
		}
		else
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
