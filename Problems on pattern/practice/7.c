#include<stdio.h>



void Pattern(int iValue)
{
	int iCnt=0,iRow=0,iCol=0;
	for(iRow=1;iRow<=iValue;iRow++)
	{
		for(iCol=1;iCol<=iValue;iCol++)
		{
			printf("%d",iCol);
		}
		printf("\n");
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
